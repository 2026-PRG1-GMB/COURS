#include "lectureEcriture.h"
#include <fstream>

using namespace std;

bool lireLigne(const string &chemin, string &ligne) {
    ifstream fichierEntree(chemin);

    if (!fichierEntree) {
        return false;
    }

    ligne.clear();
    getline(fichierEntree, ligne);

    return true;
}

bool ecrireFichier(const string &chemin, const string &texteTotal) {
    ofstream fichierSortie(chemin);

    if (!fichierSortie) {
        return false;
    }

    fichierSortie << texteTotal;

    return true;
}
