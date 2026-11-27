#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
#include <array>
#include <numbers>
#include <vector>
#include <string>

using namespace std;

struct Date {
   int jour;
   int mois;
   int annee;
};

void f(const Date& date ) {
   return;
}

int saisie(const string& message, int min, int max) {

   int valeur;
   bool erreur;
   do {
      cout << message;
      cin >> valeur;
      erreur = cin.fail() or valeur < min or valeur > max;

      if (erreur) {
         cout << "tu sais lire ???" << endl;
         cin.clear();
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (erreur);

   return valeur;
}

int main () {

   Date date;

   int valeur = saisie("saisie : ", -5, 10);
   cout << "saisie : " << valeur << endl;

   return EXIT_SUCCESS;
}
