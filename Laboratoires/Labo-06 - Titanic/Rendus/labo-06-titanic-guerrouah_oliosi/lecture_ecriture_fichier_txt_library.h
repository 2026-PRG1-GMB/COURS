//
// Created by M on 29.10.2025.
//

#ifndef LABO_06_TITANIC_GUERROUAH_OLIOSI_LECTURE_ECRITURE_FICHIER_TXT_LIBRARY_H
#define LABO_06_TITANIC_GUERROUAH_OLIOSI_LECTURE_ECRITURE_FICHIER_TXT_LIBRARY_H
#include <string>
#include <fstream>

std::ifstream read_file(const std::string& file_name);
std::ofstream write_file(const std::string& file_name);

#endif //LABO_06_TITANIC_GUERROUAH_OLIOSI_LECTURE_ECRITURE_FICHIER_TXT_LIBRARY_H