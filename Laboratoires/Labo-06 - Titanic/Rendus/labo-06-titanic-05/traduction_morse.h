//
// Created by romai on 29.10.2025.
//

#ifndef PRG1_LABO06_TITANIC_TRADUCTION_MORSE_H
#define PRG1_LABO06_TITANIC_TRADUCTION_MORSE_H

#include <string>
int en_num(const std::string & str, int point,int tiret,int erreur);
char lettre_morse_decode(const std::string& code);
std::string lettre_morse_encode(char lettre);
std::string ligne_morse_decode(const std::string& ligne);
std::string ligne_morse_encode(const std::string& ligne);
#endif //PRG1_LABO06_TITANIC_TRADUCTION_MORSE_H