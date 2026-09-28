#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main () {

   // int + double
   cout << 2 + 2.5 << endl;

   // double + double
   cout << double(2) + 2.5 << endl;

   // double + double
   cout << 2.0 + 2.5 << endl;

   /*
   bool  => int (promotion)
   char  => int (promotion)
   short => int (promotion)
   int      type minimum
   long  => conversion
   long

   float
   double   type minimum
   long double

    */

   float reel = 1234567890;
   cout << setprecision(10) << fixed;
   cout << reel << endl;

   int entier = 10e14;
   cout << entier << endl;

   float pi = 3.141592653589793;
   cout << pi << endl;

   // structure de controle
   /*
   {
      int entier;
      cout << "votre valeur : ";
      cin  >> entier;
      cout << entier << endl;
   }
*/
   bool beau = true;
   float temp = 24.2;

   if (beau) {
      if (temp > 20.0) {
         cout << "piscine" << endl;
      }
      else {
         cout << "parc" << endl;
      }
   }
   else
      cout << "je reste à la maison";

   if (beau)
      cout << "beau" << endl;
   else
      cout << 12;

//   cout << (beau ? "beau" : cin << 12);

   int a = 17;
   int b = 34;
   int c = 55;
   // max entre a et b
   cout << "max : " << (a > b ? a : b) << endl;

   // max entre a, b et c
   cout << "max : " << (a > b ? a > c ? a : c :  b > c ? b : c) << endl;


   return EXIT_SUCCESS;
}
