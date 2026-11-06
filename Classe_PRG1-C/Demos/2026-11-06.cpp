#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>

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

   vector<int> tab {0, 1, 2, 3, 4, 5, 6, 7, 8};

   tab.reserve(10);
   afficher(tab); cout << endl;
   cout << "data     : " << tab.data()      << endl;
   cout << "size     : " << tab.size()      << endl;
   cout << "capacité : " << tab.capacity()  << endl;

   tab.push_back(10);
   cout << "data     : " << tab.data()      << endl;
   cout << "size     : " << tab.size()      << endl;
   cout << "capacité : " << tab.capacity()  << endl;

   tab.push_back(10);
   cout << "data     : " << tab.data()      << endl;
   cout << "size     : " << tab.size()      << endl;
   cout << "capacité : " << tab.capacity()  << endl;

   return EXIT_SUCCESS;
}
