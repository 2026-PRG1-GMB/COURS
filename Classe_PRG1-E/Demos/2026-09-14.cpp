#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main () {
   // déclaration
const int constante = 10;

   // calcul
   int variable = 10;      // initialisation
   cout << "valeur    : " <<  variable << endl;
   cout << "adresse   : " << &variable << endl;

   variable = 20;          // affectation
   cout << variable * constante << endl;

//   constante = 20;    // constante => pas possible

   string nom;// = "toto";
   cout << nom << endl;

   42;

   return EXIT_SUCCESS;
}
