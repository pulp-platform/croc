// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

const test = require('node:test');
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const { resolveContext, canPublish } = require('./report_context.js');

process.env.GITHUB_REPOSITORY = 'ethz-croc/croc';

const SOURCE_SHA = 'a'.repeat(40);
const OTHER_SHA = 'b'.repeat(40);

function run({ id, sha = SOURCE_SHA, branch = 'main', attempt = 1, status = 'completed', conclusion = 'success', event = 'push', repository = 'ethz-croc/croc', workflowId = 2 }) {
  return {
    id,
    workflow_id: workflowId,
    run_number: id,
    run_attempt: attempt,
    head_sha: sha,
    head_branch: branch,
    head_repository: { full_name: repository },
    event,
    status,
    conclusion,
    created_at: new Date(id * 1000).toISOString(),
    run_started_at: '2026-10-14T12:00:00Z',
    updated_at: '2026-10-14T13:00:00Z',
    html_url: `https://github.com/ethz-croc/croc/actions/runs/${id}`,
  };
}

function job(name, attempt, id, startedAt, completedAt, conclusion) {
  return { name, run_attempt: attempt, id, started_at: startedAt, completed_at: completedAt, conclusion };
}

function artifact(name, runId, sha, id, createdAt) {
  return {
    id,
    name,
    expired: false,
    updated_at: new Date(id * 1000).toISOString(),
    created_at: createdAt,
    workflow_run: { id: runId, head_sha: sha },
  };
}

function fakeGithub({ shortRuns, shortArtifacts, jobs }) {
  const source = run({ id: 101, attempt: 4, workflowId: 1 });
  return {
    paginate: async (endpoint, params) => {
      if (params.workflow_id === 2) return shortRuns;
      if (params.run_id === 202 && params.filter === 'all') return jobs;
      if (params.run_id === 101) return [
        artifact('croc-report-backend', 101, SOURCE_SHA, 1, '2026-10-14T12:01:00Z'),
        artifact('croc-yosys-out', 101, SOURCE_SHA, 2, '2026-10-14T12:01:00Z'),
        artifact('croc-drc', 101, SOURCE_SHA, 3, '2026-10-14T12:01:00Z'),
        artifact('croc-gds-sealed', 101, SOURCE_SHA, 5, '2026-10-14T12:01:00Z'),
        artifact('croc-openroad-out', 101, SOURCE_SHA, 6, '2026-10-14T12:01:00Z'),
        artifact('croc-report-backend', 101, SOURCE_SHA, 4, '2026-10-14T11:59:00Z'),
      ];
      if (params.run_id === 202) return shortArtifacts;
      throw new Error(`Unexpected paginate call ${JSON.stringify(params)}`);
    },
    rest: {
      actions: {
        getWorkflowRun: async () => ({ data: source }),
        getWorkflow: async ({ workflow_id }) => ({ data: { id: workflow_id === 'full-flow.yml' ? 1 : 2 } }),
        listWorkflowRunArtifacts: Symbol('listWorkflowRunArtifacts'),
        listJobsForWorkflowRun: async () => ({ data: { jobs } }),
      },
      repos: {
        getCommit: async () => ({ data: { commit: { committer: { date: '2026-10-14T10:00:00Z' } } } }),
      },
    },
  };
}

const fakeCore = {
  setOutput() {},
  summary: {
    addHeading() { return this; },
    addLink() { return this; },
    addRaw() { return this; },
    async write() {},
  },
};

test('only publishes the latest successful attempt, protecting reruns and pending newer runs', async () => {
  for (const [runs, expected] of [
    [[run({id:101})], true],
    [[run({id:101}), run({id:102})], false],
    [[run({id:101}), run({id:102, status:'in_progress', conclusion:null})], false],
    [[run({id:101, attempt:2, status:'in_progress', conclusion:null})], false],
    [[run({id:101, attempt:2})], false],
    [[run({id:101}), run({id:102, event:'pull_request'})], true],
    [[run({id:101}), run({id:102, repository:'fork/croc'})], true],
    [[run({id:101}), run({id:102, conclusion:'failure'})], false],
  ]) {
    const github = { paginate:async()=>runs, rest:{actions:{listWorkflowRuns:null}} };
    assert.equal(await canPublish({github, sourceRunId:'101', sourceAttempt:'1'}), expected);
  }
});

