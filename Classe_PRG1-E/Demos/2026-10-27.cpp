#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>

using namespace std;

// ----------------------------------------
int main () {

   array<int, 10> tab {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   for (size_t i = 0; i < 10; ++i) {
      cout << tab[i] << " ";
   }

   cout << endl;
   // afficher les valeurs au format [v0, v1, .., vn]
   cout << "[";
   for (size_t i = 0; i < 10; ++i) {
      if (i)
         cout << ", ";
      cout << tab[i];
   }
   cout << "]";

   cout << endl;
   int pos = 0;
   cout << "[";
   for (int v : tab) {
      if (pos++)
         cout << ", ";
      cout << v;
   }
   cout << "]";

   const array<string, 4> strs {"one", "two", "three", "four",};
   for (const string& s: strs) {
      cout << s << " ";
   }

   cout << endl;
   array<int, 10> tab1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   array<int, 9> tab2 {1, 2, 3, 4, 5, 6, 7, 8};
   cout << boolalpha << " " << (tab1 > tab2) << endl;
   return EXIT_SUCCESS;
}
