#include <iostream>
#include <fstream>
#include <string>
#include "ecriture.h"

using namespace std;

string ecriture(const string& file_name,const string& message ) {

    // Ouvrir le fichier en mode append
    ofstream file_out(file_name, ios::app);

    // Vérifier si l'ouverture du fichier a réussi ou non
    if (!file_out) {
        cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
    }

    // Ecriture du message encoder ou decoder dans le fichier texte
    file_out <<message << endl;

    file_out.close();
    return message;
}