#include <iostream>
#include <limits>
#include "fileHandling.h"
#include "morseCode.h"

// Originally written by Julian Vogel at 29.10.2025
// Last modified by : Julian Vogel, 01.11.2025

using namespace std;

// Keeps the program running until the user says otherwise
bool runningLoop();

// Asks the user to choose between 2 chosen options [1-2]
bool choice(const string& choice_1,const string& choice_2);


int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;
    do
    {
        bool input = choice("encode","decode");

        // Asks the user for the files he wants to use :
        cout << "file in  : ";
        string fileName_in;
        cin >> fileName_in;
        cout << "file out : ";
        string fileName_out;
        cin >> fileName_out;

        const string message = readFile(fileName_in);
        writeFile(fileName_out, // Encode or decode depending on what user asked for
            (input == 0) ? encode(message) : decode(message));

    } while (runningLoop());
    return EXIT_SUCCESS;
}


bool choice(const string& choice_1,const string& choice_2)
{
    cout << "This program ..." << endl
    << "1 - " << choice_1 << endl
    << "2 - " << choice_2 << endl;

    int input = 0;
    do
    {
        cout << "your choice [1-2] : ";
        cin >> input;
        // Gestion des erreurs
        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    } while (input != 1 && input != 2);
    return (input == 1 ? 0:1 );
}

bool runningLoop()
{
    char input;
    do
    {
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); // Avoids the buffer to be filled with characters at once

        cout << endl << "continue [Y/N] : ";
        cin >> input;
        // Gestion des erreurs
        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }while(input != 'Y' && input != 'N');
    return (input == 'Y' ? 1 : 0);
}