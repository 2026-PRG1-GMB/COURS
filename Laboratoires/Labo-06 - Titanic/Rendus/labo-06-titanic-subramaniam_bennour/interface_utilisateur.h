// Fichier : interface_utilisateur.h
// Description :
//      Déclarer les fonctions pour l'interface avec l'utilisateur :
//      affichage du menu, saisie et validation des choix de l'utilisateur et récupération
//      des noms de fichiers à traiter.

#ifndef PRG1_LABO06_TITANIC_SUBRAMANIAM_BENNOUR_INTERFACE_UTILISATEUR_H
#define PRG1_LABO06_TITANIC_SUBRAMANIAM_BENNOUR_INTERFACE_UTILISATEUR_H

#include <string>

//Fonction pour afficher le menu principal
void afficher_menu(const std::string& msg1, const std::string& msg2, const std::string& msg3);

//Fonctions pour les saisies de l'utilisateur
bool saisir_operation(const std::string& message);
bool saisir_confirmation(const std::string& message);
std::string saisir_nom_fichier(const std::string& message);

#endif //PRG1_LABO06_TITANIC_SUBRAMANIAM_BENNOUR_INTERFACE_UTILISATEUR_H