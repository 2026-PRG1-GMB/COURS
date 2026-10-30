#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <string>

using namespace std;

int main () {

   int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   cout << "&tab    : " <<  &tab   << endl;
   cout << "tab[0]  : " <<  tab[0] << endl;
   cout << "&tab[0] : " << &tab[0] << endl;
   cout << "tab[1]  : " <<  tab[1] << endl;
   cout << "&tab[1] : " << &tab[1] << endl;

   cout << "     tab  : " <<   tab     << endl;
   cout << "    *tab  : " <<   *tab     << endl;

   cout << " (tab+1)  : " <<   (tab+1) << endl;
   cout << "*(tab+1)  : " <<  *(tab+1) << endl;

   int mon_entier;
   cout << mon_entier << endl;

   array<int,  10> a {1, 2, 3, 4, 5, 6, 7, 8, 9};
   array<bool, 10> b {};
   cout << endl;

   // aficher au format [1, 2, 3, ..., 9]
   cout << "[";
   for (size_t i = 0; i < 10; ++i) {
      if (i > 0) cout << ", ";
      cout << a[i];
   }
   cout << "]";

   return EXIT_SUCCESS;
}
