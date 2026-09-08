#ifndef PRG1_LABO06_TITANIC_LECTUREECRITURE_H
#define PRG1_LABO06_TITANIC_LECTUREECRITURE_H

#include <string>

/**
 * Ouvre le fichier indiqué par chemin en mode lecture
 * Lit la première ligne du fichier et la copie dans ligne
 * @param chemin Chemin du fichier à lire
 * @param ligne Chaine où la ligne du fichier sera stockée
 * @return false si une erreur d'ouverture de fichier,
 *         true si tout s'est bien passé
 */
bool lireLigne(const std::string &chemin, std::string &ligne);

/**
 * Ouvre le fichier indiqué par chemin en mode écriture
 * Écrit le texte texteTotal dans le fichier
 * @param chemin Chemin du fichier à écrire
 * @param texteTotal Texte à écrire dans le fichier
 * @return false si une erreur d'ouverture de fichier,
 *         true si tout s'est bien passé
 */
bool ecrireFichier(const std::string &chemin, const std::string &texteTotal);


#endif //PRG1_LABO06_TITANIC_LECTUREECRITURE_H
