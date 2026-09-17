cmake_minimum_required(VERSION 3.25)

project(Demos_PRG1-C LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options de compilation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wconversion -Wall -Wextra -pedantic")

# Project files
add_executable(Demos_PRG1-C
    2026-09-17.cpp
)
