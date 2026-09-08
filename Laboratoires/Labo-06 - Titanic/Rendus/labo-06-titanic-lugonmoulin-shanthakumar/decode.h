#ifndef PRG1_LABO06_TITANIC_DECODE_H
#define PRG1_LABO06_TITANIC_DECODE_H

#include <string>

#include "fichier.h"
#include "morse.h"

// Décode un fichier Morse en texte clair.
// Retourne true si l'opération réussit.
bool decode_file(const std::string& in_path, const std::string& out_path);

#endif //PRG1_LABO06_TITANIC_DECODE_H