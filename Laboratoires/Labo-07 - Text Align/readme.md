## Traitement de texte

### Objectif
- manipulation de `string`
- types énumérés `enum class`

### À faire
Écrire une **librairie** permettant de modifier une `string` de plusieurs lignes (séparées par des `\n`) de sorte à pouvoir obtenir ce même texte mis en page comme suit :

| Alignement   | Détails                          |
|--------------|:---------------------------------|
| left         | le texte est aligné à gauche     | 
| right        | le texte est aligné à droite     | 
| center       | le texte est aligné au centre    | 
| justify      | le texte est justifié            | 

Une fonction `align` permet de choisir la mise en page souhaitée ainsi que la largeur du texte.  
L'alignement par défaut est `left`.

Les césures sont positionnées au dernier espace. À défaut, s’il n’y a aucun espace dans la largeur souhaitée, une césure est insérée dans le texte.

Le texte reçu est possiblement mal formaté, c’est-à-dire qu’il peut contenir plusieurs espaces entre les mots. Les espaces excédentaires sont supprimés après la mise en page.

~~~cpp
void align (std::string& text,
            size_t       width     = def_width,
            Alignment    alignment = def_alignment);
~~~

## Exemples

La largeur choisie est 40 caractères. 

### left
~~~
Your trip to Barcelona
You will have the opportunity to choose
your airline and flight times when
making your reservation.
This flight may include one or more
stopovers. A stopover may be technical
(without a change of aircraft) or
transit (with a change of aircraft).
~~~

### right
~~~
                  Your trip to Barcelona
 You will have the opportunity to choose
      your airline and flight times when
                making your reservation.
     This flight may include one or more
  stopovers. A stopover may be technical
       (without a change of aircraft) or
    transit (with a change of aircraft).
~~~

### center
~~~
         Your trip to Barcelona         
You will have the opportunity to choose 
   your airline and flight times when   
        making your reservation.        
   This flight may include one or more  
 stopovers. A stopover may be technical
   (without a change of aircraft) or   
  transit (with a change of aircraft). 
~~~

### justify
~~~
Your       trip       to       Barcelona
You  will have the opportunity to choose
your   airline  and  flight  times  when
making         your         reservation.
This  flight  may  include  one  or more
stopovers.  A  stopover may be technical
(without   a   change  of  aircraft)  or
transit  (with  a  change  of aircraft).
~~~

Pour la création des textes, le programme principal invite l’utilisateur à choisir :
- un fichier à charger
- la mise en page souhaitée
- la largeur du texte après mise en page

Enfin, l’utilisateur peut :
- sauvegarder le résultat dans un fichier, auquel cas il devra saisir le nom du fichier
- … et recommencer avec un autre fichier à charger ou quitter le programme.

~~~
This programme ...
file in  : ../Barcelone.txt
How to align this text
1	left
2	center
3	right
4	justify
your choice [1-4] : 2
width [10-120] : 40

... affichage du résultat

Save to file [Y/N] : n
Start again [Y/N] : n
~~~

### Complément

- favoriser la manipulation de `string`
- hormis les `string`, ne pas utiliser de tableau
- ne pas utiliser les itérateurs
- les saisies utilisateur sont totalement maîtrisées

### Modalités
- à faire **par groupe de 2 étudiants**
- 4 périodes

---

Bon travail