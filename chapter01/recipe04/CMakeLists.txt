cmake_minimum_required(VERSION 3.8)
project(chapter01)

set(CMAKE_CXX_COMPILER g++)

set(CMAKE_CXX_CLANG_TIDY clang-tidy)

add_executable(example04 example04.cpp)