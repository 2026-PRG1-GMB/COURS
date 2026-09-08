#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "fichier.h"
#include "interface.h"
#include "morse.h"

using namespace std;

void encoder(ifstream &flux_entree, ofstream &flux_sortie);

void decoder(ifstream &flux_entree, ofstream &flux_sortie);

int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    std::ofstream flux_sortie;
    std::ifstream flux_entree;

    const string mess_fonctionnalite = "your choice [1-2] :";
    const string mess_continuer = "continue [Y/N] :";

    bool programme_continue;
    do {
        constexpr char encoder_c = '1';
        constexpr char decoder_c = '2';
        constexpr char continuer_c = 'Y';
        constexpr char stopper_c = 'N';

        cout << "This program ..." << '\n'
                << setw(18) << right << "1 - encode" << '\n'
                << setw(18) << "2 - decode" << endl;

        char fonctionnalite_choisie = recup_choix_utilisateur(mess_fonctionnalite, encoder_c, decoder_c);

        bool fichier_ouvert;
        do {
            string chemin_fichier_entree = recup_nom_fichier("file in", 10);
            fichier_ouvert = ouvrir_fichier_lecture(chemin_fichier_entree, flux_entree);
        } while (!fichier_ouvert);

        do {
            string chemin_fichier_sortie = recup_nom_fichier("file out", 10);
            fichier_ouvert = ouvrir_fichier_ecriture(chemin_fichier_sortie, flux_sortie);
        } while (!fichier_ouvert);

        fonctionnalite_choisie == encoder_c
            ? encoder(flux_entree, flux_sortie)
            : decoder(flux_entree, flux_sortie);

        flux_entree.close();
        flux_sortie.close();

        programme_continue = recup_choix_utilisateur(mess_continuer, continuer_c, stopper_c) == continuer_c;
    } while (programme_continue);

    return EXIT_SUCCESS;
}

/**
 * Lit dans fichier entrée et converti chaque caractère en morse et l'écris dans fichier sortie.
 * @param flux_entree
 * @param flux_sortie
 */
void encoder(ifstream &flux_entree, ofstream &flux_sortie) {
    char c;

    while (flux_entree.get(c)) {
        string lettre_morse = encode_caractere_en_morse(c);
        flux_sortie << lettre_morse;

        // prendre (et remet) caractère suivant et vérifie que ce n'est pas le dernier
        // évite de mettre espace après le dernier caractère
        if (flux_entree.peek() != EOF) {
            flux_sortie << ' ';
        }
    }
}

/**
 * Lit fichier entrée et décode chaque chaine de morse et écris caractère correspondant dans fichier sortie.
 * @param flux_entree
 * @param flux_sortie
 */
void decoder(ifstream &flux_entree, ofstream &flux_sortie) {
    char c;
    constexpr char separateur_caractere = ' ';

    string chaine_tmp;
    string texte_final;

    while (flux_entree.get(c)) {
        if (c == separateur_caractere) {
            texte_final += decode_caractere_morse(chaine_tmp);
            chaine_tmp.clear();
            continue;
        }

        chaine_tmp += c;
    }

    // cas spécial : nécessaire pour lire la dernière chaine de morse si elle n'a pas un espace après
    if (!chaine_tmp.empty())
        texte_final += decode_caractere_morse(chaine_tmp);

    // écriture dans le fichier sortie du texte décodé
    flux_sortie << texte_final;
}
