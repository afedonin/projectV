cmake_minimum_required (VERSION 3.5)
project (projectV)

add_executable(projectV projectV.cpp)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-O4 -std=c++11")
