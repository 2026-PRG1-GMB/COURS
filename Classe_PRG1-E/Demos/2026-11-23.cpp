#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

int main () {

   string nom;
   cout << "votre nom : ";
   getline(cin, nom);
   cout << "votre nom : " << nom << endl;

   return EXIT_SUCCESS;
}
