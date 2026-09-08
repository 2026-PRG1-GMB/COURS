#include <iostream>
#include "interactionUtilisateur.h"

/// Récupère la saisie utilisateur, tant qu'elle est dans les limites indiquées
/// @param texte Le texte à afficher avant la saisie
/// @param valeur_min La condition minimale de la saisie utilisateur (example : [1-100], valeur_min vaut 1)
/// @param valeur_max La condition maximale de la saisie utilisateur (example : [1-100], valeur_min vaut 100)
/// @return la saisie utilisateur dans la plage donnée
char saisie(const std::string& texte, char valeur_min, char valeur_max) {
    char valeur;

    do {
        std::cout << texte;
        std::cin >> valeur;
        std::cin.clear();
        std::cin.ignore();
    }while (valeur != valeur_min && valeur != valeur_max);
    return valeur;
}