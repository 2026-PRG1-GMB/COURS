#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main() {

   using type = signed int;
   // mon commentaire
   cout << "Taille : " << sizeof(type) << " bytes = "
        << (numeric_limits<type>::digits + numeric_limits<type>::is_signed)
        << " bits\nPlage de valeurs : "
        << static_cast<long long>(numeric_limits<type>::lowest())
        << " -> "
        << static_cast<unsigned long long>(numeric_limits<type>::max())
        << "\nSigné : " << boolalpha << numeric_limits<type>::is_signed << endl;
   return EXIT_SUCCESS;
}
