#include "coderMorse.h"
#include "caractere.h"

using namespace std;

/**
 * Convertit une lettre en code Morse.
 * @param caractere La lettre à convertir (majuscule ou minuscule, uniquement de A à Z ou a à z).
 * @return La représentation en code Morse de la lettre, ou une chaîne vide si le caractère n'est pas une lettre.
 */
string coderUneLettreEnMorse(char caractere);

/**
 * Convertit un chiffre en code Morse.
 * @param caractere Le chiffre à convertir.
 * @return La représentation en code Morse du chiffre, ou une chaîne vide si le caractère n'est pas un chiffre.
 */
string coderUnChiffreEnMorse(char caractere);

/**
 * Convertit un symbole en code Morse.
 * Gère l'espace ainsi que les symboles de la liste :
 * 'Punctuation Mark' de https://morsecode.world/international/morse2.html
 * A l'exception du caractère de multiplication '×' qui ne passe pas dans un char (pas dans la table ASCII allant de 0 à 127).
 * @param caractere Le symbole à convertir.
 * @return La représentation en code Morse du symbole, ou une chaîne vide si le symbole n'est pas reconnu.
 */
string coderUnSymboleEnMorse(char caractere);

/**
 * Code un caractère (lettre, chiffre, symbole) en Morse.
 * @param caractere Le caractère à coder en Morse.
 * @return La représentation en code Morse du caractère, ou une chaîne vide si le caractère n'est pas reconnu.
 */
string coderUnCaractereEnMorse(char caractere);

string coderUneLettreEnMorse(char caractere) {
    //Simplifier le code en ne gérant que les majuscules (qui sont le même code que les minuscules)
    caractere = majuscule(caractere);

    switch (caractere) {
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
        default: return "";
    }
}

string coderUnChiffreEnMorse(const char caractere) {
    switch (caractere) {
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
        default: return "";
    }
}

string coderUnSymboleEnMorse(const char caractere) {
    switch (caractere) {
        case ' ': return "/"; //Séparateur de mots en Morse
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
        case '%': return "-----..-..";
        case '+': return ".-.-.";
        case '"': return ".-..-.";
        case '?': return "..--..";
        case '/': return "-..-.";
        default: return "";
    }
}

string coderUnCaractereEnMorse(const char caractere) {
    if (estLettre(caractere)) {
        return coderUneLettreEnMorse(caractere);
    }
    if (estChiffre(caractere)) {
        return coderUnChiffreEnMorse(caractere);
    }
    return coderUnSymboleEnMorse(caractere);
}

string coderEnMorse(const string &texte) {
    constexpr char kSeparateurLettres = ' ';

    string code;
    for (const char caractere: texte) {
        code += coderUnCaractereEnMorse(caractere);
        code += kSeparateurLettres;
    }
    return code;
}
