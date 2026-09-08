/*
===============================================================================
* file morse.cpp
* version 1.0.0
* author Cédrick Vanel TCHINDA FEZE
* author POLUNKIN Michel
* date : 29.10.2025
* description : definition of functions for morse code conversion logic.
===============================================================================
*/
#include "morse.h"


using namespace std;

char translate_from_morse(const int value) {
    switch (value) {
        case 5: return 'A';
        case 24: return 'B';
        case 26: return 'C';
        case 12: return 'D';
        case 2: return 'E';
        case 18: return 'F';
        case 14: return 'G';
        case 16: return 'H';
        case 4: return 'I';
        case 23: return 'J';
        case 13: return 'K';
        case 20: return 'L';
        case 7: return 'M';
        case 6: return 'N';
        case 15: return 'O';
        case 22: return 'P';
        case 29: return 'Q';
        case 10: return 'R';
        case 8: return 'S';
        case 3: return 'T';
        case 9: return 'U';
        case 17: return 'V';
        case 11: return 'W';
        case 25: return 'X';
        case 27: return 'Y';
        case 28: return 'Z';
        case 63: return '0';
        case 47: return '1';
        case 39: return '2';
        case 35: return '3';
        case 33: return '4';
        case 32: return '5';
        case 48: return '6';
        case 56: return '7';
        case 60: return '8';
        case 62: return '9';
        case 85: return dot;
        case 107: return '!';
        default: return space;
    }
}

void decode(const string& message, string& decoded_msg) {
    int index = 1;

    for (const char& c: message) {
        if (c == space) {
            decoded_msg += translate_from_morse(index);
            index = 1;
            continue;
        }
        if (c == dot) {
            index *= 2;
        }
        if (c == hyphen) {
            index = (index * 2) + 1;
        }
    }
    decoded_msg += translate_from_morse(index);
}

string translate_to_morse(const char ch) {
    switch (ch) {
        // letters
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

        // digits
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

        case dot: return ".-.-.-";
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
        case hyphen: return "-....-";
        case '_': return "..--.-";
        case '"': return ".-..-.";

        // space between words
        case space: return "/";
        default: return "unknown_char";
    }
}


void encode(const string& str, string& encoded_msg) {
    for (const char c: str) {
        if (encoded_msg != "") {
            encoded_msg += space;
        }

        encoded_msg += translate_to_morse(c);
    }
}
