#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   float temp = 24.5;
   bool beau = true;

   if (beau) {
      if (temp > 24) {
         cout << temp << " is greater than 24." << endl;
      } else if (true) {
         cout << "je vais au parc" << endl;
      }
   } else {
      cout << "ja vais au cinema" << endl;
   }

   /*
   int valeur;
   cout << "valeur nulle : ";
   cin  >> valeur;

   if ( (cin) and valeur == 0) {
      cout << "valeur : " << valeur << endl;
      cout << "merci";
   }
   cout << "valeur lue : " << valeur << endl;

   cout << "valeur reelle : ";
   float reel;
   cin >> reel;

   cout << "teminé" << reel << endl;
*/

   int nbre = 2;
   cout << nbre << " personne";
   if (nbre >= 2)
      cout << "s" << endl;
   cout << endl;

   cout << nbre << " personne" << (  nbre >= 2 ? 's' : ' '  ) << endl;

   int a = 3;
   int b = 5;
   int c = 4;
   cout << "max(a, b)    = " << ( a > b ? a : b ) << endl;
   cout << "max(a, b, c) = " << ( a > b ?
                   /* a > b  */  (a > c ? a : c) :
                   /* a <= b */  (b > c ? b : c) ) << endl;

   int max = a > b ? (a > c ? a : c) : (b > c ? b : c);

//   cout << ( true ? 'a' : "oui") << endl;
   double resultat = a > b ? a : b;

   int jour;
   cout << "jour : ";
   cin >> jour;

   switch (jour) {
      case 1  : cout << "lundi"      << endl; break;
      case 2  : cout << "mardi"      << endl; break;
      case 3  : cout << "mercredi"   << endl; break;
      case 4  : cout << "jeudi"      << endl; break;
      case 5  : cout << "vendredi"   << endl; break;
      case 6  : cout << "samedi"     << endl; break;
      case 7  : cout << "dimanche"   << endl; break;
      default : cout << "??"         << endl;
   }

   switch (jour) {
      case 1  :
      case 2  :
      case 3  :
      case 4  :
      case 5  : cout << "semaine"  << endl; break;
      case 6  :
      case 7  : cout << "week-end"  << endl; break;
      default : cout << "??"        << endl;
   }

   switch (jour) {
      case 1 ... 5  : cout << "semaine"  << endl; break;
      case 6  :
      case 7  : cout << "week-end"  << endl;
                break;
      default : cout << "??"        << endl;
   }

   return EXIT_SUCCESS;
}
