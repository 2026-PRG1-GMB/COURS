#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>

using namespace std;

void afficher(const vector<int>& a) {
   cout << "[";
   for (size_t i = 0; i < a.size(); ++i) {
      if (i) cout << ", ";
      cout << a[i];
   }
   cout << "]";
}

#define LANGUAGE  ENGLISH
#define VERSION   3.4

int main () {

   const unsigned int cste = 12;
   cout << cste << endl;
   cout << 3 << endl;

   return EXIT_SUCCESS;
}
