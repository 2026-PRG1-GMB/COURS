#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   int a =  -1;
   int b = 20;
   cout << (++a and b++) << endl;
   cout << "a : " << a << endl;
   cout << "b : " << b << endl;

   int entier = -7;
   int&ref = entier;


   cout <<           entier << endl;
   cout << (unsigned)entier << endl;

   cout << setprecision(20) << fixed << entier << endl;
   cout << 1. / 3. << endl;
   cout << 1.f / 3.f << endl;
   cout << 123456789.12345f << endl;

   unsigned int compte = 0;
   cout << --compte << endl;

   float valeur = 123.456;
   cout << valeur << endl;

   entier = static_cast<int>(3.14);
   cout << entier << endl;

   return EXIT_SUCCESS;
}
