/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s) : Guerrouah Syphax & Oliosi Marco
Date creation : 29.11.2025
Description : Labo 06 - Titanic
Compilateur : gcc version 15.2.0 / MinGW-W64 x86_64-w64-mingw32
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "lecture_ecriture_fichier_txt_library.h"
#include "morse_conversion_library.h"
#include "user_input_library.h"

using namespace std;

int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    cout << "This programme ...\n"
        <<"\t 1 - encode\n"
        <<"\t 2 - decode"<<endl;

    char user_continue;
    //début boucle globale de fonctionalité complète du progamme
    do {
        int function_choice;
        //boucle qui demande à l'utilisateur entre encode et decode
        do {
            function_choice = user_input_int("your choice [1-2] : "); //de user_input_library
        }while (function_choice != 1 and function_choice != 2);

        //demande à l'utilisateur le fichier d'entrée
        string nom_fichier_in = user_input_string("file in  : ");
        //demande à l'utilisateur le fichier de sortie
        string nom_fichier_out = user_input_string("file out  : ");

        //lecture et écriture de fichier, fonctions depuis la librairie lecture_ecriture_fichier_txt_library
        ifstream file_in = read_file(nom_fichier_in);
        ofstream file_out = write_file(nom_fichier_out);

        //fonction encode et decode depuis la librairie morse_conversion_library
        if (function_choice == 1) encode(file_in, file_out);
        if (function_choice == 2) decode(file_in, file_out);

        file_out.close();
        file_in.close();

        //boucle de choix de relance du programme global
        do {
            user_continue = user_input_char("Continue [Y/N] : ");
        }while (user_continue != 'Y' and user_continue != 'N');
    }while (user_continue != 'N');

    return EXIT_SUCCESS;
}