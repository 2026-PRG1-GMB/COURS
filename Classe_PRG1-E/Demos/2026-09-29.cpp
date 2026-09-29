#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
   int valeur = -1;
   int jour = 1;
   switch (jour) {
      case 0:  cout << "negatif"      << endl; break;
      case 1:  cout << "lundi"      << endl; break;
      case 'a':  cout << "mardi"      << endl; break;
      case 3:  cout << "mercredi"   << endl; break;
      case 4:  cout << "jeudi"      << endl; break;
      case 5:  cout << "vendredi"   << endl; break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10: cout << "coucou" << endl; break;

      case 16 ... 20 :  cout << "vendredi"   << endl; break;

      default: cout << "week-end"   << endl; break;
//      case 6:  cout << "samedi"     << endl; break;
//      case 7:  cout << "dimanche"   << endl; break;
   }

   /*
   cout << "iteration depuis : ";
   int i;
   cin >> i;
   for (  ; i<10; )
      cout << i++ << endl;
*/
   string str = "hello tout le monde";
   for (char& c : str) {
      c = toupper(c);
      cout << c;
   }
   cout << endl;

   cout << str << endl;

   int n   = 1729;
   int sum = 0;
   while (n > 0) {
      int digit = n % 10;
      sum += digit;
      n /= 10;
   }
   cout << sum << endl;

   for (int i = 0; i < 10; i++) {
      int j = i/3;
      cout << ++i and j<10;
   }

   return EXIT_SUCCESS;
}
