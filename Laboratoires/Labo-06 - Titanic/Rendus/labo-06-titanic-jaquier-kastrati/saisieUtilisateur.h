#ifndef PRG1_LABO06_TITANIC_SAISIEUTILISATEUR_H
#define PRG1_LABO06_TITANIC_SAISIEUTILISATEUR_H
#include <string>

/**
 * Demande à l'utilisateur un nombre entier
 * @param message Le message à afficher à l'utilisateur
 * @return Retourne la valeur écrite par l'utilisateur
 */
int saisieEntier(const std::string &message);

/**
 * Demande à l'utilisateur un nombre compris entre min et max inclu sinon recommence
 * @param message Le message à afficher à l'utilisateur
 * @param min La valeur minimale acceptée
 * @param max La valeur maximale acceptée
 * @return Retourne la valeur écrite par l'utilisateur
 */
int saisieEntierBornes(const std::string &message, int min, int max);

/**
 * Demande à l'utilisateur une chaine de caractères
 * @param message Le message à afficher à l'utilisateur
 * @return Retourne la chaine saisie par l'utilisateur
 */
std::string saisieChaine(const std::string &message);

/**
 * Demande à l'utilisateur un caractère unique
 * @param message Le message à afficher à l'utilisateur
 * @return Retourne le caractère saisi par l'utilisateur
 */
char saisieCaractere(const std::string &message);

/**
 * Demande à l'utilisateur de saisir un caractère représentant une réponse "oui" ou "non".
 * Boucle si la saisie n'est pas valide ou différente des caractères attendus.
 * @param message Le message à afficher à l'utilisateur (avant de demander le caractère)
 * @param caractereOui Le caractère représentant la réponse "oui" (par défaut 'Y')
 * @param caractereNon Le caractère représentant la réponse "non" (par défaut 'N')
 * @return Retourne true si l'utilisateur a saisi le caractère "oui", false s'il a saisi le caractère "non".
 */
bool saisieCaractereOuiNon(const std::string &message, char caractereOui = 'Y', char caractereNon = 'N');

#endif
