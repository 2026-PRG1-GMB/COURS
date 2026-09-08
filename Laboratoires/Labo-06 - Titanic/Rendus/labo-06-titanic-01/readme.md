[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/ChkuAehz)

## Julian Vogel et Wahida Hussaini 

## Laboratoire 06 - Titanic message

### Objectif
- fichier in/out
- librairie

### À faire
Voici le [dernier message](https://clickamericana.com/topics/events/the-titanic/titanics-wireless-sos-signal-and-response-1912) transmis par le Titanic.

~~~
... --- ... / - .. - .- -. .. -.-. / .--. --- ... .. - .. --- -. / ....- .---- .-.-.- ....- ....- / -. / ..... ----- .-.-.- ..--- ....- / .-- .-.-.- / .-. . --.- ..- .. .-. . / .. -- -- . -.. .. .- - . / .- ... ... .. ... - .- -. -.-. . .-.-.- / -.-. --- -- . / .- - / --- -. -.-. . .-.-.- / .-- . / ... - .-. ..- -.-. -.- / .- -. / .. -.-. . -... . .-. --. .-.-.- / ... .. -. -.- .. -. --. -.-.--
~~~

Écrire un programme permettant de converser en Morse, les messages étant dans des fichiers texte.

Le programme doit pouvoir lire un fichier en clair et écrire le message correspondant en code Morse dans un autre fichier texte et inversément.
Un menu utilisateur aide à choisir l'action désirée et les fichiers à traiter.

~~~
This program ...
        1 - encode
        2 - decode
your choice [1-2] : 3
your choice [1-2] : a
your choice [1-2] : 2
file in  : ../TITANIC_CODED.txt
file out : ../TITANIC_CLEAR.txt

continue [Y/N] : 
~~~

### Complément
- ne pas utiliser de tableau, de manipulation de *string*, ... <br> => **uniquement ce qui a été vu au cours**
- les saisies utilisateurs sont totalement maitrisées
- on supppose que le fichier en lecture correspond à l'action souhaitée
- prévoir une ou plusieurs librairies
- [Morse Code Translator](https://morsedecoder.com/)
- format des fichiers
	- ne contient qu'une seule ligne à traiter
	- fichier en clair : ne contient que des majuscules et des symboles
	- fichier Morse : un ' ' sépare deux codes
	- fichier Morse : un '/' sépare deux mots

### Modalités
- À faire **par groupe de 2 étudiants**.
- 4 périodes.

---
Bon travail !
