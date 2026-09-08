#ifndef PRG1_LABO06_TITANIC_MORSE_H
#define PRG1_LABO06_TITANIC_MORSE_H

#include <string>

/**
 * Code un texte en code Morse.
 * Supporte uniquement les caractères de A-Z a-z et quelques symboles.
 * Voir https://morsecode.world/international/morse2.html pour la liste des symboles (sous 'Punctuation Mark').
 * @param texte Le texte à coder en Morse.
 * @return Le texte codé en Morse (. et -), avec des espaces entre les lettres et des '/' entre les mots.
 */
std::string coderEnMorse(const std::string &texte);

#endif //PRG1_LABO06_TITANIC_MORSE_H
