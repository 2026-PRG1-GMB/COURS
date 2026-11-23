#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
#include <array>
#include <numbers>
#include <vector>
#include <string>

using namespace std;

//@param : valeur positive
int saisir(int min, int max) {
   int valeur;

   do {
      try {
         cin >> valeur;
         if (valeur < min || valeur > max) {
            throw invalid_argument("invalid");
         }
         return valeur;
      }
      catch (invalid_argument e) {
         cout << e.what() << endl;
      }
   } while (true);
}

int main () {

   const int min = 12;
   const int max = 30;
   int valeur = saisir(min, max);

   return EXIT_SUCCESS;
}
