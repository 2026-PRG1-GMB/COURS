#include "codeurDecodeurMorse.h"
#include "traducteurMorse.h"
#include <string>
/// Traduit le texte "normal" en morse
/// @param contenuFichier le fichier contenant le texte à traduire
/// @return le texte traduit en morse
std::string creeEncodage(const std::string& contenuFichier) {
    std::string result;

    for (unsigned long long i=0; i<contenuFichier.length(); ++i) {
        result+= encodeCaractere(contenuFichier[i]);
        result += ' ';
    }
    return result;
}

/// Traduit le texte de morse en "normal"
/// @param contenuFichier le fichier contenant le morse à traduire
/// @return le texte traduit en "normal"
std::string creeDecodage(const std::string& contenuFichier) {
    std::string result;
    std::string tmp;
    const unsigned long long longueur_fichier = contenuFichier.length();
    for (unsigned long long i=0; i<longueur_fichier; ++i) {
        if (contenuFichier[i]!=' ') {
            tmp+=contenuFichier[i];
            if (i==longueur_fichier-1) { // si c'est le dernier tour de boucle on évalue le dernier caractère
                result += decodeCaractere(tmp);
            }
        }
        else {
            result += decodeCaractere(tmp);
            tmp="";
        }

    }
    return result;
}