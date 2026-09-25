#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   const int ma_constante = 17;
   int entier = 17;

   cout << "entier  : " <<  entier << endl;
   cout << "adresse : " << &entier << endl;

   int* ptr = &entier;
   cout << "contenu : " <<  ptr << endl;
   cout << "adresse : " << &ptr << endl;

   char  car    = 'a';
         entier  = 'a';
   cout << "car    : " << car     << endl;
   cout << "entier : " << entier  << endl;
   cout << "car * 2: " << car * 23 << endl;

   cout << char(car + 1) << endl;

   int valeur = 27;
   const int& ref = valeur;
   cout << "valeur : " << valeur << endl;
   cout << "ref    : " << ref << endl;
   cout << "valeur : " << valeur << endl;
   cout << "ref    : " << ref << endl;

   cout << "sizeof (bool)         : " << 8 * sizeof (bool)           << endl;
   cout << "sizeof (char)         : " << 8 * sizeof (char)         << endl;
   cout << "sizeof (short)        : " << 8 * sizeof (short)         << endl;
   cout << "sizeof (int)          : " << 8 * sizeof (int)           << endl;
   cout << "sizeof (long int)     : " << 8 * sizeof (long int)      << endl;
   cout << "sizeof (long long int): " << 8 * sizeof (long long int) << endl;

   cout << setprecision(20);
   cout << (1. / 2.) << endl;
   cout << (1. / 3.) << endl;
   cout << (1. / 5.) << endl;

   cout << (1 + 3.) << endl;

   return EXIT_SUCCESS;
}
