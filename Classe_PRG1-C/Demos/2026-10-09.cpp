#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void echanger(int& a, int& b) {
   cout << "dans echanger : " << a << " " << b << endl;
   int tmp = a;
   a = b;
   b = tmp;
   cout << "dans echanger : " << a << " " << b << endl;
}

void afficher(const int& param) {
   cout << param << endl;
}

void afficher(const string& param) {
   cout << param << endl;
}


/*
void afficher(const double& param) {
   cout << param << endl;
}
*/

bool affecter(int a, int& b) {
   if (a > 0) {
      b = a;
      return true;
   }
   return false;
}

int main () {
   int valeur = 3;
   afficher(3);
   afficher(3.2);
   afficher(valeur);
   cout << endl;

   const string msg = "hello";
   afficher(msg);
   afficher("hello");

   int a = 3;
   int b = 5;

   cout << "dans main     : " << a << " " << b << endl;
   echanger(a, b);
   cout << "dans main     : " << a << " " << b << endl;

   affecter(a, b);

   return EXIT_SUCCESS;
}