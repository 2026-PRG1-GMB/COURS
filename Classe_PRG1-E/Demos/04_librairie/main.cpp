//---------------------------------------------------------
// Demo           : 04_librairie
// Fichier        : main.cpp
// Version        : 03 - 2022-11-01
// Auteur(s)      : (C) BREGUET Guy-Michel
// But            : exemple d'utilisation d'une
//                  librairie personnelle
// Modifications  : remplacer printf par cout
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>
#include <iostream>

#include "annexe.hpp"

using namespace std;

int main () {
   // utlisation d'une declaration de la ibrairie
   cout << "valeur = " << CONSTANTE << endl;

   // appel d'un des sous-programme de la librairie
   sousPgm("message pour la librairie ...\n");

   // appel au sous-programme "cachee" impossible
   //cachee(3);

   // fin de programme
   cout << "fin de programme";
   return EXIT_SUCCESS;
}
