#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>

using namespace std;

int main() {

   cout << "sizeof(bool)          : " << sizeof(bool         ) * 8 << endl;
   cout << "sizeof(char)          : " << sizeof(char         ) * 8 << endl;
   cout << "sizeof(short     int) : " << sizeof(short     int) * 8 << endl;
   cout << "sizeof(          int) : " << sizeof(          int) * 8 << endl;
   cout << "sizeof(long      int) : " << sizeof(long      int) * 8 << endl;
   cout << "sizeof(long long int) : " << sizeof(long long int) * 8 << endl;

   cout << "numeric_limits<char         >::lowest()    " << (int)numeric_limits<char         >::lowest()     << endl;
   cout << "numeric_limits<short     int>::lowest()    " << numeric_limits<short     int>::lowest()     << endl;
   cout << "numeric_limits<          int>::lowest()    " << numeric_limits<          int>::lowest()     << endl;
   cout << "numeric_limits<long      int>::lowest()    " << numeric_limits<long      int>::lowest()     << endl;
   cout << "numeric_limits<long long int>::lowest()    " << numeric_limits<long long int>::lowest()     << endl;

   short int court = 62436587610376;
   long int grand = 3L;
   cout << court << endl;

   double reel = 1/5.;
   cout << setprecision(20) << fixed << reel << endl;
   cout << reel << endl;
   cout << 0.2 << endl;
   cout << 1 / 3. << endl;
   cout << 0.33333333 << endl;

   cout << ( (double)2 + 4.5) << endl;
   cout << (    2      + 4.5) << endl;

   char car = 2;
   cout << (car + 3) << endl; // promotion
   cout << (2.1 + 3) << endl; // conversion

   return EXIT_SUCCESS;
}
