#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>

using namespace std;

// ----------------------------------------
int minimum (const array<int, 10>& tab) {
   int min = tab[0];
   for (int i = 1; i < tab.size(); ++i) {
      if (tab[i] < min)
         min = tab[i];
   }
   return min;
}

// ----------------------------------------
int& minimum (array<int, 10>& tab) {
   int& min = tab[0];
   for (int i = 1; i < tab.size(); ++i) {
      if (tab[i] < min)
         min = tab[i];
   }
   return min;
}

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

   array<int, 10> tab {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   afficher(tab); cout << endl;
   cout << minimum(tab) << endl;
   minimum(tab) += 2;
   afficher(tab); cout << endl;

   array<int, 3> tab2 {0, 1, 2};
   array<int, 2> tab3 {0, 1};

   vector<int> tab4 {0, 1};
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;

   tab4.reserve(10);
   afficher(tab4); cout << endl;
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;

   tab4.resize(6);
   afficher(tab4); cout << endl;
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;

   tab4.resize(15);
   afficher(tab4); cout << endl;
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;

   tab4.resize(7);
   tab4 = {1, 2, 3, 4, 5, 6, 7};
   afficher(tab4); cout << endl;
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;
   cout << tab4[5] << endl;
   cout << tab4[8] << endl;
   // cout << tab4.at(5) << endl;
   // cout << tab4.at(8) << endl;

   tab4.shrink_to_fit();
   afficher(tab4); cout << endl;
   cout << "data     : " << tab4.data()      << endl;
   cout << "size     : " << tab4.size()      << endl;
   cout << "capacité : " << tab4.capacity()  << endl;

   tab4.push_back(10);
   cout << tab4.back() << endl;
   tab4.pop_back();
   afficher(tab4); cout << endl;

   return EXIT_SUCCESS;
}
