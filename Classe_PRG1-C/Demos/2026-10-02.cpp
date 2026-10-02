#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main () {

   int i=2;
   bool trouve = true;

   if (trouve)
      cout << i << endl;

   int jour = 7;

   if (true) {
      cout << jour << endl;
      cout << jour << endl;
   }

   switch (jour) {
      case 1: cout << "lundi"          << endl; break;
      case 2: cout << "mardi"          << endl; break;
      case 3: cout << "mercredi"       << endl; break;
      case 4: cout << "jeudi"          << endl; break;
      case 5: cout << "vendredi"       << endl; break;
      case 6: cout << "samedi"         << endl; break;
      case 7: cout << "dimanche"       << endl; break;
      default : cout << "??";
   }

   switch (jour) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5: cout << "semaine"       << endl; break;
      case 6:
      case 7: cout << "week-end"       << endl; break;
      default : cout << "??";
   }

   switch (jour) {
      case 1 ... 5: cout << "semaine"       << endl; break;
      case 6:
      case 7: cout << "week-end"       << endl; break;
      default : cout << "??";
   }

   char car = '5';
   int valeur;
   if (car >= '0' and car <= '9') {
      valeur = car -'0';
   } else if (car >= 'a' and car <= 'f')
      valeur = car - 'a' + 10;


   switch (car) {
      case 'A': valeur = 10; break;
      case 'B': valeur = 11; break;
      case 'C': valeur = 12; break;
      case 'D': valeur = 13; break;
      case 'E': valeur = 14; break;
      case 'F': valeur = 15; break;
   }

   for (char car = 'a'; car < 'z'; car++) {
      cout << car;
   }
   cout << endl;

   string str = "abcdef";
   for (size_t i = 0; i <= str.length(); ++i) {
      cout << str[i]; // << str.at(i);
   }
   cout << endl;

   for (char& c : str) {
      cout << c;
      c = toupper(c);
      cout << c;
   }
   cout << endl;
   cout << str << endl;
/*
   cout << "saisie : ";
   if (cin >> valeur) {
      cout << valeur;
   }
*/
   cout << (int)'a' << toupper('a') << endl;
   cout << (int)' ' << toupper(' ') << endl;

   {
      int a = 12;
      int b = 15;
      int c;

      if (a > b)
         c = a;
      else
         c = b;

      //  question ? vrai : faux
      c = a > b ? a : b;

      int i, j, k;
      i = j = k = 3;
      4;
   }

   return EXIT_SUCCESS;
}
