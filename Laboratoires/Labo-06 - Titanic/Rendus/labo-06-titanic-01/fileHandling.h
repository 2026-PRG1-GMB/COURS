#ifndef FILEHANDLING_H
#define FILEHANDLING_H
#include <string>

// Originally written by Julian Vogel, 29.10.2025
// Last modified by : Julian Vogel, 01.11.2025
// DESCRIPTION :
// Library used to write and read chosen files


// Reads a file and returns its content
std::string readFile(const std::string& fileName);

// Open/write a file and fills it with content
void writeFile(const std::string& fileName, const std::string& content);

#endif