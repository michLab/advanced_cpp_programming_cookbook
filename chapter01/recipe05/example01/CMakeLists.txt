cmake_minimum_required(VERSION 3.6)
project(chapter01)

add_executable(example01 example01.cpp)

target_link_libraries(example01 boost_chrono)