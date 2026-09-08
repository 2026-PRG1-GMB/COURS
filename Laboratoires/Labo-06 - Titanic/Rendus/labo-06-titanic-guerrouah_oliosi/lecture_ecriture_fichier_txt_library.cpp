#include "lecture_ecriture_fichier_txt_library.h"
#include <iostream>

//lecture de fichier, on renvoie un flux
std::ifstream read_file(const std::string& file_name) {
	std::ifstream in(file_name);
	if (!in) {
		std::cerr << "Erreur d'ouverture du fichier\n";
	}
	return in;
}

//écriture de fichier, on renvoie un flux
std::ofstream write_file(const std::string& file_name) {
	std::ofstream out(file_name);
	if (!out) {
		std::cerr << "Erreur d'ouverture/création du fichier\n";
	}
	return out;
}
