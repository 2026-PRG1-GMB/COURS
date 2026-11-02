#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>

using namespace std;

// ----------------------------------------
void afficher (const array<int, 10>& tab) {
   cout << "[";
   for (size_t i = 0; i < 10; ++i) {
      if (i)
         cout << ", ";
      cout << tab[i];
   }
   cout << "]";
}

// ----------------------------------------
void afficher (const vector<int>& tab) {
   cout << "[";
   for (size_t i = 0; i < tab.size(); ++i) {
      if (i)
         cout << ", ";
      cout << tab[i];
   }
   cout << "]";
}

// ----------------------------------------
int minimum(const array<int, 10>& tab) {
   cout << "const" << endl;
   int min = tab[0];
   for (size_t i = 1; i < tab.size(); ++i) {
      if (tab[i] < min) {
         min = tab[i];
      }
   }
   return min;
}

int& minimum(array<int, 10>& tab) {
   cout << "ref" << endl;
   size_t i_min = 0;
   for (size_t i = 1; i < tab.size(); ++i) {
      if (tab[i] < tab[i_min]) {
         i_min = i;
      }
   }
   return tab[i_min];
}

// ----------------------------------------
void push(array<int, 10>& tab, size_t& index, int value) {
   if (index == tab.size()) {
      return;
   }
   tab[index] = value;
   index++;
}

// ----------------------------------------
void pop(array<int, 10>& tab, size_t& index) {
   if (index == 0)
      return;
   --index;
}

// ----------------------------------------
bool pop(const array<int, 10>& tab, size_t& index, int& valeur) {
   if (index == 0)
      return false;
   valeur = tab[index - 1];
}

// ----------------------------------------
int main () {
   array<int, 10> tab {1, 2, 3, 4, -3, 6, 7, 8, 9, 10};
   const array<int, 10> tab2 {1, 2, 3, 4, -3, 6, 7, 8, 9, 10};

   afficher(tab);
   cout << endl;
   cout << minimum(tab); cout << endl;
   minimum(tab) = 3;
   afficher(tab);

   cout << minimum(tab2); cout << endl;

   vector<int> tab3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.push_back(21);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.resize(15, 99);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.resize(21, 88);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.resize(12, 88);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

//   tab3.resize(0, 88);
   tab3.shrink_to_fit();
//   tab3.clear();
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.reserve(100);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   tab3.reserve(50);
   afficher(tab3); cout << endl;
   cout << "data     : " << tab3.data()     << endl;
   cout << "size     : " << tab3.size()     << endl;
   cout << "capacity : " << tab3.capacity() << endl;
   cout << endl;

   int sommet = tab3.back();
   tab3.pop_back();
   afficher(tab3); cout << endl;

   //   cout << tab3[15] << endl;
//   cout << tab3.at(15) << endl;

   array<int, 10> pile;
   size_t somme = 0;

   return EXIT_SUCCESS;
}
