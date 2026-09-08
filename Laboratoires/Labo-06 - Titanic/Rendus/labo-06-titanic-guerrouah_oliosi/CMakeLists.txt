cmake_minimum_required(VERSION 4.0)
project(PRG1_Labo06-TITANIC)

# Ajoutez le flag "-Werror" à la liste si vous souhaitez traiter les warnings comme des erreurs.
set(GCC_CUSTOM_COMPILE_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_CUSTOM_COMPILE_FLAGS}")

add_executable(PRG1_Labo06-TITANIC main.cpp
        lecture_ecriture_fichier_txt_library.cpp
        lecture_ecriture_fichier_txt_library.h
        morse_conversion_library.cpp
        morse_conversion_library.h
        user_input_library.cpp
        user_input_library.h
)
