#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

int main () {

   // Metal
   using Metal_Nom = array<string, 3>;
   Metal_Nom metal_nom    {"Or"s, "Argent"s, "Bronze"s};

   using Metal_Valeur = array<int, 3>;
   Metal_Valeur metal_valeur;

   for (const string& str : metal_nom) {
      cout << str << endl;
   }

   for (size_t i = 0; i < metal_valeur.size(); ++i) {
   cout << metal_nom[i] << " : " << metal_valeur[i] << endl;
   }

   // Pays
   using Pays_Nom = array<string, 3>;
   Pays_Nom pays_nom    {"Allemagne"s, "Canada"s, "Chine"s};

   // tableau de medails par pays
   using Medailles_Pays = array<Metal_Valeur, 10>;
   Medailles_Pays medailles_pays {
      Metal_Valeur{0, 0, 2},   // Allemagne
      Metal_Valeur{1, 0, 1}    // Canada
   };

   try {
      throw out_of_range("Oops");
   }
   catch (exception e) {
      cout << e.what() << endl;
   }


   return EXIT_SUCCESS;
}
