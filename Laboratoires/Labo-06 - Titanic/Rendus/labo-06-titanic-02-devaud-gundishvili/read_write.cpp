/// Labo 06
/// File manipulation functions
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#include "read_write.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/// Function to read the content of a file and put it into a string
/// @param file_path [reference] File path to read from
/// @param content [reference] String to store the content taken from the file
/// @return True if reading was successful, false otherwise
bool read_file(const string& file_path, string& content) {
    ifstream file(file_path);

    if (!file) {
        cerr << "Error opening file: " << file_path << endl;
        return false;
    }

    getline(file, content);
    file.close();
    return true;
}

/// Function to write a string content into a file
/// @param file_path [reference] File path to write to
/// @param content [reference] String content to write into the file
/// @return True if writing was successful, false otherwise
bool write_file(const string& file_path, const string& content) {
    ofstream file(file_path, ios::app);

    if (!file) {
        cerr << "Error opening file: " << file_path << endl;
        return false;
    }

    file << content;
    file.close();
    return true;
}
