cmake_minimum_required(VERSION 4.0)
project(PRG1_Labo06-TITANIC)

set(GCC_CUSTOM_COMPILE_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -Werror -pedantic")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_CUSTOM_COMPILE_FLAGS}")

# Collecter automatiquement tous les fichiers .cpp et .h
file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")

add_executable(PRG1_Labo06-TITANIC ${SOURCES} ${HEADERS})
