#ifndef PRG1_LABO06_TITANIC_FICHIER_H
#define PRG1_LABO06_TITANIC_FICHIER_H

#include <string>

/**
 * Créé un flux vers un fichier en mode lecture
 * @param chemin_fichier
 * @param flux_entree flux créé en amont à passer en référence dans la fonction
 * @return faux si le flux n'est pas correctement ouvert
 */
bool ouvrir_fichier_lecture(const std::string &chemin_fichier, std::ifstream &flux_entree);

/**
 * Créé un flux vers un fichier en mode écriture. Ecrase le fichier si existait déjà.
 * @param chemin_fichier
 * @param flux_sortie flux créé en amont à passer en référence dans la fonction
 * @return faux si le flux n'est pas correctement ouvert
 */
bool ouvrir_fichier_ecriture(const std::string &chemin_fichier, std::ofstream &flux_sortie);

#endif //PRG1_LABO06_TITANIC_FICHIER_H
