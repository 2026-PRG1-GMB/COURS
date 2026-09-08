#ifndef PRG1_LABO06_TITANIC_MENU_H
#define PRG1_LABO06_TITANIC_MENU_H

#include <iostream>
#include <iomanip>
#include <limits>

// Affiche le menu et boucle jusqu'à obtenir un choix valide [1-2]
int ask_choice_1_2();

// Demande à l'utilisateur s'il souhaite continuer
bool ask_continue();

// Fonction utilitaire pour nettoyer le flux d'entrée
void reset_input();

// Eviter les nombres magiques dans le code
constexpr int encode = 1;
constexpr int decode = 2;

// Valeurs acceptées pour continuer
constexpr char YES = 'Y';
constexpr char yes = 'y';
constexpr char NO = 'N';
constexpr char no = 'n';

#endif //PRG1_LABO06_TITANIC_MENU_H