#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <vector>
#include <string>

using namespace std;

void afficher(const vector<int>& a) {
   cout << "[";
   for (size_t i = 0; i < a.size(); ++i) {
      if (i) cout << ", ";
      cout << a[i];
   }
   cout << "]";
}

int main () {

   vector<int> v {1};
   v.reserve(10);
   v.push_back(2);
   cout << "data           : " << v.data() << endl;
   cout << "size           : " << v.size() << endl;
   cout << "capacity       : " << v.capacity() << endl;
   v.push_back(3);
   v.push_back(4);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   cout << "data           : " << v.data() << endl;
   cout << "size           : " << v.size() << endl;
   cout << "capacity       : " << v.capacity() << endl;
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   cout << "data           : " << v.data() << endl;
   cout << "size           : " << v.size() << endl;
   cout << "capacity       : " << v.capacity() << endl;
   v.shrink_to_fit();
   cout << "data           : " << v.data() << endl;
   cout << "size           : " << v.size() << endl;
   cout << "capacity       : " << v.capacity() << endl;

   cout << endl;
   vector<int> v2;
   v2.reserve(10);
   for (int i = 0; i < 10; ++i) {
      v2.push_back(i);
      cout << v2.capacity() << endl;
   }

   cout << "v  : size           : " << v.size() << endl;
   cout << "v  : capacity       : " << v.capacity() << endl;
   cout << "v2 : size           : " << v2.size() << endl;
   cout << "v2 : capacity       : " << v2.capacity() << endl;

   v2 = v;
   cout << "v2 : size           : " << v2.size() << endl;
   cout << "v2 : capacity       : " << v2.capacity() << endl;

   array<int, 10> a1 {1, 2, 3};   // 1, 2, 3, 0, 0, 0, ...
   array<int, 10> a2;             // ?, ?, ?, ...
   vector<int> v3 (3);          // 0, 0, 0

   cout << endl;
   vector<int> v4 {1, 2, 3, 4, 5, 6};
   cout << "vecteur        : "; afficher(v4); cout << endl;
   cout << "data           : " << v4.data() << endl;
   cout << "size           : " << v4.size() << endl;
   cout << "capacity       : " << v4.capacity() << endl;
   v4.resize(10, 99);
   cout << "vecteur        : "; afficher(v4); cout << endl;
   cout << "data           : " << v4.data() << endl;
   cout << "size           : " << v4.size() << endl;
   cout << "capacity       : " << v4.capacity() << endl;
   v4.resize(3, 99);
   cout << "vecteur        : "; afficher(v4); cout << endl;
   cout << "data           : " << v4.data() << endl;
   cout << "size           : " << v4.size() << endl;
   cout << "capacity       : " << v4.capacity() << endl;

   int valeur_sommet = v4.front();
   v4.pop_back();
   cout << "vecteur        : "; afficher(v4); cout << endl;
   cout << "data           : " << v4.data() << endl;
   cout << "size           : " << v4.size() << endl;
   cout << "capacity       : " << v4.capacity() << endl;

   return EXIT_SUCCESS;
}