test('matches exact SHA across branches and recovers reused job execution attempts', async () => {
  const shortRuns = [
    run({ id: 201, sha: OTHER_SHA }),
    run({ id: 203, repository: 'fork/croc' }),
    run({ id: 202, branch: 'feature', attempt: 2, conclusion: 'failure' }),
  ];
  const github = fakeGithub({
    shortRuns,
    shortArtifacts: [
      artifact('croc-report-rtl', 202, SOURCE_SHA, 20, '2026-10-14T12:15:00Z'),
      artifact('croc-report-netlist', 202, SOURCE_SHA, 21, '2026-10-14T12:25:00Z'),
      artifact('croc-report-netlist', 202, SOURCE_SHA, 22, '2026-10-14T12:35:00Z'),
    ],
    jobs: [
      job('simulation', 1, 301, '2026-10-14T12:10:00Z', '2026-10-14T12:20:00Z', 'success'),
      job('simulation', 2, 305, '2026-10-14T12:10:00Z', '2026-10-14T12:20:00Z', 'success'),
      job('netlist-simulation', 1, 300, '2026-10-14T12:21:00Z', '2026-10-14T12:25:00Z', 'failure'),
      job('netlist-simulation', 2, 302, '2026-10-14T12:30:00Z', '2026-10-14T12:40:00Z', 'success'),
    ],
  });
  const context = await resolveContext({
    github,
    core: fakeCore,
    sourceRunId: '101',
    renderSha: SOURCE_SHA,
    renderRunId: '303',
  });
  assert.equal(context.source_sha, SOURCE_SHA);
  assert.equal(context.backend.attempt, 4);
  assert.equal(context.artifacts.backend.id, 1);
  assert.equal(context.simulation.id, 202);
  assert.equal(context.simulation.attempt, 2);
  assert.equal(context.simulation.jobs.rtl.attempt, 1);
  assert.equal(context.simulation.jobs.netlist.attempt, 2);
  assert.equal(context.artifacts.rtl.id, 20);
  assert.equal(context.artifacts.netlist.id, 22);
});

test('fails when a successful simulation job has no current-attempt report artifact', async () => {
  const github = fakeGithub({
    shortRuns: [run({ id: 202, attempt: 2, conclusion: 'success' })],
    shortArtifacts: [artifact('croc-report-rtl', 202, SOURCE_SHA, 22, '2026-10-14T12:15:00Z')],
    jobs: [
      job('simulation', 2, 301, '2026-10-14T12:10:00Z', '2026-10-14T12:20:00Z', 'success'),
      job('netlist-simulation', 2, 302, '2026-10-14T12:30:00Z', '2026-10-14T12:40:00Z', 'success'),
    ],
  });
  await assert.rejects(() => resolveContext({
    github,
    core: fakeCore,
    sourceRunId: '101',
    renderSha: SOURCE_SHA,
    renderRunId: '303',
  }), /without required croc-report-netlist artifact/);
});

test('rejects a stale netlist report from an earlier job execution', async () => {
  const github = fakeGithub({
    shortRuns: [run({ id: 202, attempt: 2, conclusion: 'success' })],
    shortArtifacts: [
      artifact('croc-report-rtl', 202, SOURCE_SHA, 22, '2026-10-14T12:15:00Z'),
      artifact('croc-report-netlist', 202, SOURCE_SHA, 23, '2026-10-14T12:25:00Z'),
    ],
    jobs: [
      job('simulation', 1, 301, '2026-10-14T12:10:00Z', '2026-10-14T12:20:00Z', 'success'),
      job('netlist-simulation', 1, 300, '2026-10-14T12:21:00Z', '2026-10-14T12:25:00Z', 'failure'),
      job('netlist-simulation', 2, 302, '2026-10-14T12:30:00Z', '2026-10-14T12:40:00Z', 'success'),
    ],
  });
  await assert.rejects(() => resolveContext({
    github,
    core: fakeCore,
    sourceRunId: '101',
    renderSha: SOURCE_SHA,
    renderRunId: '303',
  }), /without required croc-report-netlist artifact/);
});

test('artifact-ID downloads merge files directly into the report input paths', () => {
  const workflowPath = path.join(__dirname, '..', 'workflows', 'artistic.yml');
  const workflow = fs.readFileSync(workflowPath, 'utf8');
  const downloads = [
    ['Download sealed GDS', 'klayout/out'],
    ['Download OpenROAD outputs', 'openroad'],
    ['Download report backend', 'report-inputs/backend'],
    ['Download Yosys report inputs', 'yosys'],
    ['Download DRC report inputs', 'klayout/drc-minimal'],
    ['Download RTL simulation report inputs', 'report-inputs/rtl'],
    ['Download netlist simulation report inputs', 'report-inputs/netlist'],
  ];
  for (const [name, destination] of downloads) {
    const start = workflow.indexOf(`      - name: ${name}\n`);
    assert.notEqual(start, -1, `missing download step ${name}`);
    const nextStep = workflow.indexOf('\n      - name: ', start + 1);
    const step = workflow.slice(start, nextStep === -1 ? undefined : nextStep);
    assert.match(step, /uses: actions\/download-artifact@v4/);
    assert.match(step, /artifact-ids:/);
    assert.match(step, /merge-multiple: true/);
    assert.ok(step.includes(`path: ${destination}`), `${name} does not download to ${destination}`);
  }
});

test('rerunnable artifact uploads replace artifacts with the same name', () => {
  for (const workflowName of ['full-flow.yml', 'short-flow.yml', 'artistic.yml']) {
    const workflow = fs.readFileSync(path.join(__dirname, '..', 'workflows', workflowName), 'utf8');
    const steps = [...workflow.matchAll(/      - name: [^\n]+\n([\s\S]*?)(?=\n      - name: |\n  deploy:|$)/g)];
    const uploads = steps.filter((match) => match[1].includes('uses: actions/upload-artifact@v4'));
    assert.ok(uploads.length > 0, `${workflowName} has no upload-artifact steps`);
    for (const upload of uploads) {
      assert.match(upload[1], /overwrite: true/, `${workflowName} has a non-replacing upload-artifact step`);
    }
  }
});
