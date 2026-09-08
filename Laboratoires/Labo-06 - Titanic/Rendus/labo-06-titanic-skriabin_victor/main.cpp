/*
* Project: Titanic Morse Translator
 * Authors: Tymofii Skriabin and Victor Anthony
 * Description:
 * This program converts text to Morse code and vice versa.
 * The user can choose to encode or decode, specify input and output files,
 * and the program processes them accordingly.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

#include "encode.h"
#include "decode.h"

int main() {
    int userChoice;
    char continueFlag;

    do {
        cout << "This programme ..." << endl;
        cout << "1 - encode" << endl;
        cout << "2 - decode" << endl;
        cout << "Your choice [1-2]: ";
        cin >> userChoice;

        if (userChoice == 1) {
            encodeFile();
        } else if (userChoice == 2) {
            decodeFile();
        } else {
            cout << "Error: invalid choice!" << endl;
        }

        cout << "Continue [Y/N]: ";
        cin >> continueFlag;
        cout << endl;

    } while (continueFlag == 'Y' || continueFlag == 'y');

    cout << "Program ended successfully." << endl;
    return EXIT_SUCCESS;  // standard successful exit
}
