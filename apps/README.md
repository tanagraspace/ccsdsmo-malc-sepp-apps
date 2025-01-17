## Apps
This directory contains apps and library projects that use the generated MAL areas for the OPS-SAT spacecraft.

## Build and deploy
App and library projects can be built and deployed for either the local development environment or for the SEPP environment on the spacecraft.

### Third-party dependencies
The gsl, ZeroMQ, czmq, and zproject dependencies described in the [Installation section of the repo's top level README](https://github.com/tanagraspace/ccsdsmo-malc-sepp-apps#installation) must be installed before the *genmakeall* script can be executed.

### For local development
- Invoking the `genmake_tests` function inside the *genmakeall* script can be commented out for a quicker build.
- However, running `genmake_tests` at least once is a good way to make sure that all required dependencies are installed and running as expected before trying to build the app.

From the app's directory, execute the following command to build for the local development environment:

```bash
./genmake
```

If the app has dependencies on other projects that have not been previously built then execute the following command:

```bash
./../../genmakeall
```

### For the spacecraft
Building for the spacecraft uses zproject/gsl's cross-compilation mechanism for the Raspberry Pi ARM 32 bit target environment. Using the Raspberry Pi toolchain is non-ideal but workable **temporary** solution. As a permanent solution a zproject_sepp.gsl script must be written that will cross-compile using the SEPP toolchain instead of using [zproject_rpi.gsl](https://github.com/zeromq/zproject/blob/master/zproject_rpi.gsl).

From the app's directory, execute the following commands to build and deploy the app to the spacecraft:

```bash
cd scripts
./build4targets.sh
./ipk_create.sh
./ipk_deploy.sh
```

### Cross-compilation
The CCSDS MO MAL C API implementation is not cross-compilation friendly. The *build4target.sh* script addresses this unfriendliness.

#### Background
*build4target.sh* is a cross-compilation build script:
- It's a workaround for problems related to the generated cross-compilation *build.sh* script.
- It addresses these problems by "hotfixing" the generated *build.sh* scripts before invoking it.

**Prerequisite:** run the genmake command in the app's project directory.

#### The problem
- The mal dependencies are listed as projects in the zproject_known_projects.xml file.
- These mal projects have blank values set as their git repository urls.
- This results in a cross-compilation *build.sh* file with invalid git clone commands — e.g.:

```bash
git clone --quiet --depth 1  malattributes
```

Instead of something like this:

```bash
git clone --quiet --depth 1 -b v1.2.0 https://github.com/georgeslabreche/malattributes.git malattributes
```

This can't be resolved unless we create dedicated git repositories for each mal project. It doesn't seem like zproject supports setting a file system path for a project directory instead of a repository url. Furthermore, the cross-compilation build.sh script cannot simply be edited because it is generated and will be overwritten each time the app project's genmake script is invoked.

#### The (temporary) solution
The build4targets.sh script is a workaround to the aforementioned problem. It replaces the invalid git clone commands with commands that will copy the mal project directories where they would normally be cloned into if they had dedicated repositories — i.e., into builds/rpi/tmp-deps/