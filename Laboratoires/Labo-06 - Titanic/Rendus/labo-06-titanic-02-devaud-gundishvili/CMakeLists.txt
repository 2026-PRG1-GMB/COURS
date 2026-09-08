cmake_minimum_required(VERSION 4.0)
project(PRG1_Labo06-TITANIC)

# Ajoutez le flag "-Werror" à la liste si vous souhaitez traiter les warnings comme des erreurs.
set(GCC_CUSTOM_COMPILE_FLAGS "-Wall -Werror -Wextra -Wconversion -Wsign-conversion -pedantic")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_CUSTOM_COMPILE_FLAGS}")

add_executable(PRG1_Labo06-TITANIC main.cpp
        read_write.cpp
        read_write.h
        morse_code.cpp
        morse_code.h
        user_interaction.cpp
        user_interaction.h)