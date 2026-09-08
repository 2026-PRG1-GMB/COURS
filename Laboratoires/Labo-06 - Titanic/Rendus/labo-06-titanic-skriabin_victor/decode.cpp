#include <iostream>
#include <fstream>
#include <cstring> // strcmp
#include "decode.h"
using namespace std;

// Function to decode a single Morse code sequence
char decodeMorse(const char* code) {
    if (strcmp(code, ".-") == 0) return 'A';
    if (strcmp(code, "-...") == 0) return 'B';
    if (strcmp(code, "-.-.") == 0) return 'C';
    if (strcmp(code, "-..") == 0) return 'D';
    if (strcmp(code, ".") == 0) return 'E';
    if (strcmp(code, "..-.") == 0) return 'F';
    if (strcmp(code, "--.") == 0) return 'G';
    if (strcmp(code, "....") == 0) return 'H';
    if (strcmp(code, "..") == 0) return 'I';
    if (strcmp(code, ".---") == 0) return 'J';
    if (strcmp(code, "-.-") == 0) return 'K';
    if (strcmp(code, ".-..") == 0) return 'L';
    if (strcmp(code, "--") == 0) return 'M';
    if (strcmp(code, "-.") == 0) return 'N';
    if (strcmp(code, "---") == 0) return 'O';
    if (strcmp(code, ".--.") == 0) return 'P';
    if (strcmp(code, "--.-") == 0) return 'Q';
    if (strcmp(code, ".-.") == 0) return 'R';
    if (strcmp(code, "...") == 0) return 'S';
    if (strcmp(code, "-") == 0) return 'T';
    if (strcmp(code, "..-") == 0) return 'U';
    if (strcmp(code, "...-") == 0) return 'V';
    if (strcmp(code, ".--") == 0) return 'W';
    if (strcmp(code, "-..-") == 0) return 'X';
    if (strcmp(code, "-.--") == 0) return 'Y';
    if (strcmp(code, "--..") == 0) return 'Z';
    if (strcmp(code, "/") == 0) return ' ';

    return '?'; // unknown
}

// Function to decode a full file
void decodeFile() {
    char inputFile[50], outputFile[50];

    cout << "Enter Morse input file name: ";
    cin >> inputFile;

    cout << "Enter output file name: ";
    cin >> outputFile;

    ifstream fin(inputFile);
    ofstream fout(outputFile);

    if (!fin.is_open() || !fout.is_open()) {
        cerr << "Error: unable to open files!" << endl;
        return;
    }

    char morse[10]; // buffer for each Morse symbol
    while (fin >> morse) {
        fout << decodeMorse(morse);
    }

    fin.close();
    fout.close();

    cout << "Decoding completed successfully!" << endl;
}
