#include "interface.h"

#include <iostream>
#include <iomanip>

/**
 * Nettoie le flux et affiche une erreur
 */
void gere_erreur_flux();

char recup_choix_utilisateur(const std::string &message, const char choix1, const char choix2) {
    do {
        std::cout << message;

        std::string entree_utilisateur;
        std::getline(std::cin, entree_utilisateur);

        if (!std::cin) {
            gere_erreur_flux();
            continue;
        }

        // on vérifie que l'utilisateur a saisie 1 seul caractère
        if (entree_utilisateur.length() == 1) {
            if (const char c_entree = entree_utilisateur[0]; c_entree == choix1 or c_entree == choix2) {
                return c_entree;
            }
        }
    } while (true);
}

std::string recup_nom_fichier(const std::string &message, const int largeur_ligne) {
    std::string entree_utilisateur;

    std::cout << std::setw(largeur_ligne) << std::left << message << std::right << ':';
    do {
        std::getline(std::cin, entree_utilisateur);

        if (!std::cin) {
            gere_erreur_flux();
            continue;
        }

        return entree_utilisateur;
    } while (true);
}

void gere_erreur_flux() {
    std::cin.clear();
    std::cerr << "Input error. Please try again." << std::endl;
}
