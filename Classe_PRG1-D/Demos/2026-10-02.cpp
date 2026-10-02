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

   return EXIT_SUCCESS;
}
