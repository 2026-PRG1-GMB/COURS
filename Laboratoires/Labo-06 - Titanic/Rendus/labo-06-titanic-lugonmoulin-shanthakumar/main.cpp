#include <cstdlib>
#include <iostream>
#include <string>

#include "menu.h"
#include "encode.h"
#include "decode.h"

using namespace std;

int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;
    while (true) {

        // Saisie du choix (1 encode, 2 decode)
        const int choice = ask_choice_1_2();

        // Saisie du chemin des fichiers
        string in_file, out_file;
        cout << "file in  : ";
        getline(cin, in_file);
        cout << "file out : ";
        getline(cin, out_file);

        // Exécute l’action choisie
        bool ok = false;
        if (choice == encode)
            ok = encode_file(in_file, out_file);
        else
            ok = decode_file(in_file, out_file);

        if (ok)
            cout << "Operation terminee avec succes." << endl;
        else
            cout << "Une erreur est survenue (verifie le chemin des fichiers)." << endl;

        // Boucle principale : continuer [Y/N]
        if (!ask_continue()) {
            cout << "\nProgramme termine. Merci d'avoir utilise le traducteur Morse !" << endl;
            break;
        }

        cout << endl;
    }

    return EXIT_SUCCESS;
}
