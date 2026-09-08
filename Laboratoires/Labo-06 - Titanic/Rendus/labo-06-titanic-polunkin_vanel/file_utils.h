/*
===============================================================================
* file file_utils.h
* version 1.0.0
* author Cédrick Vanel TCHINDA FEZE
* author POLUNKIN Michel
* date : 29.10.2025
* description : declaration of functions for file read/write logic.
===============================================================================
*/

#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include <string>
#include <fstream>
#include <iostream>

/**
 * @brief Reads the contents of a text file into a string.
 * @param file_name The name of the file to read.
 * @param msg Reference to a string where the file content will be stored.
 * @return True if the file was successfully opened and read, false otherwise.
 */
bool read_file(const std::string& file_name, std::string& msg);

/**
 * @brief Writes a string to a file.
 * @param file_name The name of the output file.
 * @param str The string to write into the file.
 * @return True if the file was successfully opened and written, false otherwise.
 *
 * @note The function opens the file in output mode (ios::out). If the file does not exist,
 *       it will be created automatically.
 */
bool write_file(const std::string& file_name, const std::string& str);


#endif //FILE_UTILS_H
