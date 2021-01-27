# Reference: https://cmake.org/cmake/help/latest/guide/tutorial/index.html

cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(fibonacci-recursive VERSION 1.0)

# add the executable
add_executable(fibonacci-recursive fibonacci-recursive.cpp)

