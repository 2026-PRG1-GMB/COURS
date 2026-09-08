#ifndef PRG1_LABO06_TITANIC_FICHIER_H
#define PRG1_LABO06_TITANIC_FICHIER_H

#include <iostream>
#include <fstream>
#include <string>

// Ouvre les deux flux. Retourne false si un des deux échoue.
bool open_streams(const std::string& in_path,
                  const std::string& out_path,
                  std::ifstream& in,
                  std::ofstream& out);

// Ferme proprement
void close_streams(std::ifstream& in, std::ofstream& out);

#endif //PRG1_LABO06_TITANIC_FICHIER_H