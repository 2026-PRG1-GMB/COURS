#ifndef PRG1_LABO06_TITANIC_MORSE_H
#define PRG1_LABO06_TITANIC_MORSE_H

#include <string>

/**
 * Converti les caractères normaux en chaine de morse
 * @param caractere
 * @return une chaine de code morse
 */
std::string encode_caractere_en_morse(char caractere);

/**
 * Converti chaine de code morse en caractère
 * @param chaine
 * @return un caractère
 */
char decode_caractere_morse(const std::string &chaine);

#endif //PRG1_LABO06_TITANIC_MORSE_H
