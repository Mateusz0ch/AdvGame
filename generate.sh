#!/bin/bash
# Simple script to build the project with CMake and run the resulting binary

set -e

# create build directory if it doesn't exist
BUILD_DIR="build"

if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
fi

cd "$BUILD_DIR"

# configure and build
cmake ..
cmake --build .

# execute binary if it exists
if [ -x "./AdvGame" ]; then
    echo "Running AdvGame..."
    ./AdvGame
else
    echo "Binary not found or not executable: ./AdvGame" >&2
    exit 1
fi
