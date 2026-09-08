#include <cstdlib>
#include <iostream>
#include "manipulation_de_fichier.h"


using namespace std;



int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    char continuer;
    char choix_utilisateur = ' ';
    string fichier_a_traiter;
    string fichier_de_sortie;

    //Entrée utilisateur pour le choix de l'action et des fichiers
    do {
        cout << "This program ..." << endl;
        cout << '\t' << "1 - encode" << endl;
        cout << '\t' << "2 - decode" << endl;
        do {
            cout << "your choice [1-2] : " ;
            cin >> choix_utilisateur;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
        } while (choix_utilisateur != '1' && choix_utilisateur != '2');
        cout << "file in : " ;
        cin >> fichier_a_traiter;
        cout << endl;
        cout << "file out : " ;
        cin >> fichier_de_sortie;
        cout << endl;

        //Envoie les informations à la fonction pour execute l'action voulue
        gestion_de_fichier(choix_utilisateur, fichier_a_traiter, fichier_de_sortie);

        cout << "continue [Y/N] : " ;
        cin >> continuer;
        cin.clear(); // vide le buffer si l'utilisateur a mis plusieurs lettres ex: "Yes"

    } while (continuer != 'N'); //on part du principe que l'entrée est juste donc soit Y soit N et au pire continue s'il écrit "orange"

    return EXIT_SUCCESS;
}