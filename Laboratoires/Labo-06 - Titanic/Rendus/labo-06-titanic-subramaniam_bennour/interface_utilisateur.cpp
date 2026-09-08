// Fichier : interface_utilisateur.cpp
// Description :
//      Fonctions d'interaction avec l'utilisateur : affichage du menu principal,
//      saisie et validation du choix d'opération (encoder ou décoder).
//      Contient également la fonction pour la saisie des noms de fichiers à traiter.

#include "interface_utilisateur.h"
#include <iostream>
#include <iomanip> // setw()
#include <limits>  // numeric_limits

//Constantes
constexpr int encode = 1;
constexpr int decode = 2;
constexpr char oui = 'Y';
constexpr char non = 'N';
constexpr int w_col = 10;

///Affiche le menu principal et le choix initial entre encoder et décoder
///@param msg1 Message d'introduction
///@param msg2 Message pour option 1 (encoder)
///@param msg3 Message pour option 2 (décoder)
void afficher_menu(const std::string& msg1, const std::string& msg2, const std::string& msg3) {
    std::cout << msg1 << std::endl;
    std::cout << std::setw(w_col) << encode << msg2 << std::endl;
    std::cout << std::setw(w_col) << decode << msg3 << std::endl;
}

/// Demande, lit et vérifie la saisie de l'utilisateur : choix d'un entier entre 1 (encoder) et 2 (décoder)
/// @param message Message pour inviter l'utilisateur à saisir son choix
/// @return Retourne true si encoder ou false si décoder
bool saisir_operation(const std::string& message) {

    int i;
    bool saisie_valide;
    do {
        std::cout << message << "[" << encode << "-" << decode << "] : ";
        saisie_valide = (std::cin >> i) and (i == encode or i == decode);
        if (!saisie_valide) {
            std::cin.clear(); //corrige le buffer
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //vide le buffer
    } while (!saisie_valide); //inspiré de la solution ex. 04-01
    return i == encode;
}

///Demande, lit et vérifie la saisie de l'utilisateur : choix de caractère entre 'Y' (oui) et 'N' (non)
///@param message Message pour inviter l'utilisateur à saisir son choix
///@return Retourne true si oui ou false si non
bool saisir_confirmation(const std::string& message) {

    char c;
    bool saisie_valide;
    do {
        std::cout << message << "[" << oui << "/" << non << "] : ";
        saisie_valide = (std::cin >> c) and (c == oui or c == non);
        if (!saisie_valide) {
            std::cin.clear(); //corrige le buffer
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //vide le buffer
    } while (!saisie_valide); //inspiré de la solution ex. 04-01
    return c == oui;
}

///Demande à l'utilisateur de saisir un nom de fichier.
/// @param message Message pour inviter l'utilisateur à écrire le nom du fichier
/// @return Nom du fichier saisi
std::string saisir_nom_fichier(const std::string& message) {
    std::cout << message;
    std::string nom_fichier;
    getline(std::cin, nom_fichier);
    return nom_fichier;
}