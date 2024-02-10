cmake_minimum_required(VERSION 3.6)
project(chapter01)

set(CMAKE_CXX_STANDARD 17)

file(STRINGS "config.h" CONFIG_H)
file(STRINGS "api.h" API_H)

list(APPEND MY_LIBRARY_SINGLE
    "${CONFIG_H}"
    ""
    "${API_H}" 
)

file(REMOVE "my_library.h")

foreach(LINE IN LISTS MY_LIBRARY_SINGLE)
    if(LINE MATCHES "#include \"")
        file(APPEND "my_library.h" " // ${LINE}\n")
    else()
        file(APPEND "my_library.h" "${LINE}\n")
    endif()
endforeach()

add_executable(example03 example03.cpp)