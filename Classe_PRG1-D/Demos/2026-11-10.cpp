#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>

using namespace std;

void afficher(const vector<int> tab, size_t pos) {
   if (pos >= tab.size())
      throw out_of_range ("Out of range dans afficher");
   cout << tab[pos] << endl;
}

int main () {
   try {
      try {
         vector<int> tab {1, 2, 3, 4, 5, 6, 7, 8, 9};
         //      cout << tab[12]      << endl;
         //      cout << tab.at(12) << endl;
         afficher(tab, 12);
      }
      catch (exception& e) {
         cout << "les fichiers sont fermés" << endl;
         throw;
      }
   }
   catch (exception& e) {
      cout << "traitement final" << endl;
   }

   return EXIT_SUCCESS;
}
