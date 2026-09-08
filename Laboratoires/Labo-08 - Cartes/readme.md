# Labo - Jeu de Cartes "La Bataille" 
**Travail en groupe.**

- [Classe A](https://classroom.github.com/a/3DJlyJkv)

## Objectif
- Manipuler des tableaux pour stocker et gérer des données.
- Utiliser des structures et des types énumérés.
- Approfondissement de la notion de tests et décision en implémentant les règles détaillées d'un jeu de cartes simple.

## Contexte

Dans ce labo, vous allez concevoir et programmer le jeu de cartes **"La Bataille"** en C++. Ce projet vous permettra de mettre en pratique l'utilisation des tableaux en C++ ainsi que les structures et les types énumérés.

### Règles du Jeu :

**"La Bataille"** est un jeu de cartes simple joué entre deux joueurs. Le but du jeu est de remporter toutes les cartes de l'adversaire.

1. **Préparation du Jeu :**
   - Utilisez un jeu standard de 52 cartes.
   - Mélangez les cartes de manière aléatoire.
   - Distribuez les cartes équitablement entre les deux joueurs, chaque joueur recevant 26 cartes face cachée.

2. **Déroulement du Jeu :**
   - **Tour de Jeu :**
     - Chaque joueur tire la carte du dessus de son paquet et la place face visible sur la table.
     - Comparez les valeurs des deux cartes (l'As étant la carte la plus forte).
     - Le joueur avec la carte de valeur la plus élevée remporte les deux cartes et les place sous son paquet, face cachée.
   - **Bataille :**
     - Si les deux cartes ont la même valeur, une "bataille" commence.
     - Chaque joueur place une carte face cachée sur la table, puis une autre carte face visible.
     - Comparez à nouveau les cartes visibles.
     - Le gagnant remporte toutes les cartes en jeu (les cartes visibles et cachées).
     - Si les cartes sont encore de même valeur, la bataille continue jusqu'à ce qu'un joueur ait une carte de valeur supérieure ou n'ait plus de cartes.

3. **Fin du Jeu :**
   - Le jeu se termine lorsqu'un joueur a remporté toutes les cartes ou après un nombre prédéfini de tours pour éviter des parties trop longues.
   - Le joueur possédant toutes les cartes est déclaré vainqueur.
   - En cas de fin prématurée (par exemple, manque de cartes pour continuer une bataille), le joueur avec le plus grand nombre de cartes remporte la partie.

## Tâches à Réaliser :

1. **Représentation des Cartes :**
   - Créez une structure `Carte` avec les attributs suivants :
     - `valeur` : entier représentant la valeur de la carte (2 à 14, où 11=Valet, 12=Dame, 13=Roi, 14=As).
     - `couleur` : entier représentant la couleur (Cœur, Carreau, Trèfle, Pique).
   - Utilisez un tableau pour créer le jeu complet de 52 cartes.

2. **Mélange et Distribution des Cartes :**
   - Implémentez une fonction pour mélanger le vecteur de cartes.
   - Distribuez les cartes aux deux joueurs en divisant le vecteur en deux vecteurs représentant les paquets des joueurs.

3. **Gestion des Structures de Données lors du Jeu :**
   - Représentez les paquets des joueurs avec des tableaux.
   - Lorsqu'un joueur joue une carte, retirez la carte du début de son tableau.
   - Les cartes gagnées sont ajoutées à la fin du tableau du gagnant.
   - Pour gérer les batailles, utilisez un tableau temporaire pour stocker les cartes en jeu.

4. **Implémentation du Tour de Jeu :**
   - Créez une boucle principale qui continue jusqu'à ce qu'un des joueurs n'ait plus de cartes ou qu'un nombre maximum de tours soit atteint.
   - À chaque tour :
     - Les deux joueurs jouent leur carte du dessus.
     - Comparez les valeurs et déterminez le gagnant.
     - Gérez les batailles selon les règles détaillées.
     - En cas de victoire, ajoutez les cartes jouées au paquet du gagnant.

5. **Gestion des Batailles :**
   - Lors d'une bataille :
     - Vérifiez que chaque joueur a suffisamment de cartes pour continuer.
     - Si un joueur n'a pas assez de cartes, il perd la partie.
     - Sinon, procédez en ajoutant les cartes nécessaires au vecteur temporaire.
     - Continuez jusqu'à ce qu'un gagnant soit déterminé.

6. **Enregistrement et Affichage des Résultats :**
   - Après chaque tour, affichez :
     - Le nombre de cartes restantes pour chaque joueur.
     - Les cartes jouées lors du tour.
     - Les batailles survenues.
   - À la fin du jeu, déclarez le gagnant et affichez les statistiques finales (nombre total de tours, Le nombre de cartes restantes pour chaque joueur, etc.).

## Modalités
- à faire **par groupe de 2 étudiants**
- 8 périodes
