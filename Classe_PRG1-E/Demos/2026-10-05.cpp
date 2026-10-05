#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {

   for (char car = 'A'; car <= 'Z'; car++) {
      cout << car;
      if (car == 'F')
         continue;
      cout << "...";
   }
   cout << endl;

   for (char car = 'A'; car <= 'Z'; car++) {
      cout << car;
      if (car != 'F')
         cout << "...";
   }
   cout << endl;

   // chercher l'indice de la 1ere majuscule dans str
   //            0123456789 123456789 123456789
   string str = "ahhsighhoHpmAJHTLNaaoihe";

   for (int i = 0; i < str.length(); i++) {
      if (str[i] >= 'A' and str[i] <= 'Z') {
         cout << i << " " << str[i] << endl;
         break;
      }
   }
   cout << endl;

   // afficher toutes les valeurs entre debut et fin (-12 et +4)
   // au format [-12, -11, ... 3, 4]
   const int debut = -12;
   const int fin   = 4;
   cout << '[';
   for (int valeur=debut; valeur<=fin; valeur++) {
      if (valeur > debut)
         cout  << ", ";
      cout << valeur;
//      if (valeur != fin)
//         cout  << ", ";
   }
   cout << ']';
   cout << endl;

   // afficher les caractères de   string chaine = "abcdefghij"
   // au format [a, b, c, ... i, j]
   string chaine = "abcdefghij";
   cout << '[';
   for (size_t i = 0; i < chaine.length(); i++) {
      if (i)
         cout << ", ";
      cout << chaine[i];
   }
   cout << ']';
   cout << endl;
/*
   // saisie d'une valeur
   int min = -12;
   int max = +21;
   int saisie;
   bool erreur;
   do {
      cout << "votre saisie [" << min << " - " << max << "] : ";
      cin >> saisie; // si 'a', le flux est planté => saisie a été mis à 0

      // si erreur
      erreur = not(cin) or saisie < min or saisie > max;
      if (erreur) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "tu sais pas lire ??" << endl;
      }
   } while (erreur);
   cout << endl;
*/

   cout << endl;
   for (char car = 'a'; car < 'f'; car++) {
      for (int i=0; i<=car-'a'; ++i)
         cout << car << i << " ";
      cout << endl;
   }
   cout << endl;

   return EXIT_SUCCESS;
}
