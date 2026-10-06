#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   const int   entier = 21;
   float reel   = 3.14f;
   const int& ref     = reel;

   bool sortir = false;
   for (char car='a';car<='f';car++) {
      for (int i=0; i<4; i++) {
         cout << car << i << " ";
         if (i == 2) {
            sortir = true;
            break; // sortir complètement
         }
      }
      if (sortir)
         break;
      cout << endl;
   }
   cout << endl;

   // saisir une valeur [-3 .. 5]
   // avertir si faux
   // traiter les types erronés (cin 'a' => int)
   const int min = -3;
   const int max =  5;
   int saisie;
   bool erreur;
   do {
      cout << "saisie [" << min << " - " << max << "] : ";
      cin  >> saisie;
      erreur = not(cin) or saisie < min or saisie > max;

      if (erreur) {
         cin.clear();
         cout << "tu sais pas lire !!" << endl;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

   } while (erreur);

   cout << "votre saisie : " << saisie << endl;

   return EXIT_SUCCESS;
}
