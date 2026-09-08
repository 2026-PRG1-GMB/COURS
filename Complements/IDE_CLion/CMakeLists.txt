cmake_minimum_required(VERSION 3.23)
project(non_du_projet)				# à mettre à jour

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wconversion -Wall -Wextra -pedantic -std=c++20")

# configuration du projet pour windows
if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
	set(SDL2_INCLUDE_DIR c:/libs/sld2/include)
	set(SDL2_LIB_DIR path_c:/libs/sld2/lib/x64)
	include_directories(${SDL2_INCLUDE_DIR})
	link_directories(${SDL2_LIB_DIR})
endif()

set(PRJ_SOURCE_FILES
		fichier_du_projet1.cpp		# à compléter
		fichier_du_projet2.cpp
		)

# déclaration de la target snake
add_executable(${PROJECT_NAME}
		${PRJ_SOURCE_FILES}
		)
		
# Spécification des librairies pour la target snake
target_link_libraries(${PROJECT_NAME}
		SDL2main
		SDL2
		)