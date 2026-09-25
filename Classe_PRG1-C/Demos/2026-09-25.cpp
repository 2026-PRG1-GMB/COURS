#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main () {

   int i = 12;
   bool a = false,
        b = true;

   cout << i << endl;
   cout << (a and i++) << endl;
   //       a en bool  and i en bool
   cout << i << endl;

   // pointeur
   int* ptr = &i;    // initialisation
   ptr = &i;         // affectation

   // reference
   int& ref = i;     // initialisation obligatoirement

   cout << "i   = " <<   i << endl;
   cout << "ref = " << ref << endl;

   i++;
   ref++;

   cout << "i   = " <<   i << endl;
   cout << "ref = " << ref << endl;

   double reel = 3.14;
   const int cste = 21;
   const int& ref_ro = i;
   //int& ref_cste = reel; // droit RW sur un RO => pas possible

   int signe = -1;
   cout << signe << "  " << (unsigned)signe << endl;

   long grand = 1;      // long int <= int
   int nonsigne = 1U;

   cout << fixed << setprecision(20);
   cout << 1.0/2.0 << endl;
   cout << 1.0/3.0 << endl;
   cout << 1.0f/3.0f << endl;

   return EXIT_SUCCESS;
}
