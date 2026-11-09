#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>

using namespace std;

// ----------------------------------------
void afficher(const array<int, 10>& tab) {
   cout << "[";
   for (size_t i = 0; i < tab.size(); i++) {
      if (i > 0)
         cout << ", ";
      cout << tab.at(i);
   }
   cout << "]";
}

// ----------------------------------------
void afficher(const vector<int>& tab) {
   cout << "[";
   for (size_t i = 0; i < tab.size(); i++) {
      if (i > 0)
         cout << ", ";
      cout << tab.at(i);
   }
   cout << "]";
}

// ----------------------------------------
int main () {

   string str1 = "Bonjour";"
   string str2 = str1;

   return EXIT_SUCCESS;
}
