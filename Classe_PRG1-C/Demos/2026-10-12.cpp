#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ----------------------------------------
// par référence
void echanger_ref(int& lhs, int& rhs) {
   int tmp = lhs;
   lhs = rhs;
   rhs = tmp;
}

// ----------------------------------------
// par adresse / pointeur
void echanger_adr(int* adr_lhs, int* adr_rhs) {
   int tmp = *adr_lhs;
   *adr_lhs = *adr_rhs;
   *adr_rhs = tmp;
}

// ----------------------------------------
int main () {

   int variable = 2;
   cout << "valeur   var   : " <<  variable << endl;
   cout << "adresse  var   : " << &variable << endl;

   int init_a_faire;    // ????
   //    int& ref2;     // pas possible, initialisation obligatoire

   int* ptr = &variable;
   cout << "valeur   ptr   : " <<  ptr << endl;
   cout << "adresse  ptr   : " << &ptr << endl;
   cout << "valeur pointee : " << *ptr << endl;

   *ptr = 3;
   cout << "valeur pointee : " << *ptr << endl;

   int* non_initialise;

   const int cste1 = 12;
   const int cste2 = 89;
   int var1 = 43;
   int var2 = 54;
   float reel = 3.14;

   int* ptr_var        = &var1;
   const int* ptr_cste = &var1;
   ptr_var = &var2;

   // équivalent d'une référence avec des pointeurs
   int* const reference            = &var1;
   const int* const reference_cste = &var1;


   // const int* ptr_mixte = &reel;

   const int* const cst_ptr_cste = &var2;

   int* const ptr_non_initialise = &var1;

   const int* const cst_ptr_non_initialise = &cste1;
   int* ptr3 = &var1;

   cout << "avec des fonctions (références)" << endl;
   cout << "var1 : " << var1 << " var2 : " << var2 << endl;
   echanger_ref(var1, var2);
   cout << "var1 : " << var1 << " var2 : " << var2 << endl;
   cout << endl;

   cout << "avec des fonction (adresses)" << endl;
   cout << "var1 : " << var1 << " var2 : " << var2 << endl;
   echanger_adr(&var1, &var2);
   cout << "var1 : " << var1 << " var2 : " << var2 << endl;

   cout << "t'es ou ???" << endl;
   int* moche = nullptr;
   if (moche /*!= nullptr*/) {
      cout <<  moche << endl;
      cout << *moche << endl;
      *moche = 3;
   }


   return EXIT_SUCCESS;
}