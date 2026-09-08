#include "morseIO.h"

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// Turn a single character into its Morse code version.
string charToMorse(const char c) {
    switch (c) {
        // Lettres
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
        // Chiffres
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
        // Ponctuation
        case '&': return ".-...";
        case '\'': return ".----.";
        case '@': return ".--.-.";
        case ')': return "-.--.-";
        case '(': return "-.--.";
        case ':': return "---...";
        case ',': return "--..--";
        case '=': return "-...-";
        case '!': return "-.-.--";
        case '.': return ".-.-.-";
        case '-': return "-....-";
        case '%': return "------..-.-----";
        case '+': return ".-.-.";
        case '"': return ".-..-.";
        case '?': return "..--..";
        case '/': return "-..-.";
        case ' ': return "/";
        default: return "#"; // If the character isn’t supported, return "#".
    }
}

// Turn a Morse sequence into a character.
char morseToChar(const string& code) {
    // Lettres
    if (code == ".-") return 'A';
    if (code == "-...") return 'B';
    if (code == "-.-.") return 'C';
    if (code == "-..") return 'D';
    if (code == ".") return 'E';
    if (code == "..-.") return 'F';
    if (code == "--.") return 'G';
    if (code == "....") return 'H';
    if (code == "..") return 'I';
    if (code == ".---") return 'J';
    if (code == "-.-") return 'K';
    if (code == ".-..") return 'L';
    if (code == "--") return 'M';
    if (code == "-.") return 'N';
    if (code == "---") return 'O';
    if (code == ".--.") return 'P';
    if (code == "--.-") return 'Q';
    if (code == ".-.") return 'R';
    if (code == "...") return 'S';
    if (code == "-") return 'T';
    if (code == "..-") return 'U';
    if (code == "...-") return 'V';
    if (code == ".--") return 'W';
    if (code == "-..-") return 'X';
    if (code == "-.--") return 'Y';
    if (code == "--..") return 'Z';
    // Chiffres
    if (code == "-----") return '0';
    if (code == ".----") return '1';
    if (code == "..---") return '2';
    if (code == "...--") return '3';
    if (code == "....-") return '4';
    if (code == ".....") return '5';
    if (code == "-....") return '6';
    if (code == "--...") return '7';
    if (code == "---..") return '8';
    if (code == "----.") return '9';
    // Ponctuation courante
    if (code == ".-...") return '&';
    if (code == ".----.") return '\'';
    if (code == ".--.-.") return '@';
    if (code == "-.--.-") return ')';
    if (code == "-.--.") return '(';
    if (code == "---...") return ':';
    if (code == "--..--") return ',';
    if (code == "-...-") return '=';
    if (code == "-.-.--") return '!';
    if (code == ".-.-.-") return '.';
    if (code == "..--.-") return '_';
    if (code =="------..-.-----") return '%';
    if (code == ".-.-.") return '+';
    if (code == ".-..-.") return '"';
    if (code == "..--..") return '?';
    if (code == "-..-.") return '/';
    if (code == "/") return ' ';
    return '#'; // If it’s not found, return '#'.
}

// Converts lowercase letters to uppercase.
char toUpper(char c) {
    if (c <= 'z' && c >= 'a'){
        c -= 'a'-'A';
    }
    return c;
}

// Reads a Morse-encoded file and turns it into normal text.
string decodeFile(const string& filename){
    ifstream fin(filename);
    string morseLetter;
    string charPhrase;
    if (!fin) {
        cerr << "\nFile " << filename << " could not be opened" << endl;
        return "error";
    }
    char c;
    while (fin.get(c)){
        if (c != ' ')morseLetter += c;
        else {
            charPhrase += morseToChar(morseLetter);
            morseLetter = "";
            }
    }
    fin.close();
    return charPhrase;
}

// Reads a normal text file and turns it into Morse code.
string encodeFile(const string& filename) {
    ifstream fin(filename);
    char letter;
    string morsePhrase;
    if (!fin) {
        cerr << "\nFile " << filename << " could not be opened" << endl;
        return "error";
    }
    while (fin.get(letter)) {
            morsePhrase += charToMorse(toUpper(letter)) + " ";
    }
    fin.close();
    return morsePhrase;
}
