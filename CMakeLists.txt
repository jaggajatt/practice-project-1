cmake_minimum_required (VERSION 2.6)
project (practice-project-1)

# The version number.
set (ProjectX_VERSION_MAJOR 1)
set (ProjectX_VERSION_MINOR 0)

enable_testing()

# Find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Gather file names
file(GLOB TEST_FILES "test/*.cxx" "test/*.cpp")
file(GLOB SOURCE_FILES "src/*.cpp")
file(GLOB INCLUDE_FILES "include/*.h" "include/*.hpp")

# Include the directories
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories("${PROJECT_INCLUDE_DIR}")

# Project Directory
set(PROJECT_TEST_NAME "test_exe")

# Create the executable for testing
add_executable(${PROJECT_TEST_NAME} ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_TEST_NAME} ${GTEST_BOTH_LIBRARIES} pthread)

add_test(${PROJECT_TEST_NAME} ${PROJECT_TEST_NAME})

# Turn ON c++1y
# Doesn't work with Travis CI
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# CMake Build Type
set(CMAKE_BUILD_TYPE Release)

# Create the executable for main
add_executable(main_exe "src/main.cxx" ${SOURCE_FILES})
