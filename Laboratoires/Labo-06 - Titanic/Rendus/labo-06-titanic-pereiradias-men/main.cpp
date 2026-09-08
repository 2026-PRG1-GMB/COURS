#include <cstdlib>
#include <iostream>
#include "interactionUtilisateur.h"
#include "interactionFichier.h"
#include "codeurDecodeurMorse.h"

using namespace std;

int main() {
    bool continuer = true;

    do {
        cout << "PRG1 - Laboratoire 06 : Titanic" << endl;
        cout << "1 - encode : " << endl;
        cout << "2 - decode : " << endl;

        //récupère la saisie utilisateur
        char choix = saisie("your choice [1-2] : ",'1','2');

        //récupère les fichiers d'entrée/sortie (fichier entrée : le texte que l'on va lire
        //fichier sortie : le fichier dans lequel on va écrire le résultat)
        cout << "file in : ";
        string fichier_lecture; cin >> fichier_lecture;
        cout << "file out : ";
        string fichier_ecriture; cin >> fichier_ecriture;

        if (choix=='1') {
            string texte_brut= fichier_entree(fichier_lecture); // récupère le texte du fichier
            string texte_morse = creeEncodage(texte_brut); // récupère le résultat de la traduction
            fichier_sortie(fichier_ecriture,texte_morse); // l'écris dans le fichier
        }
        else if (choix=='2') {
            string texte_morse = fichier_entree(fichier_lecture);// récupère le texte du fichier
            string texte_brut= creeDecodage(texte_morse); // récupère le résultat de la traduction
            fichier_sortie(fichier_ecriture,texte_brut);// l'écris dans le fichier
        }

        char veutContinuer = static_cast<char>(saisie("continue [Y/N] : ",'Y','N'));
        if (veutContinuer == 'N') {
            continuer = false;
        }

    } while (continuer);

    return EXIT_SUCCESS;
}