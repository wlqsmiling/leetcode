cmake_minimum_required(VERSION 3.10)
project(Tutorial)
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -g")
add_executable(Tutorial twosum.cpp test/test.cpp)
target_link_libraries(Tutorial gtest)
