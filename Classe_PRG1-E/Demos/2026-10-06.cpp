#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int surface (int largeur, int longueur) {
   return largeur * longueur;
}

void echanger(int& gauche, int& droite) {
   int tmp = gauche;
   gauche = droite;
   droite = tmp;
}

char min(const string& str) {
   size_t i_min = 0;
   for (size_t i = 1; i < str.length(); i++) {
      if (str.at(i) < str.at(i_min)) {
         i_min = i;
      }
   }
   return str.at(i_min);
}

int addition(const int& a, const int& b) {
   return a + b;
}

bool multiply(int a, int b, int& resultat) {
   resultat = a * b;
   return true;
}

int main() {
   int largeur = 2;
   int longueur = 3;

   // par valeur
   cout << "largeur : " << largeur << " / " << "longueur : " << longueur << endl;
   int resultat = surface(largeur, longueur);
   cout << "surface : " << resultat << endl;
   cout << "largeur : " << largeur << " / " << "longueur : " << longueur << endl;
   cout << endl;

   // par référence
   cout << "largeur : " << largeur << " / " << "longueur : " << longueur << endl;
   echanger(largeur, longueur);
   cout << "largeur : " << largeur << " / " << "longueur : " << longueur << endl;

   const string str = "kjshfblgahl";
   cout << min(str);

   int a = 2;
   int b = 5;
   cout << addition(a, 2);

   int c;
   cout << multiply(a, b, c);

   return EXIT_SUCCESS;
}
