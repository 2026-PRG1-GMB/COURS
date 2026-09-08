## Titanic message

### Correctement créer un repository pour vous et votre collègue de travail
1. Rendez-vous sur le lien GitHub Classroom du Labo 6 de votre classe.
- [Classe A](https://classroom.github.com/a/ChkuAehz)
2. **Une** des deux personnes **crée une équipe** en lui donnant comme nom l'identifiant numérique de votre groupe.
3. L'autre personne recharge la page et clique sur l'équipe créée à l'étape 2 pour la rejoindre. **Ne vous trompez pas d'équipe !**
4. Les deux membres de l'équipe ont maintenant accès au repository portant le nom de l'équipe.
5. Bon travail !

### Objectif
- fichier in/out
- librairie

### A faire
Voici le [dernier message](https://clickamericana.com/topics/events/the-titanic/titanics-wireless-sos-signal-and-response-1912) transmis par le Titanic.

~~~
... --- ... / - .. - .- -. .. -.-. / .--. --- ... .. - .. --- -. / ....- .---- .-.-.- ....- ....- / -. / ..... ----- .-.-.- ..--- ....- / .-- .-.-.- / .-. . --.- ..- .. .-. . / .. -- -- . -.. .. .- - . / .- ... ... .. ... - .- -. -.-. . .-.-.- / -.-. --- -- . / .- - / --- -. -.-. . .-.-.- / .-- . / ... - .-. ..- -.-. -.- / .- -. / .. -.-. . -... . .-. --. .-.-.- / ... .. -. -.- .. -. --. -.-.--
~~~

Écrire un programme permettant de converser en Morse, les messages étant dans des fichiers texte.

Le programme doit pouvoir lire un fichier en clair et écrire le message correspondant en code Morse dans un autre fichier texte et inversément.
Un menu utilisateur aide à choisir l'action désirée et les fichiers à traiter.

~~~
This programme ...
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
- [Dictionnaire avec symboles](https://morsecode.world/international/morse2.html)
- format des fichiers
	- ne contient qu'une seule ligne à traiter
	- fichier en clair : ne contient que des majuscules et des symboles
	- fichier Morse : un ' ' sépare deux codes
	- fichier Morse : un '/' sépare deux mots

### Modalités
- à faire **par groupe de 2 étudiants**
- 4 périodes

---
Bon travail
