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

/*
int& moche() {
   int interne = 12;
   return interne;
}

int* moche1() {
   int interne = 12;
   return &interne;
}
*/

// ----------------------------------------
int main () {
   try {
      throw out_of_range("oops");
      cout << "coucou" << endl;
   }
   catch (exception e) {
      cout << e.what();
      throw;
   }

   return EXIT_SUCCESS;
}
