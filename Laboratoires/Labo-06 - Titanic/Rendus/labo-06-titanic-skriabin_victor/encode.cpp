/*
* encode.cpp
 * Converts a clear text file into Morse code.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#include "encode.h"

// Function that returns Morse code for a given character
// Only basic syntax — no map, no string manipulations
const char* getMorseCode(char c) {
    switch (c) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";

        case '0': return "-----";
        case '1': return ".----";
        case '2': return "..---";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";

        case '.': return ".-.-.-";
        case ',': return "--..--";
        case '?': return "..--..";
        case '\'': return ".----.";
        case '!': return "-.-.--";
        case '/': return "-..-.";
        case '(': return "-.--.";
        case ')': return "-.--.-";
        case '&': return ".-...";
        case ':': return "---...";
        case ';': return "-.-.-.";
        case '=': return "-...-";
        case '+': return ".-.-.";
        case '-': return "-....-";
        case '_': return "..--.-";
        case '"': return ".-..-.";
        case '$': return "...-..-";
        case '@': return ".--.-.";
        case '#': return "........"; // Error

        case ' ': return "/"; // space between words
        default: return ""; // unknown character
    }
}

void encodeFile() {
    char inputFile[50], outputFile[50];

    cout << "Enter input file name: ";
    cin >> inputFile;

    cout << "Enter output file name: ";
    cin >> outputFile;

    ifstream fin(inputFile);   // fin = file in
    ofstream fout(outputFile); // fout = file out

    if (!fin || !fout) {
        cout << "Error opening files!" << endl;
        return;
    }

    char c;
    bool first = true;

    while (fin.get(c)) {
        if (c >= 'a' && c <= 'z')
            c -= 32; // convert lowercase to uppercase manually

        const char* morse = getMorseCode(c);

        if (!first)
            fout << ' '; // separate Morse codes with space
        fout << morse;
        first = false;
    }

    fin.close();
    fout.close();

    cout << "Encoding completed successfully." << endl;
}
