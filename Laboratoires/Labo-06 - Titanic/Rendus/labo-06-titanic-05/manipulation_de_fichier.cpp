#include "manipulation_de_fichier.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include "traduction_morse.h"

void gestion_de_fichier(char action, std::string entree, std::string sortie) {
    //Ouvre le fichier de départ et copier la ligne qui s'y trouve
    std::ifstream fichier_entree;
    fichier_entree.open(entree);

    std::string ligne_entree;

    //Crée un nouveau fichier ou en l'écrase
    std::ofstream fichier_sortie;
    fichier_sortie.open(sortie);
    if (!fichier_sortie) { // l'ouverture a échoué
        std::cerr << "Erreur d'ouverture du fichier\n";
    } else {
        // Selon l'action choisi la fonction codage ou décodage et utilisée

        if (action == '1') { //encodage d'un message
            std::string ligne;
            while (fichier_entree) {
                std::getline(fichier_entree,ligne); // lecture
                fichier_sortie << ligne_morse_encode(ligne); //traduction et écriture
            }
        } else { // decodage d'un message
            std::string lettre_morse;
            while (fichier_entree) {
                fichier_entree >> lettre_morse; // lecture
                fichier_sortie << lettre_morse_decode(lettre_morse); //traduction et écriture
            }
        }

        fichier_entree.close();
        fichier_sortie.close();
    }
}