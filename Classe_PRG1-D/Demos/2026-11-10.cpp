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
      vector<int> tab {1, 2, 3, 4, 5, 6, 7, 8, 9};
//      cout << tab[12]      << endl;
//      cout << tab.at(12) << endl;
      afficher(tab, 12);
   }
   catch (out_of_range& e) {
      cout << "out_of_range: " << e.what() << endl;
   }
   catch (logic_error& e) {
      cout << "logic_error: " << e.what() << endl;
   }
   catch (exception& e) {
      cout << "exception: " << e.what() << endl;
   }

   return EXIT_SUCCESS;
}
