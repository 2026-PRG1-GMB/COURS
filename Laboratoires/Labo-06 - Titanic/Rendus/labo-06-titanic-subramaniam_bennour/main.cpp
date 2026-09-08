#include <cstdlib>
#include <iostream>
#include "gestion_codec_fichiers.h"
#include "interface_utilisateur.h"

using namespace std;

int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    afficher_menu(
        "Ce programme permet d'encoder ou de decoder des fichiers texte en code Morse.",
        " - encode",
        " - decode"
    );
    const bool choix = saisir_operation("your choice ");

    const string nom_fichier_entree = saisir_nom_fichier("file in : ");
    const string nom_fichier_sortie = saisir_nom_fichier("file out : ");

    if (saisir_confirmation("continue ")) {
        if (choix) {
            encoder_flux(nom_fichier_entree, nom_fichier_sortie);
        } else {
            decoder_flux(nom_fichier_entree, nom_fichier_sortie);
        }
    }
    cout << "Fin du programme." << endl;
    return EXIT_SUCCESS;
}