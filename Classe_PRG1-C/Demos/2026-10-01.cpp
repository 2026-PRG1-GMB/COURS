#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <numeric>

using namespace std;

int main () {

   cout << "min      : " << numeric_limits<float>::min() << endl;
   cout << "max      : " << numeric_limits<float>::max() << endl;
   cout << "lowest   : " << numeric_limits<float>::lowest() << endl;
   cout << "epsilon(): " << numeric_limits<float>::epsilon() << endl;

   cout << "sizeof   : " << sizeof(float) << endl;


   cout << setprecision(20) << fixed;
   cout << 100.0f/3.f << endl;

   cout << "sizeof int           : " << 8 * sizeof(int)         << endl;
   cout << "sizeof long          : " << 8 * sizeof(long)        << endl;
   cout << "sizeof long long     : " << 8 * sizeof(long long)   << endl;

   float petit = 1e-15;
   float grand = 1e+15;
   cout << boolalpha << ( grand == grand - petit) << endl;
   cout << (float)1'234'567'890 << endl;
   return EXIT_SUCCESS;
}
