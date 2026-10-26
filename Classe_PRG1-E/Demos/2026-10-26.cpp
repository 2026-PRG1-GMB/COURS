#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;


// ----------------------------------------
void f(int& param) {
   cout << fixed << setprecision(4);

   if (param == 0)
      return;

   if (not (param == 0))
      cout << param << endl;
}

// ----------------------------------------
char& ref_str(string& param, size_t pos) {
   return param.at(pos);
}

int fibo(int n) {
   if (n <= 1)
      return 1;
   return n * fibo(n - 1);
}

// ----------------------------------------
int main () {
   int valeur = 2;
   float reel = 3.1f;
//   f(reel);

   string str = "coucou";
   str.at(3) = 'G';
   cout << str.at(3) << endl;
   cout << str << endl;

   //
   cout << ref_str(str, 3) << endl;
   ref_str(str, 3) = 'G';
   cout << str << endl;

   cout << fibo(3) << endl;
   cout << fibo(1000000) << endl;
   return EXIT_SUCCESS;
}
