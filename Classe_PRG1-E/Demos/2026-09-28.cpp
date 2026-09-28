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

   {
      bool beau = false;
      int entier = 12;
      float temp = 24.5;

      if (beau) {
         if (temp > 20.0)
            cout << "à la piscine" << endl;
         else // if (temp <= 20.0)
            cout << "au parc" << endl;
      }
      else
         cout << "je reste au chad" << endl;
   }

   {
      float temp = 24.5;
      cout << ( temp > 20.0 ? "chaud" : "froid") << endl;
//      cout << ( temp > 20.0 ? "chaud" : false) << endl;

      int   a = 21;
      float b = 2.5;
      double resultal = a > b ? a : b;

      int c = 21;
      // max en a et b
      cout << "max(a, b) = " << ( a > b ? a : b) << endl;

      // max en a, b et c
      cout << "max(a, b, c) = " << ( a > b ? ( a > c ? a : c) : ( b > c ? b : c) ) << endl;
      cout << "max(a, b, c) = " << ( a > b ? a > c ? a : c : b > c ? b : c ) << endl;

      cout << boolalpha << (123456789e+12 - 123456789e-12 == 123456789e+12) << endl;

      {
         int i = 5;
         int j = 7;
         cout << "expression : " << boolalpha << ( --i < 5 and j++ ) << endl;
         cout << "i          : " << i << endl;
         cout << "j          : " << j << endl;
      }
   }

   return EXIT_SUCCESS;
}
