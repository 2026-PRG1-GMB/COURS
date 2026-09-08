#include "fichier.h"

#include <fstream>
#include <iostream>

bool ouvrir_fichier_lecture(const std::string &chemin_fichier, std::ifstream &flux_entree) {
    flux_entree.open(chemin_fichier);

    if (!flux_entree) {
        std::cerr << std::endl << "Error opening file" << std::endl;
        return false;
    }

    return true;
}

bool ouvrir_fichier_ecriture(const std::string &chemin_fichier, std::ofstream &flux_sortie) {
    flux_sortie.open(chemin_fichier);

    if (!flux_sortie) {
        std::cerr << "Error opening file" << std::endl;
        return false;
    }

    return true;
}
