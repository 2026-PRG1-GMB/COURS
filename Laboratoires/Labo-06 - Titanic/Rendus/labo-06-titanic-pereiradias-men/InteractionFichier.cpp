#include <fstream>
#include <iostream>
#include "interactionFichier.h"

///Ecrire le contenu dans le fichier
///@param nom_fichier le fichier où on va deposer notre texte
///@param message Le contenu qu'on veut ecrire dans le fichier destinataire
void fichier_sortie (const std::string& nom_fichier, const std::string& message) {
    std::ofstream fichier_sortie (nom_fichier);
    if (!fichier_sortie) {
        std::cerr << " Erreur d'ouverture du fichier";
    }
    fichier_sortie << message;
    fichier_sortie.close ();
}

/// Lit le contenu qu'il y a dans le fichier
/// @param nom_fichier Nom du fichier qu'on doit aller lire
/// @return Retourne une variable qui contient les strings du fichier
std::string fichier_entree (const std::string& nom_fichier) {
    std::ifstream fichier_entree (nom_fichier);
    if (!fichier_entree) {
        std::cerr << " Erreur d'ouverture du fichier";
    }
    std::string contenu_message;
    std::getline(fichier_entree, contenu_message);

    fichier_entree.close ();

    return contenu_message;
}

