#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ----------------------------------------
int f (int i1, int i2, double d = 0.0);

int* oops () {
   int i=2;
   return &i;
}

// ----------------------------------------
void plus2 (int& valeur) {
   valeur += 2;
}

void plus2 (int* valeur) {
   *valeur = *valeur + 2;
}

// ----------------------------------------
int main () {

   int valeur = 3;//= f(1, 2);
   int* adr = &valeur;
   plus2(valeur);
   plus2(adr);

   return EXIT_SUCCESS;
}

// ----------------------------------------
int f (int i1, int i2, double d) {
   cout << i1 << " " << i2 << " " << d << endl;
   return i1 + i2;
}
