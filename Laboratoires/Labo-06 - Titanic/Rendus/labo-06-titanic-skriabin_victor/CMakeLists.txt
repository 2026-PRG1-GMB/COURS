cmake_minimum_required(VERSION 3.26)
project(morze)

set(CMAKE_CXX_STANDARD 17)

add_executable(morze
        main.cpp
        encode.cpp
        encode.h
        decode.cpp
        decode.h
)
