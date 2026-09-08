// Fichier : morse.h
// Description :
//      Déclarer les constantes et fonctions pour la conversion entre caractères et code Morse
//      Conversion entre caractères ASCII (lettres majuscules, chiffres, symboles) et code Morse
// Source du code Morse : https://fr.wikipedia.org/wiki/Code_Morse_international

#ifndef LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_MORSE_H
#define LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_MORSE_H

#include <string>

//Constante globale
constexpr char espace = ' '; //séparateur utilisé pour encoder/décoder les espaces entre les mots/codes Morse

char morse_to_char(const std::string& morse);
std::string char_to_morse(char c);

#endif //LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_MORSE_H