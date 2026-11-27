#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
#include <array>
#include <numbers>
#include <vector>
#include <string>

using namespace std;

int main () {

   string str = "bonjour";
   cout << str << endl;

   str.at(3) = '\0';
   cout << str << endl;
   cout << str.c_str() << endl;

   cout << "avant cin.ignore ..." << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "apres cin.ignore ..." << endl;

   int x, y;
   cout << "saisie : ";
   cin >> x >> y;
   cout << x << " " << y << endl;
   cout << "avant cin.ignore ..." << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "apres cin.ignore ..." << endl;


   return EXIT_SUCCESS;
}
