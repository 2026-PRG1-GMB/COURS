#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>

using namespace std;

int main() {

   int entier = 3.14;
   cout << (2 + 2.5) << endl;
   cout << (double(2) + 2.5) << endl;

   short court = 12334535;
   cout << court << endl;

   float reel = 3.14;
   cout << reel << endl;

   cout << setprecision(20) << fixed;
   cout << (123456789e+12 - 123456789e-12) << endl;

   // entier => reel
   reel = 1234567890;
   cout << reel << endl;

   // reel => entier
   entier = 10e21;
   cout << entier << endl;

   return EXIT_SUCCESS;
}
