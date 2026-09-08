#include "encode.h"

//Fonction concernant les lettres
string morseToLetter(const char &letter) {
    switch (letter) {
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
        default: return "";
    }
}

//Fonction concernant les nombres
string morseToNumber(const char &number) {
    switch (number) {
        case '0': return "-----";
        case '1': return ".----";
        case '2': return "..----";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";
        default: return "";
    }
}

//Fonction concernant les caractères spéciales
string morseToSpecialCharacter(const char &specialCharacter) {
    switch (specialCharacter) {
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
        case 'x': return "-..-";
        case '%': return "----- -..-. -----";
        case '+': return ".-.-.";
        case '"': return ".-..-.";
        case '?': return "..--..";
        case '/': return "-..-.";
        default: return "";
    }
}

//Gestion d'encodage de lettre a morse
string encode(const string &message) {
    string encoded_Message;

    for (unsigned int i = 0; i < message.length(); i++) {
        if (message[i] == 'A' || message[i] == 'B' || message[i] == 'C' || message[i] == 'D' || message[i] == 'E' ||
            message[i] == 'F' || message[i] == 'G' || message[i] == 'H' || message[i] == 'I' || message[i] == 'J' ||
            message[i] == 'K' || message[i] == 'L' || message[i] == 'M' || message[i] == 'N' || message[i] == 'O' ||
            message[i] == 'P' || message[i] == 'Q' || message[i] == 'R' || message[i] == 'S' || message[i] == 'T' ||
            message[i] == 'U' || message[i] == 'V' || message[i] == 'W' || message[i] == 'X' || message[i] == 'Y' ||
            message[i] == 'Z') {
            encoded_Message += morseToLetter(message[i]) + ' ';
        } else if (message[i] == '0' || message[i] == '1' || message[i] == '2' || message[i] == '3' || message[i] == '4'||
                    message[i] == '5' || message[i] == '6' || message[i] == '7' || message[i] == '8' ||message[i] =='9') {
            encoded_Message += morseToNumber(message[i]) + ' ';
        } else if (message[i] == '&' || message[i] == '\'' || message[i] == '@' || message[i] == ')' ||
                   message[i] == '(' || message[i] == ':' || message[i] == ',' || message[i] == '=' ||
                   message[i] == '!' || message[i] == '.' || message[i] == '-' || message[i] == 'x' ||
                   message[i] == '&' || message[i] == '+' || message[i] == '"' || message[i] == '?' || message[i] == '/') {
            encoded_Message += morseToSpecialCharacter(message[i]) + ' ';
        } else if (message[i] == ' ') {
            encoded_Message += '/';
            encoded_Message += ' ';
        }
    }
    return encoded_Message;
}
