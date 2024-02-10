cmake_minimum_required(VERSION 3.6)
project(chapter01)

set(CMAKE_CXX_CLANG_TIDY clang-tidy)

find_package(Boost REQUIRED COMPONENTS log)

add_executable(example02 example02.cpp)

target_compile_definitions(example02 PRIVATE BOOST_DYN_LINK)

target_link_libraries(example02 Boost::log)