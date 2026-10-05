#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   for (char car = 'a'; car <= 'e'; ++car) {
      for (int nbre=0; nbre<4; ++nbre) {
         cout << car << nbre << " ";
      }
      cout << endl;
   }
   cout << endl;

   for (char car = 'a'; car <= 'k'; ++car) {
      cout << car;
      if (car == 'b') continue;
      if (car == 'd') break;
      cout << " ... ";
   }
   cout << endl;

   // tourver l'indice de la lettre lettre
   char lettre = 't';
   //            0123456789012345678901234567
   string str = "bonjour a tous, il fait beau";
   int i=0;

   for (int i=0; i<str.size(); ++i) {
      if (str.at(i) == lettre) {
         cout << i << endl;
         break;
      }
   }

   for (char c : str) {
      if (c == lettre) {
         cout << i << endl;
         break;
      }
      ++i;
   }

   bool sotir = false;
   for (char car = 'a'; car <= 'e'; ++car) {
      for (int nbre=0; nbre<4; ++nbre) {
         cout << car << nbre << " ";
         if (nbre > 2) {
            sotir = true;
            break;
         }
      }
      if (sotir)
         break;
      cout << endl;
   }
   cout << endl;

   // exercice
   // afficher toutes valeurs comprises entre 0 et n (constante dans le code)
   // au format [0, 1, 2, 3, .., n]

   const int n = 0;
   cout << '[';
   for (int nbre=0; nbre<=n; ++nbre) {
      if (nbre)
         cout << ", ";
      cout << nbre;
   }
   cout << ']' << endl;

   // exercice
   // idem mais depuis     string valeurs = "abcdefghijkl"
   // [a, b, c, d, ..., l]
   string valeurs = "abcdefghijkl";
   valeurs = "";
   cout << '[';
   for (size_t i=0; i<valeurs.length(); ++i) {
      if (i)
         cout << ", ";
      cout << valeurs.at(i);
   }
   cout << ']' << endl;

   int saisie;
   bool erreur;
   do {
      cout << "valeur [-1 .. 12] : ";
      cin >> saisie;
      erreur = not cin.good() or saisie < -1 or saisie > 12;
      if (erreur) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "tu sais pas lire .. recommence !" << endl;
      }
   } while (erreur);

   cout << "votre saisie : " << saisie << endl;

   return EXIT_SUCCESS;
}