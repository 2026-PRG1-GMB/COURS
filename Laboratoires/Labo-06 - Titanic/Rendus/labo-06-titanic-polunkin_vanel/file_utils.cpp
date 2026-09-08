/*
===============================================================================
* file file_utils.cpp
* version 1.0.0
* author Cédrick Vanel TCHINDA FEZE
* author POLUNKIN Michel
* date : 29.10.2025
* description : definition of functions for file read/write logic.
===============================================================================
*/

#include "file_utils.h"

using namespace std;

bool read_file(const string& file_name, string& msg) {
    ifstream input_file(file_name);

    if (!input_file) {
        cerr << "Error : Impossible to open file." << endl;
        return false;
    }

    getline(input_file, msg);

    return true;
}

bool write_file(const string& file_name, const string& str) {
    // Open the file in output mode
    ofstream output_file(file_name, ios::out);

    // Verify if the file is opened successfully
    if (!output_file) {
        cerr << "Error : Impossible to open file." << endl;
        return false;
    }

    output_file << str << endl;

    // close the file
    output_file.close();

    return true;
}
