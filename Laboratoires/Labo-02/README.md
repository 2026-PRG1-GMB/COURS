# Labo02 - Calcul du temps de trajet

## Objectif
- Écrire un algorithme en pseudo code et le traduire en code C++.
- Utiliser les types, les formules et les opérations mathématiques de C++.

## Contexte 
Un robot doit récupérer un objet situé sur un terrain rocheux adjacent à une route. 

Le robot peut se déplacer à une vitesse plus rapide sur la route que sur le terrain rocheux, il voudra donc le faire sur une certaine distance avant de se déplacer en ligne droite vers l'objet.

Votre tâche consiste à calculer le temps total nécessaire au robot pour atteindre son objectif, compte tenu des entrées suivantes :

- La distance entre le robot et l'élément dans les directions x et y (`dx` et `dy`).
- La vitesse du robot sur la route et le terrain rocheux (`s1` et `s2`).
- La longueur `L1` du premier segment (sur la route).

L’image ci-dessous illustre le problème :

![labo02-illustration](assets/Image.jpg)

## Calcul et indications 

Vous avez besoin de calculer le temps nécessaire pour traverser chaque segment. Le temps total est la somme de ces deux.

À savoir que le `temps = distance / vitesse`.

Pour le deuxième segment, l’inconnu est `L2`. Pour le calculer vous pouvez utiliser la théorie du triangle rectangle :

```math
\text{hypoténuse} = \sqrt{\text{cote\_a}^2 + \text{cote\_b}^2}
```

Afin de faciliter la validation du labo, votre programme affichera uniquement le temps total en heures à la fin du calcul.

## Travail demandé 
1. Écrire l’algorithme du calcul en pseudo code dans le fichier `pseudo.md`.
2. Implémenter votre algorithme en C++. Votre code devra être clair et lisible. Utiliser le fichier `main.cpp` pour cela.
3. Faites des commits et push de vos modifications sur le repo GitHub.
4. **En bonus :** modifier votre programme pour prendre en entrée la distance à parcourir sur la route (`L1`) afin de tester et deviner la distance qui permet de récupérer l’objet le plus rapidement possible !

## Remise du travail 
- Veuillez soumettre (sur Cyberlearn ou Teams selon le cas) le hash de votre commit dans GitHub ainsi que le lien vers le repo.
- Le code C++ et l’algorithme en pseudo code doivent être dans le repo Git.
- Travail individuel.
