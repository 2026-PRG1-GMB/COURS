#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ----------------------------------------
void afficher(const string& str) {
   cout << str;
}

// ----------------------------------------
char& car_pos(string& str, size_t pos) {
   return str.at(pos);
}

int& plus_la() {
   int a = 5;
   return a;
}

// ----------------------------------------
int main () {
    string message = "coucou";
   afficher(message);        cout << endl;
   afficher("coucou");  cout << endl;

   cout << message.at(3);
   message.at(3) = 'C';

   cout << endl;
   cout << car_pos("coucou", 3);

   return EXIT_SUCCESS;
}