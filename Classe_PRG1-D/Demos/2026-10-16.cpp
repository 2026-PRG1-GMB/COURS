#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ------------------------------------------------------------
void echanger_ref(int& lhs, int& rhs) {
   int temp = lhs;
   lhs = rhs;
   rhs = temp;
}

// ------------------------------------------------------------
void echanger_adr(int* adr_lhs, int* adr_rhs) {
   int temp = *adr_lhs;
   *adr_lhs = *adr_rhs;
   *adr_rhs = temp;
}

// ------------------------------------------------------------
void afficher(const int  valeur) { cout << valeur; }
void afficher(const int* valeur) { cout << valeur; }
void afficher(const string& str) { cout << str; }

void f(int n) {
   cout << n;
   if (n >= 1)
      f(n-1);
   cout << n;
}

int main () {

   f (5);

   cout << endl;

   afficher(3.2);

   //                  0123
    string str = "toto";
   afficher(str);
   afficher("toto"); cout << endl;

   char car = str.at(1);   cout << car << endl;
   str.at(1) = 'O';
   cout << str << endl;




   return EXIT_SUCCESS;
}
