#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>

using namespace std;



// ----------------------------------------
int main () {

   string text;
   cout << "ton nom :";
   getline(cin, text);
   cout << text << endl;

   int x, y;


   cout << "vider le buffer ... " << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "buffer vidé " << endl;

   cout << "entrer des valeurs" << endl;
   cin >> x >> y;
   cout << x << " " << y;
   cout << "fin de saisie" << endl;

   cout << "vider le buffer ... " << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "buffer vidé " << endl;

   cout << "fin de programme" << endl;
   return EXIT_SUCCESS;
}
