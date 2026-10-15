// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

function repositoryParts() {
  const repository = process.env.GITHUB_REPOSITORY;
  if (typeof repository !== 'string' || !/^[^/]+\/[^/]+$/.test(repository)) {
    throw new Error(`Invalid GITHUB_REPOSITORY: ${repository}`);
  }
  const [owner, repo] = repository.split('/');
  return { owner, repo };
}

const sleep = (ms) => new Promise((resolve) => setTimeout(resolve, ms));

async function workflowRuns(github, repo, workflowId, sha) {
  const runs = await github.paginate(github.rest.actions.listWorkflowRuns, {
    ...repo,
    workflow_id: workflowId,
    head_sha: sha,
    per_page: 100,
  });
  return runs;
}

function isMatchingShortRun(run, repository, sha) {
  return run.head_sha === sha &&
    run.head_repository?.full_name === repository &&
    run.event === 'push';
}

function newestRun(runs) {
  return [...runs].sort((a, b) =>
    (b.run_number - a.run_number) ||
    (b.run_attempt - a.run_attempt) ||
    (Date.parse(b.created_at) - Date.parse(a.created_at))
  )[0];
}

async function listArtifacts(github, repo, run) {
  const artifacts = await github.paginate(github.rest.actions.listWorkflowRunArtifacts, {
    ...repo,
    run_id: run.id,
    per_page: 100,
  });
  return artifacts.filter((artifact) => !artifact.expired &&
    artifact.workflow_run?.id === run.id &&
    artifact.workflow_run?.head_sha === run.head_sha);
}

function artifactState(artifacts, name, startedAt, completedAt) {
  const start = Date.parse(startedAt || '');
  const finish = Date.parse(completedAt || '');
  const artifact = Number.isFinite(start) && Number.isFinite(finish)
    ? artifacts
      .filter((candidate) => candidate.name === name &&
        Date.parse(candidate.created_at) >= start &&
        Date.parse(candidate.created_at) <= finish)
      .sort((a, b) => Date.parse(b.created_at) - Date.parse(a.created_at))[0]
    : null;
  return artifact
    ? { available: true, id: artifact.id, updated_at: artifact.updated_at }
    : { available: false, reason: 'missing, expired, or outside the relevant execution interval' };
}

