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

   for (int a=0; a<10; a++)
      cout << a << endl;

   // !=
   bool b = !4;   // => false
   bool c = !0;   // => true

   cout << (!4) << endl;

   char car     = 'a';
   cout << car << (int)car << endl;

   return EXIT_SUCCESS;
}
