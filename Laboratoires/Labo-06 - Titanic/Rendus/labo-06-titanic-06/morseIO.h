// cpp
#ifndef PRG1_LABO06_TITANIC_MORSEIO_H
#define PRG1_LABO06_TITANIC_MORSEIO_H
#include <string>

/**
 * @brief Décode un fichier en code Morse en texte.
 * @param filename Chemin du fichier Morse.
 * @return Texte décodé ou "error" si le fichier n'a pas peut être ouvert.
 */
std::string decodeFile(const std::string& filename);

/**
 * @brief Encode un fichier texte en code Morse
 * @param filename Chemin du fichier texte
 * @return Chaîne Morse représentant le contenu du fichier ou "error" si le fichier n'a pas peut  être ouvert.
 */
std::string encodeFile(const std::string& filename);

/**
 * @brief Convertit un caractère en son équivalent en code Morse.
 * @param c Caractère à encoder.
 * @return Code Morse encodé ou "#" si inconnu.
 */
std::string charToMorse(char c);

/**
 * @brief Convertit un code Morse en caractère.
 * @param code Code Morse équivalent à un caractère (ex. ".-", "--..", "/").
 * @return Caractère décodé ou '#' si inconnu.
 */
char morseToChar(const std::string& code);

/**
 * @brief Met en majuscule un caractère.
 * @param c Caractère d'entrée.
 * @return Caractère en majuscule s'il était en minuscule, sinon inchangé.
 */
char toUpper(char c);

#endif //PRG1_LABO06_TITANIC_MORSEIO_H
