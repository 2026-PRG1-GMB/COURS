#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int moche = 2;
int f (int i1, int i2=0, double d=0);

int& pas_beau () {
   int ici = 2;
   return ici;
}

int* pas_beau_ptr () {
   int ici = 2;
   return &ici;
}

int    addition(int    i1, int    i2) { return i1 + i2; }
double addition(double i1, double i2) { return i1 + i2; }

int main () {

   cout << addition (1, 2)     << endl;
   cout << addition (1.1, 2.2) << endl;

   int& valeur = pas_beau();
   int* ptr = pas_beau_ptr();

   valeur = f(1, 2, 3.0);
   valeur = f(1, 2);
   valeur = f(1);

   cout << moche;

   return EXIT_SUCCESS;
}

int f (int i1, int i2, double d) {
   cout << i1 << " " << i2 << " " << d << endl;
   ++moche;
   return i1 + i2;
}
