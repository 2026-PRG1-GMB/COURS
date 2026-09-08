#include <cstdlib>
#include <iostream>
#include "lectureEcriture.h"
#include "coderMorse.h"
#include "decoderMorse.h"
#include "saisieUtilisateur.h"

using namespace std;

/**
 * Code le contenu d'un fichier en morse et écrit le résultat dans un autre fichier
 * @param fichierEntree Le nom du fichier à lire
 * @param fichierSortie Le nom du fichier où écrire le résultat
 */
void traiterCodage(const string &fichierEntree, const string &fichierSortie);

/**
 * Décode le contenu d'un fichier morse et écrit le résultat dans un autre fichier
 * @param fichierEntree Le nom du fichier à lire
 * @param fichierSortie Le nom du fichier où écrire le résultat
 */
void traiterDecodage(const string &fichierEntree, const string &fichierSortie);

/**
 * Gère l'interaction avec l'utilisateur pour choisir d'encoder ou de decoder un fichier
 * et pour saisir les noms des fichiers d'entrée et de sortie.
 */
void encoderDecoderAvecSaisieUtilisateur();

/**
 * Point d'entrée du programme.
 * Encode et decode des fichiers en morse selon la saisie utilisateur.
 * Boucle tant que l'utilisateur souhaite continuer.
 * @return EXIT_SUCCESS si tout s'est bien passé, EXIT_FAILURE sinon
 */
int main() {
    bool continuer;
    do {
        encoderDecoderAvecSaisieUtilisateur();

        continuer = saisieCaractereOuiNon("continue");
    } while (continuer);

    return EXIT_SUCCESS;
}

void traiterCodage(const string &fichierEntree, const string &fichierSortie) {
    string entree;

    if (!lireLigne(fichierEntree, entree)) {
        cerr << "Erreur d'ouverture du fichier d'entree : " << fichierEntree << endl;
        // TODO : Définir comment mieux gérer les erreurs. Veut-on arrêter le programme, la fonction ?
        // Pour l'instant, on continue comme si le fichier était vide (string vide).
    }

    const string sortie = coderEnMorse(entree);

    if (!ecrireFichier(fichierSortie, sortie)) {
        cerr << "Erreur d'ouverture du fichier de sortie : " << fichierSortie << endl;
        // TODO : Définir comment mieux gérer les erreurs.
    }
}

void traiterDecodage(const string &fichierEntree, const string &fichierSortie) {
    string entree;
    if (!lireLigne(fichierEntree, entree)) {
        cerr << "Erreur d'ouverture du fichier d'entree : " << fichierEntree << endl;
        // TODO : Définir comment mieux gérer les erreurs. Veut-on arrêter le programme, la fonction ?
        // Pour l'instant, on continue comme si le fichier était vide (string vide).
    }

    const string sortie = decoderMorse(entree);

    if (!ecrireFichier(fichierSortie, sortie)) {
        cerr << "Erreur d'ouverture du fichier de sortie : " << fichierSortie << endl;
        // TODO : Définir comment mieux gérer les erreurs.
    }
}

void encoderDecoderAvecSaisieUtilisateur() {
    cout << "This program ..." << endl;
    cout << "1 - encode" << endl;
    cout << "2 - decode" << endl;

    int choix = saisieEntierBornes("your choice", 1, 2);
    string fichierEntree = saisieChaine("file in ");
    string fichierSortie = saisieChaine("file out");

    if (choix == 1) {
        traiterCodage(fichierEntree, fichierSortie);
    } else {
        traiterDecodage(fichierEntree, fichierSortie);
    }
}
