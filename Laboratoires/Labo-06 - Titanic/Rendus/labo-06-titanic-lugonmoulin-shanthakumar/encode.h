#ifndef PRG1_LABO06_TITANIC_ENCODE_H
#define PRG1_LABO06_TITANIC_ENCODE_H

#include <string>

#include "fichier.h"
#include "morse.h"

// Encode un fichier clair en Morse.
// Retourne true si l'opération réussit.
bool encode_file(const std::string& in_path, const std::string& out_path);

#endif //PRG1_LABO06_TITANIC_ENCODE_H