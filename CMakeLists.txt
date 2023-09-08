cmake_minimum_required(VERSION 3.10)
project(Tutorial)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -g")
add_executable(Tutorial twosum.cpp)