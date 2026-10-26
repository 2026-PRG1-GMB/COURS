#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int f(int i1, int i2, double d=3.1);
// ----------------------------------------

int main () {

   int resultat = f(1, 2);
   return EXIT_SUCCESS;
}

// ----------------------------------------
int f(int i1, int i2, double d) {
   cout << i1 << " " << i2 << " " << d << endl;
   return i1 + i2;
}
