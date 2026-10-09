#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void echanger(int& a, int& b) {
   cout << "dans echanger : " << a << " " << b << endl;
   int c = a;
   a = b;
   b = c;
   cout << "dans echanger : " << a << " " << b << endl;
}

void afficher(const string& str) {
   cout << str << endl;
}

void afficher(const int& i) {
   cout << i << endl;
}

bool est_impair(int i) {
   return i % 2;
}

   // si type de base et pas de modification
   // => par valeur (par copie)
   // si structurée (gros)
   // => par référence constante
   // si besoin de modifier
   // => par référence

bool affecter(bool pair, int& valeur) {
   if (pair) {
      valeur++;
      return true;
   }
   return false;
}

int main () {
   int hauteur = 12;
   int largeur = 24;

   cout << "dans main     : " << hauteur << " " << largeur << endl;
   echanger(hauteur, largeur);
   cout << "dans main     : " << hauteur << " " << largeur << endl;

   float valeur = 12;
   const int& ref = 12;

   const string message = "c'est vendredi :)";
   afficher(message);
   afficher("c'est vendredi :)");

   afficher(2);
   afficher(2.3);
   return EXIT_SUCCESS;
}
