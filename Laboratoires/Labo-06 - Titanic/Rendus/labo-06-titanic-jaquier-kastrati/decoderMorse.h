
#ifndef PRG1_LABO06_TITANIC_DECODERMORSE_H
#define PRG1_LABO06_TITANIC_DECODERMORSE_H

#include <string>

/**
 * Décode un texte en code Morse vers du texte normal.
 * Le code Morse doit contenir des espaces entre les lettres et des '/' entre les mots.
 * @param morse Le code Morse à décoder (. et -).
 * @return Le texte décodé en majuscules.
 */
std::string decoderMorse(const std::string &morse);

#endif //PRG1_LABO06_TITANIC_DECODERMORSE_H
