#ifndef PRG1_LABO06_TITANIC_CARACTERE_H
#define PRG1_LABO06_TITANIC_CARACTERE_H

/**
 * Vérifie si un caractère est un chiffre (0-9).
 * @param caractere Le caractère à vérifier.
 * @return true si le caractère est un chiffre, false sinon.
 */
bool estChiffre(char caractere);

/**
 * Vérifie si un caractère est une lettre majuscule (A-Z).
 * @param caractere Le caractère à vérifier.
 * @return true si le caractère est une lettre majuscule, false sinon.
 */
bool estLettreMajuscule(char caractere);

/**
 * Vérifie si un caractère est une lettre minuscule (a-z).
 * @param caractere Le caractère à vérifier.
 * @return true si le caractère est une lettre minuscule, false sinon.
 */
bool estLettreMinuscule(char caractere);

/**
 * Vérifie si un caractère est une lettre (majuscule ou minuscule).
 * Ne prends pas en compte les lettres accentuées ou autres alphabets.
 * @param caractere Le caractère à vérifier.
 * @return true si le caractère est une lettre, false sinon.
 */
bool estLettre(char caractere);

/**
 * Convertit une lettre minuscule en majuscule.
 * Si le caractère n'est pas une lettre minuscule, il est retourné tel quel.
 * Cette fonction ne gère pas les lettres accentuées ou autres alphabets.
 * @param caractere Le caractère à convertir.
 * @return Le caractère en majuscule si c'était une minuscule, sinon le caractère original.
 */
char majuscule(char caractere);

#endif //PRG1_LABO06_TITANIC_CARACTERE_H
