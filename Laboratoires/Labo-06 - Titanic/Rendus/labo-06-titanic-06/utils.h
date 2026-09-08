// cpp
#ifndef PRG1_LABO06_TITANIC_UTILS_H
#define PRG1_LABO06_TITANIC_UTILS_H
#include <string>

/**
 * @brief Écrit du texte dans un fichier.
 * @param addContent Texte à écrire dans le fichier.
 * @param filename Chemin du fichier de sortie.
 */
void writeTextToFile(const std::string& addContent, const std::string& filename);

/**
 * @brief Lit un entier sécurisé dans un intervalle.
 * @param inputMsg Message d'invite affiché à l'utilisateur.
 * @param min Valeur minimale autorisée (incluse).
 * @param max Valeur maximale autorisée (incluse).
 * @return Entier saisi et validé dans l'intervalle [min, max].
 */
int userChoiceInput(const std::string& inputMsg, int min, int max);

/**
 * @brief Demande à l'utilisateur le nom (ou chemin) d'un fichier (variation d'usage).
 * @param fileToEnter Message d'invite pour la saisie du nom de fichier.
 * @return Nom du fichier saisi par l'utilisateur.
 */
std::string enterFileName(const std::string& fileToEnter);

/**
 * @brief Demande à l'utilisateur s'il souhaite recommencer.
 * @param yes Caractère représentant l'option "oui".
 * @param no Caractère représentant l'option "non".
 * @return Caractère de décision paramétrée par l'utilisateur (yes ou no).
 */
char userRestartInput(char yes,char no);

#endif //PRG1_LABO06_TITANIC_UTILS_H
