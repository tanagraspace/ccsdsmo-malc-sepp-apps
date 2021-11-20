# The name of the project.
PROJECT_NAME="sepp_tm"

# The name of the executable binary.
BIN_FILENAME="sepp_tm_app"

BUILD_LIB_PATH="builds/rpi/tmp/lib"
BUILD_BIN_PATH="builds/rpi/tmp/bin"

# Deploy directory name.
DEPLOY_DIR="deploy"

# Tar paths
TAR_FILENAME="${PROJECT_NAME}.tar.gz"
TAR_PATH="${DEPLOY_DIR}/${TAR_FILENAME}"
TAR_EXTRACT_LIB_PATH=${BUILD_LIB_PATH}
TAR_EXTRACT_BIN_PATH=${BUILD_BIN_PATH}

# Local build paths.
LOCAL_APP_LIB_DIR="../${BUILD_LIB_PATH}"
LOCAL_APP_BIN_DIR="../${BUILD_BIN_PATH}"

# SEPP deployment paths.
SEPP_LIB_DIR="/usr/lib"
SEPP_BIN_DIR="/home/root/georges/apps/malc/sepp_tm" # Change this if needed.