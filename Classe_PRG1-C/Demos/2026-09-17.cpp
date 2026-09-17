#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

   int variable = 12;

   cout << "valeur   : " <<  variable << endl;
   cout << "adresse  : " << &variable << endl;
   cout << endl;

   int* ptr = &variable;
   cout << "pointeur : " <<  ptr << endl;
   cout << "adresse  : " << &ptr << endl;

   return EXIT_SUCCESS;
}

// pseudo date
/*
 * 1) bonjour
 * 1.1) ...
 *
 * 2) saisir les dates
 * 2.1) saisir date 1
 * 2.1.1) saisir jour
 * 2.1.2) saisir mois
 * 2.1.3) saisir annee
 *
 * 2.1.4) si faux, recommencer
 * 2.2) saisir date 2
 *
 * 3) calculer
 *
 * 4) afficher le résultat
 * 4.1) format [jj.mm.aaaa]
 *
 * 5) au revoir
 *
 * outils
 * - oui/non est_bissextile(annee)
 * - [28-31] nbre_jours(mois, annee)
 */