## Jeu de la Vie - suite

### Objectif
- vérification de la généricité
- utilisation d'une classe

### A faire
Le jeu de la vie reste comme décrit précédemment.

Toutefois, les éléments contenus dans le tableau implémente des éléments qui disposent de plusieurs vies.

- le constructeur sans paramètre `Cell()` crée une cellule avec `0` vie
- le constructeur sans paramètre `Cell(n)` crée une cellule avec `n` vies

Lors du déroulement du jeu et selon le nombre de voisins déterminés par la fonction `occ(k)`, les cellules peuvent naître ou inversément perdre une vie.<br>

~~~cpp
   Cell cell(2);  cout << "vie : " << cell << endl;   // vie : 2
   cell = true;   cout << "vie : " << cell << endl;   // vie : 2 
   cell = false;  cout << "vie : " << cell << endl;   // vie : 1 
   cell = false;  cout << "vie : " << cell << endl;   // vie : 0 
   cell = true;   cout << "vie : " << cell << endl;   // vie : 1 
~~~

L’affichage sera fait en utilisant les symboles

- O cellule vide
- X cellule occupée

Si la généricité est correctement implémentée dans votre programme `main`, l'utilisation de la classe `Cell` ne devrait poser aucun problème.

Exemple de construction de la matrice de départ

~~~cpp
using MatriceCell  = Matrice<Cell, 5, 5>;
MatriceCell tabCell {{{0, 1, 2, 3, 4},      // 0
                      {0, 5, 6, 7, 0},      // 1
                      {0, 0, 8, 0, 0},      // 2
                      {0, 0, 5, 0, 0},      // 3
                      {0, 1, 2, 3, 4}}};    // 4
~~~

classe `Cell` à utiliser

~~~cpp
#ifndef CLASS_CELL
#define CLASS_CELL

#include <iostream>


//------------------------------------------------------------------------------
using uint = unsigned int;

class Cell {
   friend std::ostream& operator<<(std::ostream& os, const Cell& cell) {
      return os << cell.n; }
public:
   Cell()       : Cell(0)   { };
   Cell(uint n) : n(n)      { };
   Cell& operator= (bool b) { if (b and n==0) n = 1;        // naissance
                              else if (not b and n>0) --n;  // perd une vie
                              return *this;}

   operator bool() const                   { return this->n; }
   bool operator== (const Cell& rhs) const { return this->n == rhs.n; }

private:
   uint n;
};

#endif // CLASS_CELL
~~~

---
Bon travail
