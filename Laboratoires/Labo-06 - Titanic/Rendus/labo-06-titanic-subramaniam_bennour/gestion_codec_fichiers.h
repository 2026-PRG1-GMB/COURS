// Fichier : gestion_codec_fichiers.h
// Description :
//      Déclarer les fonctions d'encodage ou de décodage du code Morse.

#ifndef LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_GESTION_CODEC_FICHIERS_H
#define LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_GESTION_CODEC_FICHIERS_H

#include <string>

void encoder_flux(const std::string& nom_fichier_entree, const std::string& nom_fichier_sortie);
void decoder_flux(const std::string& nom_fichier_entree, const std::string& nom_fichier_sortie);

#endif //LABO_06_TITANIC_SUBRAMANIAM_BENNOUR_GESTION_CODEC_FICHIERS_H