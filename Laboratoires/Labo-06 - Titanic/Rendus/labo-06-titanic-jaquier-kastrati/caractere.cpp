#include "caractere.h"

bool estChiffre(const char caractere) {
    return caractere >= '0' && caractere <= '9';
}

bool estLettreMajuscule(const char caractere) {
    return caractere >= 'A' && caractere <= 'Z';
}

bool estLettreMinuscule(const char caractere) {
    return caractere >= 'a' && caractere <= 'z';
}

bool estLettre(const char caractere) {
    return estLettreMajuscule(caractere) || estLettreMinuscule(caractere);
}

char majuscule(const char caractere) {
    if (estLettreMinuscule(caractere)) {
        return static_cast<char>(caractere - ('a' - 'A'));
    }
    return caractere;
}
