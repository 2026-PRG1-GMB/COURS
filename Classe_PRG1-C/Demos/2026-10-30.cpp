#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>

using namespace std;

int    additionner (int i1)                  { return i1; }
double additionner (int i1,    double i2=0)    { return i1 + i2; }

void afficher(int i)  { cout << i; }
void afficher(int* i) { cout << *i; }

// ecrire une fonction qui retourne la somme de deux paramètre
int afficher(int i1, int i2) {
   return i1 + i2;
}

// ecrire une fonction qui rend par paramtètre la somme de deux paramètre
// et indique par un boolean ...
bool afficher(int i1, int i2, int& resultat) {
   resultat = i1 + i2;
   return true;
}

// ----------------------------------------
int main () {

   int valeur = 3;
   afficher(valeur);

//   additionner(1);

   int* ptr = & valeur;
   afficher(ptr);

   /*
   cout << additionner(1, 2) << endl;
   cout << additionner(1.2, 3.4) << endl;
   cout << additionner(1L, 2L) << endl;
   */

   cout << endl;
   array<int, 10> tab {1, 4, 2, 5, 6, 2, 7, 9, 0, 7};
   for (size_t i = 0; i < tab.size(); i++) {
      cout << tab.at(i) << " ";
   }
   cout << endl;

   // afficher au format [v0, v1, ... vn-]
   cout << "[";
   for (size_t i = 0; i < tab.size(); i++) {
      if (i > 0)
         cout << ", ";
      cout << tab.at(i);
   }
   cout << "]";

   return EXIT_SUCCESS;
   cout << endl;
   cout << &(tab.at(0)) << endl;
   cout << &(tab) << endl;

   cout << "tab[12]    : " << tab[12] << endl;
   cout << "tab.at(12  : " << tab.at(12) << endl;

   int tacb[10] = {1, 2, 23, 4};

   return EXIT_SUCCESS;
}
