//---------------------------------------------------------
// Demo           : 04_librairie
// Fichier        : annexes.cpp (le corps de sous-programmes du .h)
// Version        : 02 - 2020-09-18
// Auteur(s)      : (C) BREGUET Guy-Michel
// But            : ne contient que les définitions
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include "annexe.hpp"      // inclure la spec de ce .cpp

using namespace std;

const int CONSTANTE = 12;

//-------------------------------------------------------------------------
// un sous-programme interne à la librairie
void cachee (const int valeur) {
   cout << valeur;
}

//-------------------------------------------------------------------------
// un sous-programme visible par main
void sousPgm (const string& msg) {
   cout << msg;
   cachee(CONSTANTE);  // appel de la fonction interne
}
