#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int moche;

// ----------------------------------------
int f(int& param) {
   cout << fixed << setprecision(4);

   ++moche;

   if (param == 0)
      return 1;

   if (not (param == 0))
      cout << param << endl;

   return -1;
}


// ----------------------------------------
int main () {

   int valeur = 12;
   f(valeur);
   12;

   return EXIT_SUCCESS;
}
