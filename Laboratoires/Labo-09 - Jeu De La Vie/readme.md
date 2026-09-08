## Jeu de la Vie

### GitHub Classroom
[Classe A](https://classroom.github.com/a/sFfGTo3v)

### Objectif
- Présentation du code aussi propre que possible
- Décomposition en librairie(s) et sous-programmes réutilisable(s)
- Généricité sur la taille et le contenu des tableaux

### A faire
Le [Jeu de la Vie](https://fr.wikipedia.org/wiki/Jeu_de_la_vie), inventé par J. H. Conway, utilise une grille rectangulaire de cellules, chacune d’entre elles pouvant contenir `0` ou `1` habitant.
Chaque cellule a jusqu’à huit et nous utiliserons `occ(k)` pour désigner le nombre de cellules voisines de la cellule k qui sont occupées.

L’état d’une nouvelle génération est obtenu à partir de la précédente en appliquant deux règles simples :

- Un habitant situé dans la cellule k survit à la génération suivante si `occ(k) = 2` ou `occ(k) = 3`, et meurt dans le cas contraire
- Il y aura une “naissance” dans une cellule k vide si `occ(k) = 3`, sinon la cellule restera vide.

Ecrire un programme en C++ qui, partant d’une configuration initiale donnée (cf. Indications), calcule un certain nombre de générations suivantes en application des règles ci-dessus et affiche chacune des configurations trouvées.

Le nombre d'itérations maximums est fixé à la compilation.<br>
Le programme s'arrête de lui-même lorsqu'il n'y a plus de changement entre 2 générations consécutives.

L’affichage sera fait en utilisant les symboles

- . pour représenter une cellule vide
- X pour représenter une cellule occupée

### Complément

- La taille et le contenu du tableau sont connus à la compilation, typiquement dans le programme appelant (main)
- Le programme stoppe lorsqu'il n'y a plus d'évolution
- Représenter les grilles comme dans les exemples ci-dessous
- Utiliser une structure économe en mémoire
- Utiliser la généricité

Les instructions suivantes permettent d’effacer l’écran avant de le réafficher.

~~~cpp
#ifdef _WIN32
   system("CLS");
#else
   system("clear");
#endif
~~~

.. et celle-ci pour ralentir le déroulement du programme [sleep_for](https://cplusplus.com/reference/thread/this_thread/sleep_for/)

### Modalités
- à faire **par groupe de 2 étudiants**
- 6 périodes

<details>
<summary>Output - mode normal</summary>

~~~
Ce programme ...

------------------------------
         GENRATION NO 0
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  .  .  .  .  .
  1  .  .  .  .  .  .  .  .  .
  2  .  .  .  X  X  X  .  .  .
  3  .  .  .  .  X  .  .  .  .
  4  .  .  .  .  X  .  .  .  .
  5  .  .  .  .  X  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 1
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  .  .  .  .  .
  1  .  .  .  .  X  .  .  .  .
  2  .  .  .  X  X  X  .  .  .
  3  .  .  .  .  .  .  .  .  .
  4  .  .  .  X  X  X  .  .  .
  5  .  .  .  .  .  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 2
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  .  .  .  .  .
  1  .  .  .  X  X  X  .  .  .
  2  .  .  .  X  X  X  .  .  .
  3  .  .  .  .  .  .  .  .  .
  4  .  .  .  .  X  .  .  .  .
  5  .  .  .  .  X  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 3
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  X  .  .  .  .
  1  .  .  .  X  .  X  .  .  .
  2  .  .  .  X  .  X  .  .  .
  3  .  .  .  X  .  X  .  .  .
  4  .  .  .  .  .  .  .  .  .
  5  .  .  .  .  .  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 4
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  X  .  .  .  .
  1  .  .  .  X  .  X  .  .  .
  2  .  .  X  X  .  X  X  .  .
  3  .  .  .  .  .  .  .  .  .
  4  .  .  .  .  .  .  .  .  .
  5  .  .  .  .  .  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 5
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  .  X  .  .  .  .
  1  .  .  X  X  .  X  X  .  .
  2  .  .  X  X  .  X  X  .  .
  3  .  .  .  .  .  .  .  .  .
  4  .  .  .  .  .  .  .  .  .
  5  .  .  .  .  .  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .

------------------------------
         GENRATION NO 6
------------------------------
     0  1  2  3  4  5  6  7  8
  0  .  .  .  X  X  X  .  .  .
  1  .  .  X  .  .  .  X  .  .
  2  .  .  X  X  .  X  X  .  .
  3  .  .  .  .  .  .  .  .  .
  4  .  .  .  .  .  .  .  .  .
  5  .  .  .  .  .  .  .  .  .
  6  .  .  .  .  .  .  .  .  .
  7  .  .  .  .  .  .  .  .  .
  8  .  .  .  .  .  .  .  .  .
~~~
</details>

---
Bon travail