async function resolveContext({ github, core, sourceRunId, renderSha, renderRunId }) {
  const repo = repositoryParts();
  const repository = `${repo.owner}/${repo.repo}`;
  const { data: sourceRun } = await github.rest.actions.getWorkflowRun({
    ...repo,
    run_id: Number(sourceRunId),
  });
  const { data: fullWorkflow } = await github.rest.actions.getWorkflow({
    ...repo,
    workflow_id: 'full-flow.yml',
  });
  if (sourceRun.workflow_id !== fullWorkflow.id || sourceRun.conclusion !== 'success') {
    throw new Error('Input artifacts must come from a successful Full Flow run');
  }
  if (!sourceRun.head_sha) throw new Error('Full Flow run has no source commit SHA');

  let sourceDate = sourceRun.head_commit?.timestamp;
  if (!sourceDate) {
    const { data: commit } = await github.rest.repos.getCommit({
      ...repo,
      ref: sourceRun.head_sha,
    });
    sourceDate = commit.commit?.committer?.date || commit.commit?.author?.date;
  }
  if (!sourceDate) throw new Error(`Could not resolve commit date for ${sourceRun.head_sha}`);

  let shortRun = null;
  const { data: shortWorkflow } = await github.rest.actions.getWorkflow({
    ...repo,
    workflow_id: 'short-flow.yml',
  });
  const deadline = Date.now() + 30 * 60 * 1000;
  while (true) {
    const runs = await workflowRuns(github, repo, shortWorkflow.id, sourceRun.head_sha);
    const matchingRuns = runs.filter((run) =>
      isMatchingShortRun(run, repository, sourceRun.head_sha));
    shortRun = newestRun(matchingRuns);
    if (!shortRun || !['queued', 'in_progress', 'waiting', 'requested', 'pending'].includes(shortRun.status)) break;
    if (Date.now() >= deadline) {
      throw new Error(`Short Flow ${shortRun.id} for ${sourceRun.head_sha} did not complete within 30 minutes`);
    }
    await sleep(30 * 1000);
  }

  const sourceArtifacts = await listArtifacts(github, repo, sourceRun);
  const sourceArtifactStates = {
    backend: artifactState(sourceArtifacts, 'croc-report-backend', sourceRun.run_started_at, sourceRun.updated_at),
    yosys: artifactState(sourceArtifacts, 'croc-yosys-out', sourceRun.run_started_at, sourceRun.updated_at),
    drc: artifactState(sourceArtifacts, 'croc-drc', sourceRun.run_started_at, sourceRun.updated_at),
    sealed_gds: artifactState(sourceArtifacts, 'croc-gds-sealed', sourceRun.run_started_at, sourceRun.updated_at),
    openroad: artifactState(sourceArtifacts, 'croc-openroad-out', sourceRun.run_started_at, sourceRun.updated_at),
  };
  for (const name of ['backend', 'yosys', 'drc', 'sealed_gds', 'openroad']) {
    if (!sourceArtifactStates[name].available) {
      throw new Error(`Required Full Flow artifact ${name} is unavailable for run ${sourceRun.id} attempt ${sourceRun.run_attempt}`);
    }
  }

  let simulation = null;
  const reportArtifacts = {
    rtl: { available: false, reason: 'no matching Short Flow run' },
    netlist: { available: false, reason: 'no matching Short Flow run' },
  };
  if (shortRun) {
    simulation = {
      id: shortRun.id,
      attempt: shortRun.run_attempt,
      url: shortRun.html_url,
      conclusion: shortRun.conclusion,
    };
    const simulationArtifacts = await listArtifacts(github, repo, shortRun);
    const jobs = await github.paginate(github.rest.actions.listJobsForWorkflowRun, {
      ...repo,
      run_id: shortRun.id,
      per_page: 100,
      filter: 'all',
    });
    const simulationJobs = {};
    for (const [name, jobName] of [['rtl', 'simulation'], ['netlist', 'netlist-simulation']]) {
      const job = jobs
        .filter((candidate) => candidate.name === jobName)
        .sort((a, b) => (b.run_attempt - a.run_attempt) || (b.id - a.id))[0];
      if (!job || !Number.isInteger(job.run_attempt)) {
        throw new Error(`Could not resolve the latest execution of Short Flow job ${jobName} (run ${shortRun.id})`);
      }
      // Partial reruns clone successful jobs with a new attempt/id but the old execution timestamps.
      const execution = jobs
        .filter((candidate) => candidate.name === jobName &&
          candidate.started_at === job.started_at && candidate.completed_at === job.completed_at)
        .sort((a, b) => (a.run_attempt - b.run_attempt) || (a.id - b.id))[0];
      simulationJobs[name] = {
        attempt: execution.run_attempt,
        job_id: execution.id,
        conclusion: job.conclusion,
      };
      reportArtifacts[name] = artifactState(
        simulationArtifacts,
        `croc-report-${name}`,
        job.started_at,
        job.completed_at,
      );
      const failedOrSkipped = ['failure', 'cancelled', 'skipped', 'timed_out', 'startup_failure', 'action_required'].includes(job.conclusion);
      if (!reportArtifacts[name].available && !failedOrSkipped) {
        throw new Error(`Short Flow ${jobName} completed without required croc-report-${name} artifact (run ${shortRun.id} job attempt ${execution.run_attempt})`);
      }
    }
    simulation.jobs = simulationJobs;
  }

  const context = {
    repository,
    source_sha: sourceRun.head_sha,
    source_date: sourceDate,
    source_attempt: sourceRun.run_attempt,
    backend: {
      id: sourceRun.id,
      attempt: sourceRun.run_attempt,
      url: sourceRun.html_url,
      conclusion: sourceRun.conclusion,
    },
    simulation,
    render_sha: renderSha,
    render_run_id: Number(renderRunId),
    artifacts: {
      ...sourceArtifactStates,
      ...reportArtifacts,
    },
  };
  for (const name of ['backend', 'yosys', 'drc', 'sealed_gds', 'openroad', 'rtl', 'netlist']) {
    core.setOutput(`${name}_artifact_id`, context.artifacts[name].available ? String(context.artifacts[name].id) : '');
  }
  core.setOutput('simulation_id', simulation ? String(simulation.id) : '');
  core.setOutput('backend_attempt', String(sourceRun.run_attempt));
  await core.summary.addHeading('Artistic inputs')
    .addLink(`Full Flow ${sourceRun.id}`, sourceRun.html_url)
    .addRaw(`\n\nSource revision: ${sourceRun.head_sha}\n\nRender revision: ${renderSha}\n`)
    .write();
  return context;
}

async function canPublish({ github, sourceRunId, sourceAttempt }) {
  const repo = repositoryParts();
  const runs = await github.paginate(github.rest.actions.listWorkflowRuns, {
    ...repo, workflow_id: 'full-flow.yml', branch: 'main', per_page: 100,
  });
  const latest = newestRun(runs.filter((run) =>
    run.head_branch === 'main' && run.head_repository?.full_name === `${repo.owner}/${repo.repo}` &&
    ['push', 'workflow_dispatch', 'release'].includes(run.event)));
  return latest?.id === Number(sourceRunId) && latest.run_attempt === Number(sourceAttempt) &&
    latest.status === 'completed' && latest.conclusion === 'success';
}

module.exports = { resolveContext, canPublish };
