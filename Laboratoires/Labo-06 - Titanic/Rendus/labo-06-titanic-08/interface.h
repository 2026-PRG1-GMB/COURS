#ifndef PRG1_LABO06_TITANIC_INTERFACE_H
#define PRG1_LABO06_TITANIC_INTERFACE_H

#include <string>

/**
 * Traite un choix entre deux caractères (deux possibilités ou oui/non).
 * @param message type caractère attendus
 * @param choix1 caractère 1
 * @param choix2 caractère 1
 * @return carctère choisie
 */
char recup_choix_utilisateur(const std::string &message, char choix1, char choix2);

/**
 * Affiche message demandant nom fichier. Puis récupère valeure saisie
 * @param message demande nom fichier pour une utilisation
 * @param largeur_ligne
 * @return nom du fichier
 */
std::string recup_nom_fichier(const std::string &message, int largeur_ligne);

#endif //PRG1_LABO06_TITANIC_INTERFACE_H
