REM ========================================================================
REM SPDX-FileCopyrightText: 2022-2023 Harald Pretl and Georg Zachl
REM Johannes Kepler University, Institute for Integrated Circuits
REM
REM Licensed under the Apache License, Version 2.0 (the "License");
REM you may not use this file except in compliance with the License.
REM You may obtain a copy of the License at
REM
REM     http://www.apache.org/licenses/LICENSE-2.0
REM
REM Unless required by applicable law or agreed to in writing, software
REM distributed under the License is distributed on an "AS IS" BASIS,
REM WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
REM See the License for the specific language governing permissions and
REM limitations under the License.
REM SPDX-License-Identifier: Apache-2.0
REM ========================================================================
@echo off

SETLOCAL

SET DESIGNS=%~dp0

SET DEFAULT_DESIGNS=%USERPROFILE%\eda\designs

IF DEFINED DRY_RUN (
	echo This is a dry run, all commands will be printed to the shell ^(Commands printed but not executed are marked with ^$^)!
	SET ECHO_IF_DRY_RUN=ECHO $
)

IF "%DESIGNS%"=="" (
  SET DESIGNS=%DEFAULT_DESIGNS%
)

echo Using/creating designs directory: %DESIGNS%
if not exist "%DESIGNS%" %ECHO_IF_DRY_RUN% mkdir "%DESIGNS%" 

IF "%DOCKER_USER%"=="" SET DOCKER_USER=hpretl
IF "%DOCKER_IMAGE%"=="" SET DOCKER_IMAGE=iic-osic-tools
IF "%DOCKER_TAG%"=="" SET DOCKER_TAG=2024.09

IF "%CONTAINER_USER%"=="" SET CONTAINER_USER=1000
IF "%CONTAINER_GROUP%"=="" SET CONTAINER_GROUP=1000

IF "%CONTAINER_NAME%"=="" SET CONTAINER_NAME=iic-osic-tools_xvnc

IF "%WEBSERVER_PORT%"=="" (
  SET /a WEBSERVER_PORT=80
) ELSE (
  SET /a WEBSERVER_PORT=%WEBSERVER_PORT%
)
echo Webserver port set to %WEBSERVER_PORT%

IF "%VNC_PORT%"=="" (
  SET /a VNC_PORT=5901
) ELSE (
  SET /a VNC_PORT=%VNC_PORT%
)
echo VNC port set to %VNC_PORT%


IF %CONTAINER_USER% NEQ 0 if %CONTAINER_USER% LSS 1000 echo WARNING: Selected User ID %CONTAINER_USER% is below 1000. This ID might interfere with User-IDs inside the container and cause undefined behaviour!
IF %CONTAINER_GROUP% NEQ 0 if %CONTAINER_GROUP% LSS 1000 echo WARNING: Selected Group ID %CONTAINER_GROUP% is below 1000. This ID might interfere with Group-IDs inside the container and cause undefined behaviour!

SET PARAMS=

IF %WEBSERVER_PORT% GTR 0 (
  SET PARAMS=%PARAMS% -p %WEBSERVER_PORT%:80
)

IF %VNC_PORT% GTR 0 (
  SET PARAMS=%PARAMS% -p %VNC_PORT%:5901
)

IF DEFINED VNC_PW (
  SET PARAMS=%PARAMS% -e VNC_PW=%VNC_PW%
)

IF DEFINED DOCKER_EXTRA_PARAMS (
  SET PARAMS=%PARAMS% %DOCKER_EXTRA_PARAMS%
)

IF "%DISP%"=="" SET DISP=host.docker.internal:0

where /q xhost
IF ERRORLEVEL 1 (
    ECHO xhost is not detected / not in PATH. Please verify X-server access control!
) ELSE (
    ECHO Using xhost to enable localhost access to the X-server.
    %ECHO_IF_DRY_RUN% xhost +localhost
)

docker container inspect %CONTAINER_NAME% 2>&1 | find "Status" | find /i "running"
IF NOT ERRORLEVEL 1 (
    ECHO Container is running! Stop with \"docker stop %CONTAINER_NAME%\" and remove with \"docker rm %CONTAINER_NAME%\" if required.
) ELSE (
    docker container inspect %CONTAINER_NAME% 2>&1 | find "Status" | find /i "exited"
    IF NOT ERRORLEVEL 1 (
        echo Container %CONTAINER_NAME% exists. Restart with \"docker start %CONTAINER_NAME%\" or remove with \"docker rm %CONTAINER_NAME%\" if required.
    ) ELSE (
        echo Container does not exist, creating %CONTAINER_NAME% ...
        %ECHO_IF_DRY_RUN% docker run -d --user %CONTAINER_USER%:%CONTAINER_GROUP% %PARAMS% -v "%DESIGNS%":/foss/designs --name %CONTAINER_NAME% %DOCKER_USER%/%DOCKER_IMAGE%:%DOCKER_TAG%
    )
)