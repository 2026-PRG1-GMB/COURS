#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main () {

   const int ma_constante = 17;
   //ma_constante = ma_constante * 2;


   int entier = 17;

   cout << "entier  : " <<  entier << endl;
   cout << "adresse : " << &entier << endl;

   int* ptr = &entier;
   cout << "contenu : " <<  ptr << endl;
   cout << "adresse : " << &ptr << endl;

   cout << "reste de 8 / 3 = " << 8 % 3 << endl;

   int i = 3;
   cout << ++i << " => " <<   i << endl;
   cout << i++ << " => " <<   i << endl;

   for (int a=0; i<10; i++)
      cout << a << endl;

   return EXIT_SUCCESS;
}
