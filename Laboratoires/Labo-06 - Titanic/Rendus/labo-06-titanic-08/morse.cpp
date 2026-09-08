#include "morse.h"

#include<string>

/**
* Converti uniquement les chars minuscule en majuscule
 * @param c
 * @return
 */
char converti_char_majuscule(char c);

std::string encode_caractere_en_morse(const char caractere) {
    switch (converti_char_majuscule(caractere)) {
        // espace
        case ' ': return "/";

        // lettres
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
        case 'X': return "-.-";
        case 'Y': return "-.--";
        case 'Z': return "--..";

        // chiffres
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

        // caractères spéciaux
        case '\'': return ".----.";
        case ',': return "--..--";
        case '.': return ".-.-.-";
        case ':': return "---...";
        case '-': return "-...-";
        case '!': return "-.-.--";
        case '?': return "..--..";
        case '(': return "-.--.";
        case ')': return "-.--.-";

        // caractère inconnu
        default: return "X";
    }
}

char decode_caractere_morse(const std::string &chaine) {
    // espace
    if (chaine == "/") {
        return ' ';
    }

    // lettres
    if (chaine == ".-") return 'A';
    if (chaine == "-...") return 'B';
    if (chaine == "-.-.") return 'C';
    if (chaine == "-..") return 'D';
    if (chaine == ".") return 'E';
    if (chaine == "..-.") return 'F';
    if (chaine == "--.") return 'G';
    if (chaine == "....") return 'H';
    if (chaine == "..") return 'I';
    if (chaine == ".---") return 'J';
    if (chaine == "-.--") return 'K';
    if (chaine == ".-..") return 'L';
    if (chaine == "--") return 'M';
    if (chaine == "-.") return 'N';
    if (chaine == "---") return 'O';
    if (chaine == ".--.") return 'P';
    if (chaine == "--.-") return 'Q';
    if (chaine == ".-.") return 'R';
    if (chaine == "...") return 'S';
    if (chaine == "-") return 'T';
    if (chaine == "..-") return 'U';
    if (chaine == "...-") return 'V';
    if (chaine == ".--") return 'W';
    if (chaine == "-.-") return 'X';
    if (chaine == "-.---") return 'Y';
    if (chaine == "--..") return 'Z';

    // chiffres
    if (chaine == "-----") return '0';
    if (chaine == ".----") return '1';
    if (chaine == "..---") return '2';
    if (chaine == "...--") return '3';
    if (chaine == "....-") return '4';
    if (chaine == ".....") return '5';
    if (chaine == "-....") return '6';
    if (chaine == "--...") return '7';
    if (chaine == "---..") return '8';
    if (chaine == "----.") return '9';

    // caractères spéciaux
    if (chaine == ".----.") return '\'';
    if (chaine == "--..--") return ',';
    if (chaine == ".-.-.-") return '.';
    if (chaine == "---...") return ':';
    if (chaine == "-...-") return '-';
    if (chaine == "-.---") return '!';
    if (chaine == "..---.") return '?';
    if (chaine == "-.--.") return '(';
    if (chaine == "-.--.-") return ')';

    // caractère inconnu
    return 'X';
}

char converti_char_majuscule(char c) {
    constexpr int ecart_min_maj = 'a' - 'A';

    // Seulement si c'est une minuscule
    if (c >= 'a' and c <= 'z') {
        c -= ecart_min_maj;
    }

    return c;
}
