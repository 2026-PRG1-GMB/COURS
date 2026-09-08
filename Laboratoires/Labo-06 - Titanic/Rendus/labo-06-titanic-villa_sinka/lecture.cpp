#include <fstream>
#include <string>
#include "lecture.h"

using namespace std;

string lecture(const string& file_name){
    ifstream file_in(file_name);

    // Vérifier si l'ouverture du fichier a réussi
    if (!file_in) {
        return "Erreur lors de l'ouverture du fichier.";
    }

    string message;

    // lire une ligne
    while (file_in) {
        getline(file_in, message);
    }

    file_in.close();

    return message;
}