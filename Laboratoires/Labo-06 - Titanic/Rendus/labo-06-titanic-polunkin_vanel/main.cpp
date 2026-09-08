/*
===============================================================================
* file main.cpp
* version 1.0.0
* author Cédrick Vanel TCHINDA FEZE
* author POLUNKIN Michel
* date : 29.10.2025
* description : main
===============================================================================
*/
#include "morse.h"
#include "file_utils.h"
#include <cstdlib>
#include <limits>

using namespace std;

int main() {
    char reponse;
    do {
        cout << "This program ..." << endl;
        cout << "\t1 - encode" << endl;
        cout << "\t2 - decode" << endl;

        int choice;
        bool valid;
        do {
            cout << "your choice [1-2] : ";
            valid = (cin >> choice) && (choice == 1 || choice == 2);
            if (!valid) {
                cin.clear();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!valid);

        string input, output;
        cout << "file in  : ";
        getline(std::cin, input);
        cout << "file out : ";
        getline(std::cin, output);

        string message;
        if (read_file(input, message)) {
            string converted_message;
            if (choice == 1) {
                encode(message, converted_message);
            } else {
                decode(message, converted_message);
            }

            write_file(output, converted_message);
        }
        do {
            cout << "continue [Y/N] : ";
            cin >> reponse;
        } while (reponse != 'Y' && reponse != 'N');
    } while (reponse == 'Y');


    return EXIT_SUCCESS;
}
