#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// ----------------------------------------
// echange par référence
void echange_ref(int& lhs, int& rhs) {
   int tmp = lhs;
   lhs = rhs;
   rhs = tmp;
}

// ----------------------------------------
// echange par adresse
void echange_adr(int* adr_lhs, int* adr_rhs) {
   int tmp = *adr_lhs;
   *adr_lhs = *adr_rhs;
   *adr_rhs = tmp;
}

int main () {

   // références
   {
   const int    cste_int = 45;
   int            entier = 12;
   const float cste_reel = 45.1f;
   float       var_reel  = 12.2f;

//    int& ref1 = reel;
   const int& ref_var = var_reel;
//      ref_var => entier;
   }

   // adresse / pointeurs
   {
      int entier     = 12;
      int variable   = 21;
      const int cste = 45;
      float reel_var = 12.2f;
      const float reel_cste = 3.21f;

      cout << "entier            : " <<  entier << endl;
      cout << "adr de entier     : " << &entier << endl;

      int* adresse = &entier;
      cout << "adresse           : " <<  adresse << endl;
      cout << "adr de adresse    : " << &adresse << endl;
      cout << "valeur pointee    : " << *adresse << endl;

      adresse = &variable;
                                          // pointeur access variable
      int* ptr1 = &entier;                //    RW       RW    RW
      const int* ptr2 = &entier;          //    RW       RO    RW
      int* const ptr3 = &entier;          //    RO       RW    RW
      const int* const ptr4 = &entier;    //    RO       RO    RW
      const int* const ptr5 = &cste;      //    RO       RO    RO

      // int* acces_RW_cste = &cste;
      int* acces_RW_var = &variable;
      const int* acces_RO_var = &variable;
      const int* acces_RO_cste = &cste;

//      int* acces_RW_var_reel = &reel_cste;
//      int* acces_RW_var_reel = &reel_var;
//      const int* acces_RW_cste_reel = &reel_cste;
//      const int* acces_RW_cste_reel = &reel_var;
   }

   // échange
   {
      int a = 3;
      int b = 5;

      cout << "par référence" << endl;
      cout << "a " << a << " b " << b << endl;
      echange_ref(a, b);
      cout << "a " << a << " b " << b << endl;

      cout << "par adresse" << endl;
      cout << "a " << a << " b " << b << endl;
      echange_adr(&a, &b);
      cout << "a " << a << " b " << b << endl;
   }

   // nullptr
   int* ptr =nullptr;

   if (ptr != nullptr) {
      cout << ptr << endl;
      *ptr = 2;
   }

   {
      int variable = 2;
      // référence
      // - alias => objet
      // - initialisation obligatoire
      // - pas possible de changer d'affectation
      int* const ptr1 = &variable;        // référence non constante
      const int* const ptr2 = &variable;  // référence constante
   }

   return EXIT_SUCCESS;
}
