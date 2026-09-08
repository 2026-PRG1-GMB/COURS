#include "fileHandling.h"
#include <cstdlib>
#include <fstream>
#include <iostream>

std::string readFile(const std::string& fileName)
{
    // Opening the file
    std::ifstream fileIn;
    fileIn.open(fileName);

    // Get content until there is no content left in the file
    std::string content;
    getline(fileIn, content);

    // Closing the file and returns it's content
    fileIn.close();
    return content;
}

void writeFile(const std::string& fileName, const std::string& content)
{
    // Opening the file
    std::ofstream fileOut;
    fileOut.open(fileName, std::ios::app);

    // Checking for errors
    if (!fileOut)
    {
        std::cerr << "Error opening the file " << fileName << std::endl;
        std::exit(EXIT_FAILURE);
    }

    // Writing on the file and closing it
    fileOut << content << std::endl;
    fileOut.close();
}

