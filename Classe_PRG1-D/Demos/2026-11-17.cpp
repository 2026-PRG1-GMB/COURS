#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
#include <array>
#include <vector>
#include <string>

using namespace std;

   // données
   using Data    = double;
   using Ligne   = vector<Data>;
   using Matrice = vector<Ligne>;

   using Entier = int;

   using Type1 = array<int, 3>;
   using Type2 = array<int, 3>;

   // mes coordonnées
   int x, y;
   int temperature;

   // Cube
   using Element = double;
   const size_t size = 6;
   using Rangee  = array<Element, size>;  // x
   using Couche  = array<Rangee, size>;   // y
   using Cube    = array<Couche, size>;   // z

//--------------------------------------------------
void afficher(const Ligne& ligne) {
   cout << "[";
   for (size_t i = 0; i < ligne.size(); ++i) {
      if (i) cout << ", ";
      cout << ligne[i];
   }
   cout << "]";
}

//--------------------------------------------------
void afficher(const Matrice& matrice) {
   cout << "[";
   for (size_t i = 0; i < matrice.size(); ++i) {
      if (i) cout << ", ";
      afficher(matrice[i]);
   }
   cout << "]";
}


int main () {

   Cube cube;

   cout << cube.at(2).at(2).at(0);

   Matrice matrice {
      Ligne{1},
      Ligne{2},
      Ligne{},
      Ligne{1, 2, 3, 4, 5}
   };

   afficher(matrice);
   cout << endl;

   return EXIT_SUCCESS;
   // médailles
   using Tab_Med_Valeur = array<int, 3>;
   using Tab_Med_Nom    = array<string, 3>;

//   Tab_Med_Valeur tab_med_valeur;
//   Tab_Med_Nom    tab_med_nom {"Or"s, "Argent"s, "Bronze"s};

//   for (size_t i = 0; i < tab_med_valeur.size(); ++i) {
//      cout << tab_med_nom[i] << "\t" << tab_med_valeur[i] << endl;
//   }

   using Tab_Pays_Med = array<Tab_Med_Valeur, 10>;
   using Tab_Pays_Nom = array<string, 7>;

   //                            0              1        2
   Tab_Pays_Nom tab_pays_nom{"Allemagne"s, "Canada"s, "Chine"s};
   Tab_Pays_Med tab_medailles {
      Tab_Med_Valeur {0, 0, 2},  // Allemagne
      Tab_Med_Valeur {1, 0, 1},  // Canada
      Tab_Med_Valeur {1, 2, 0}   // Chine
   };

   size_t indice = 1; // Canada
   cout << tab_pays_nom[indice] << " : ";
   for (size_t i = 0; i < tab_medailles.at(0).size(); ++i) {
      cout << tab_medailles.at(indice).at(i) << " ";
   }


   return EXIT_SUCCESS;
}
