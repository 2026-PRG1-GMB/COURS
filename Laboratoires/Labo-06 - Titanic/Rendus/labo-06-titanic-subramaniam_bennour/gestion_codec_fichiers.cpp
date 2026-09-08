// Fichier : gestion_codec_fichiers.cpp
// Description :
//      Fonctions de traitement des fichiers pour l'encodage et le décodage
//      du code Morse.
//      L'encodage convertit chaque caractère en code Morse, séparé par un
//      espace, et remplace les espaces entre mots par le symbole slash '/'.
//      Le décodage effectue l'inverse.
//      Les fichiers ne contiennent qu'une seule ligne de texte (Morse ou texte clair).

#include "gestion_codec_fichiers.h"
#include "morse.h" //pour les fonctions de conversion caractère-Morse
#include <iostream>
#include <fstream>

//Constante
const std::string str_slash = "/"; //séparateur de mots en Morse

/// Encode un fichier en clair en code Morse après avoir vérifié l'ouverture correcte des fichiers à traiter
/// @param nom_fichier_entree Nom du fichier texte à encoder
/// @param nom_fichier_sortie Nom du fichier de sortie à écrire en code Morse
void encoder_flux(const std::string& nom_fichier_entree, const std::string& nom_fichier_sortie) {

    std::ifstream fichier_entree(nom_fichier_entree);
    std::ofstream fichier_sortie(nom_fichier_sortie);

    if (!fichier_entree || !fichier_sortie) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier d'entree '" << nom_fichier_entree
        << "' ou le fichier de sortie '" << nom_fichier_sortie <<"'. \n";
        return;
    }
    std::string texte;
    while (std::getline(fichier_entree, texte)) {
        for (char c : texte) {
            if (c == espace) {
                fichier_sortie << str_slash << espace ;
            } else {
                fichier_sortie << char_to_morse(c) << espace;
            }
        }
    }
    std::cout << "Encodage reussi.\n";
    fichier_entree.close();
    fichier_sortie.close();
}

/// Décode un fichier en Morse en texte clair après avoir vérifié l'ouverture correcte des fichiers à traiter
/// @param nom_fichier_entree Nom du fichier en Morse à décoder
/// @param nom_fichier_sortie Nom du fichier de sortie à écrire en texte
void decoder_flux(const std::string& nom_fichier_entree, const std::string& nom_fichier_sortie) {

    std::ifstream fichier_entree(nom_fichier_entree);
    std::ofstream fichier_sortie(nom_fichier_sortie);

    if (!fichier_entree || !fichier_sortie) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier d'entree '" << nom_fichier_entree
        << "' ou le fichier de sortie '" << nom_fichier_sortie <<"'.\n";
        return;
    }
    std::string morse;
    while (std::getline(fichier_entree, morse, espace)) {
        if (!morse.empty()) { //empty() proposé par CLion
            fichier_sortie << (morse == str_slash ? espace : morse_to_char(morse));
        }
    }
    std::cout << "Decodage reussi.\n";
    fichier_entree.close();
    fichier_sortie.close();
}