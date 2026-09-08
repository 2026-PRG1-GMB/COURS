#include "decoderMorse.h"

using namespace std;

/**
 * Décode une lettre depuis le code Morse.
 * @param morse Le code Morse à décoder.
 * @return La lettre en MAJUSCULE décodée, ou '\0' si le code n'est pas reconnu.
 */
char decoderUneLettreDepuisMorse(const string &morse);

/**
 * Décode un chiffre depuis le code Morse.
 * @param morse Le code Morse à décoder.
 * @return Le chiffre décodé, ou '\0' si le code n'est pas reconnu.
 */
char decoderUnChiffreDepuisMorse(const string &morse);

/**
 * Décode un symbole depuis le code Morse.
 * Gère l'espace ainsi que les symboles de la liste :
 * 'Punctuation Mark' de https://morsecode.world/international/morse2.html
 * @param morse Le code Morse à décoder.
 * @return Le symbole décodé, ou '\0' si le code n'est pas reconnu.
 */
char decoderUnSymboleDepuisMorse(const string &morse);

/**
 * Décode un caractère (lettre, chiffre, symbole) depuis le code Morse.
 * @param morse Le code Morse à décoder.
 * @return Le caractère décodé, ou un espace si le code n'est pas reconnu.
 */
char decoderUnCaractereDepuisMorse(const string &morse);

char decoderUneLettreDepuisMorse(const string &morse) {
    if (morse == ".-") return 'A';
    if (morse == "-...") return 'B';
    if (morse == "-.-.") return 'C';
    if (morse == "-..") return 'D';
    if (morse == ".") return 'E';
    if (morse == "..-.") return 'F';
    if (morse == "--.") return 'G';
    if (morse == "....") return 'H';
    if (morse == "..") return 'I';
    if (morse == ".---") return 'J';
    if (morse == "-.-") return 'K';
    if (morse == ".-..") return 'L';
    if (morse == "--") return 'M';
    if (morse == "-.") return 'N';
    if (morse == "---") return 'O';
    if (morse == ".--.") return 'P';
    if (morse == "--.-") return 'Q';
    if (morse == ".-.") return 'R';
    if (morse == "...") return 'S';
    if (morse == "-") return 'T';
    if (morse == "..-") return 'U';
    if (morse == "...-") return 'V';
    if (morse == ".--") return 'W';
    if (morse == "-..-") return 'X';
    if (morse == "-.--") return 'Y';
    if (morse == "--..") return 'Z';
    return '\0'; // Caractère nul si non reconnu
}

char decoderUnChiffreDepuisMorse(const string &morse) {
    if (morse == "-----") return '0';
    if (morse == ".----") return '1';
    if (morse == "..---") return '2';
    if (morse == "...--") return '3';
    if (morse == "....-") return '4';
    if (morse == ".....") return '5';
    if (morse == "-....") return '6';
    if (morse == "--...") return '7';
    if (morse == "---..") return '8';
    if (morse == "----.") return '9';
    return '\0'; // Caractère nul si non reconnu
}

char decoderUnSymboleDepuisMorse(const string &morse) {
    //TODO : Le caractère '/' est utilisé comme séparateur de mots mais ce n'est pas vraiment du Morse.
    //A externaliser (probablement)
    if (morse == "/") return ' '; // Séparateur de mots en Morse
    if (morse == ".-...") return '&';
    if (morse == ".----.") return '\'';
    if (morse == ".--.-.") return '@';
    if (morse == "-.--.-") return ')';
    if (morse == "-.--.") return '(';
    if (morse == "---...") return ':';
    if (morse == "--..--") return ',';
    if (morse == "-...-") return '=';
    if (morse == "-.-.--") return '!';
    if (morse == ".-.-.-") return '.';
    if (morse == "-....-") return '-';
    if (morse == "-----..-..") return '%';
    if (morse == ".-.-.") return '+';
    if (morse == ".-..-.") return '"';
    if (morse == "..--..") return '?';
    if (morse == "-..-.") return '/';
    return '\0'; // Caractère nul si non reconnu
}

char decoderUnCaractereDepuisMorse(const string &morse) {
    char resultat = decoderUneLettreDepuisMorse(morse);
    if (resultat != '\0') {
        return resultat;
    }

    resultat = decoderUnChiffreDepuisMorse(morse);
    if (resultat != '\0') {
        return resultat;
    }

    resultat = decoderUnSymboleDepuisMorse(morse);
    if (resultat != '\0') {
        return resultat;
    }

    return ' ';
}

string decoderMorse(const string &morse) {
    constexpr char kSeparateurLettres = ' ';

    string texte;
    string codeMorseActuel;

    // Ajouter un espace final pour forcer le traîtement du dernier code Morse
    for (const char caractereCourant: morse + kSeparateurLettres) {
        if (caractereCourant == kSeparateurLettres) {
            // Espace = séparateur de lettres donc le code morse précédant est complet
            if (!codeMorseActuel.empty()) {
                texte += decoderUnCaractereDepuisMorse(codeMorseActuel);
                codeMorseActuel.clear();
            }
        } else {
            // Accumuler le code Morse (points, tirets, et slash pour les espaces)
            codeMorseActuel += caractereCourant;
        }
    }

    return texte;
}
