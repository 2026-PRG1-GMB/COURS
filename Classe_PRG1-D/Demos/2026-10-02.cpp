#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   for (char car = 'a'; car <= 'z'; car++) {
      cout << car << " ";
   }
   cout << endl;

   string str = "hello";
   for (size_t i=0; i< str.length(); ++i) {
      cout << str[i];
      cout << str.at(i) << " ";
   }
   cout << str << endl;

   for (char& c : str) {
      c = toupper(c);
      cout << c;
   }
   cout << endl;
   cout << str << endl;

   char car = 'a';
   if (car >= 'a' && car <= 'z') {
      car -= 'a' - 'A';
   }

   // un switch ne fonctionne pas avec
   // autre chose que des types énumérables
   /*
float test = 2.1f;
   switch (test) {

   }
*/

   int valeur;
   do {
      cout << "saisie [1 - 10]: ";
      cin >> valeur;
   } while (valeur < 1 || valeur > 10);
   cout << valeur;

   valeur = -200;
   while (valeur < 1 || valeur > 10) {
      cout << "saisie [1 - 10]: ";
      cin >> valeur;
   }
   cout << valeur;

   return EXIT_SUCCESS;
}
