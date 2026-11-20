#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>

using namespace std;
// ----------------------------------------
/*
int* moche1() {
   int local = 12;
   return &local;
}

// ----------------------------------------
int& moche2() {
   int local = 12;
   return local;
}
*/
// ----------------------------------------
int main () {
   array<int, 10> tab {1, 2, 3, 4, -3, 6, 7, 8, 9, 10};
   const array<int, 10> tab2 {1, 2, 3, 4, -3, 6, 7, 8, 9, 10};

   /*
   try {
      string str {"Hello World!"};
      cout << str.at(32) << endl;
   }
   catch (exception& e) {
      cout << e.what() << endl;
   }
   //   cout << tab3[15] << endl;
//   cout << tab3.at(15) << endl;
*/

   try {
      string str {"Hello World!"};
      throw out_of_range("Oops");
      cout << str << endl;
   }
   catch (exception& e) {
      cout << "exception" << endl;
      cout << e.what() << endl;
   }
   catch (bad_alloc& e) {
      cout << e.what() << endl;
   }
   catch (out_of_range& e) {
      cout << "out_of_range" << endl;
      cout << e.what() << endl;
   }
   catch (logic_error& e) {
      cout << "logic_error" << endl;
      cout << e.what() << endl;
   }

   array<int, 10> pile;
   size_t somme = 0;

   return EXIT_SUCCESS;
}
