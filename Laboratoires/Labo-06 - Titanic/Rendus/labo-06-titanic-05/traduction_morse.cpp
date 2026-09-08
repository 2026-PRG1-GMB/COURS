//
// Created by romai on 29.10.2025.
//
#include <string>
#include "traduction_morse.h"


int en_num(const std::string & str,const int point,const int tiret,const int slash) {
    int valeur = 0;
    for (size_t pos = 0; pos < str.length(); pos++) {
        if (str[pos] == '.') {
            valeur = (valeur * 10) + (point);
        }else if (str[pos] == '-') {
            valeur = (valeur * 10) + (tiret);
        }else if (str[pos] == '/') {
            valeur = (valeur * 10) + (slash);
        }
    }return valeur;
}

char lettre_morse_decode(const std::string& code) {
    int code_num = 0;
    code_num = en_num(code, 1, 2,3);    // on convertit un le character en nombre comme ça, c'est bien moins lourd à lire et ainsi optimise les comparaisons et nous permet d'utiliser un switch
    if (code_num <= 9999) {                           // toutes les lettres sont à moins de 5 signes en morse évite de faire 56 checks si on a un "/".
        switch (code_num) {                           // Ici, on avait le choix entre faire 56 constexpr ou mettre les valeurs en brut, mais étant donné qu'on aurait à le refaire pour l'autre fonction ça n'aiderait en rien.
            case 3:     return ' ';
            case 12:    return 'A';
            case 2111:  return 'B';
            case 2121:  return 'C';
            case 211:   return 'D';
            case 1:     return 'E';
            case 1121:  return 'F';
            case 221:   return 'G';
            case 1111:  return 'H';
            case 11:    return 'I';
            case 1222:  return 'J';
            case 212:   return 'K';
            case 1211:  return 'L';
            case 22:    return 'M';
            case 21:    return 'N';
            case 222:   return 'O';
            case 1221:  return 'P';
            case 2212:  return 'Q';
            case 121:   return 'R';
            case 111:   return 'S';
            case 2:     return 'T';
            case 112:   return 'U';
            case 1112:  return 'V';
            case 122:   return 'W';
            case 2112:  return 'X';
            case 2122:  return 'Y';
            case 2211:  return 'Z';
            default:    return '#';
        }
    }
    switch (code_num) {
        case 22222:     return '0';
        case 12222:     return '1';
        case 11222:     return '2';
        case 11122:     return '3';
        case 11112:     return '4';
        case 11111:     return '5';
        case 21111:     return '6';
        case 22111:     return '7';
        case 22211:     return '8';
        case 22221:     return '9';
        // case 11111111:  return '#'; // erreur dans le site donné en exemple, on peut le laisser en commentaire, car ça ira dans le default
        case 12111:     return '\'';
        case 122121:    return '@';
        case 212212:    return ')';
        case 21221:     return '(';
        case 222111:    return ':';
        case 221122:    return ',';
        case 21112:     return '=';
        case 212122:    return '!';
        case 121212:    return '.';
        case 211112:    return '-';
        case 12121:     return '+';
        case 121121:    return '"';
        case 112211:    return '?';
        case 21121:     return '/';
        default:        return '#';
    }
}

std::string lettre_morse_encode(const char lettre) {
    switch (lettre) {
        case ' ': return "/ ";
        case 'A': return ".- ";
        case 'B': return "-... ";
        case 'C': return "-.-. ";
        case 'D': return "-.. ";
        case 'E': return ". ";
        case 'F': return "..-. ";
        case 'G': return "--. ";
        case 'H': return ".... ";
        case 'I': return ".. ";
        case 'J': return ".--- ";
        case 'K': return "-.- ";
        case 'L': return ".-.. ";
        case 'M': return "-- ";
        case 'N': return "-. ";
        case 'O': return "--- ";
        case 'P': return ".--. ";
        case 'Q': return "--.- ";
        case 'R': return ".-. ";
        case 'S': return "... ";
        case 'T': return "- ";
        case 'U': return "..- ";
        case 'V': return "...- ";
        case 'W': return ".-- ";
        case 'X': return "-..- ";
        case 'Y': return "-.-- ";
        case 'Z': return "--.. ";
        case '0': return "----- ";
        case '1': return ".---- ";
        case '2': return "..--- ";
        case '3': return "...-- ";
        case '4': return "....- ";
        case '5': return "..... ";
        case '6': return "-.... ";
        case '7': return "--... ";
        case '8': return "---.. ";
        case '9': return "----. ";
        case '&': return ".-... ";
        case '\'': return ".----. ";
        case '@': return ".--.-. ";
        case ')': return "-.--.- ";
        case '(': return "-.--. ";
        case ':': return "---... ";
        case ',': return "--..-- ";
        case '=': return "-...- ";
        case '!': return "-.-.-- ";
        case '.': return ".-.-.- ";
        case '-': return "-....- ";
        case '+': return ".-.-. ";
        case '"': return ".-..-. ";
        case '?': return "..--.. ";
        case '/': return "-..-. ";
        default : return "........ ";    // erreur dans le site donné en exemple
    }
}

std::string ligne_morse_encode(const std::string& ligne) { // permet de mettre des phrases entières et de les convertir
    std::string ligne_encodee;
    for (size_t symbole = 0; symbole < ligne.length(); symbole++) {
        ligne_encodee += lettre_morse_encode(ligne[symbole]);
    }
    return ligne_encodee;
}

std::string ligne_morse_decode(const std::string& ligne) { // permet de mettre des phrases entières et de les convertir
    std::string ligne_decodee;
    std::string lettre_morse;
    for (size_t symbole = 0; symbole < ligne.length(); symbole++) {
        if (ligne[symbole] == ' ') { //isole les caractères
            ligne_decodee += lettre_morse_decode(lettre_morse);
            lettre_morse = "";
        } else {
            lettre_morse += ligne[symbole];
        }
        if (symbole+1 == ligne.length()) { //isole le dernier caratère qui n'a pas forcément de " " après
            ligne_decodee += lettre_morse_decode(lettre_morse);
            lettre_morse = "";
        }
    }
    return ligne_decodee;
}
