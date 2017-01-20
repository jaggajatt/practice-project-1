cmake_minimum_required (VERSION 2.6)
project (practice-project-1)

# The version number.
set (ProjectX_VERSION_MAJOR 1)
set (ProjectX_VERSION_MINOR 0)

# Turn ON c++1y
# Doesn't work with Travis CI
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# CMake Build Type
set(CMAKE_BUILD_TYPE Release)

# Get the file names
file(GLOB SOURCE "src/*.cxx" "src/*.cpp")
file(GLOB INCLUDE "include/*.h" "include/*.hpp")

# Include the directories
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories("${PROJECT_INCLUDE_DIR}")

# Uncomment to create executable
add_executable(main ${SOURCE})
