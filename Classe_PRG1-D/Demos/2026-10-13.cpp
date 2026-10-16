#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ------------------------------------------------------------
void echanger_ref(int& lhs, int& rhs) {
   int temp = lhs;
   lhs = rhs;
   rhs = temp;
}

// ------------------------------------------------------------
void echanger_adr(int* adr_lhs, int* adr_rhs) {
   int temp = *adr_lhs;
   *adr_lhs = *adr_rhs;
   *adr_rhs = temp;
}

// ------------------------------------------------------------
void afficher(const int& valeur) { cout << valeur; }
void afficher(const int* valeur) { cout << valeur; }

int main () {
   {
      //      int& pas_possible;
      float valeur = 2.f;
      float reel = 7.2f;
      float& ref = valeur;
      ref = reel;
      const int& ref_int = reel;
   }

   {
      int entier = 2;
      cout << "entier         : " <<  entier << endl;
      cout << "adresse entier : " << &entier << endl;

      int* adr = &entier;
      *adr = 17;
      cout << "contenu adr    : " <<   adr << endl;
      cout << "valeur pointée : " <<  *adr << endl;
      cout << "adresse de adr : " <<  &adr << endl;
   }

   {
      int entier_a_initialiser;
      int* ptr_a_associer;

      int int_var = 1;
      const int int_cste = 2;
      float float_var = 3.f;
      const float float_cste = 4.;

      // acces    pointeur   valeur pointee
      const int* const ptr = &int_cste;
      //      int* moche = &float_cste;
      const int* ptr_moche = &int_cste;


   }

   {
      int a = 3;
      int b = 5;
      cout << "a=" << a << ", b=" << b << endl;
      echanger_ref(a, b);
      cout << "a=" << a << ", b=" << b << endl;
      cout << endl;
      cout << "a=" << a << ", b=" << b << endl;
      echanger_adr(&a, &b);
      cout << "a=" << a << ", b=" << b << endl;
      cout << "BRAVO" << endl;
   }

   {
      int  entier = 3;
      float reel  = 3.f;
      afficher(entier);
      afficher(reel);

      afficher(&entier);
      //      afficher(&reel);
   }
   return EXIT_SUCCESS;
}
