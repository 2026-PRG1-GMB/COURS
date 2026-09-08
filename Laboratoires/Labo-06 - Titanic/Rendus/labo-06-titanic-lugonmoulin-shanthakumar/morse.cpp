#include "morse.h"

const char* char_to_morse(char c) {
    switch (c) {
        // Lettres utiles
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'K': return "-.-";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'W': return ".--";

        // Chiffres
        case '0': return "-----";
        case '1': return ".----";
        case '2': return "..---";
        case '4': return "....-";
        case '5': return ".....";

        // Symboles
        case '.': return ".-.-.-";
        case '!': return "-.-.--";

        // si caractère inconnu
        default: return nullptr;
    }
}

char morse_to_char(const std::string& code) {

    // Lettres
    if (code == ".-") return 'A';
    if (code == "-...") return 'B';
    if (code == "-.-.") return 'C';
    if (code == "-..") return 'D';
    if (code == ".") return 'E';
    if (code == "--.") return 'G';
    if (code == "....") return 'H';
    if (code == "..") return 'I';
    if (code == "-.-") return 'K';
    if (code == "--") return 'M';
    if (code == "-.") return 'N';
    if (code == "---") return 'O';
    if (code == ".--.") return 'P';
    if (code == "--.-") return 'Q';
    if (code == ".-.") return 'R';
    if (code == "...") return 'S';
    if (code == "-") return 'T';
    if (code == "..-") return 'U';
    if (code == ".--") return 'W';

    // Chiffres
    if (code == "-----") return '0';
    if (code == ".----") return '1';
    if (code == "..---") return '2';
    if (code == "....-") return '4';
    if (code == ".....") return '5';

    // Symboles
    if (code == ".-.-.-") return '.';
    if (code == "-.-.--") return '!';

    // inconnu
    return ' ';
}