#include <string>
#include "traducteurMorse.h"

constexpr std::string morse_A = ".-";
constexpr std::string morse_B = "-...";
constexpr std::string morse_C = "-.-.";
constexpr std::string morse_D = "-..";
constexpr std::string morse_E = ".";
constexpr std::string morse_F = "..-.";
constexpr std::string morse_G = "--.";
constexpr std::string morse_H = "....";
constexpr std::string morse_I = "..";
constexpr std::string morse_J = ".---";
constexpr std::string morse_K = "-.-";
constexpr std::string morse_L = ".-..";
constexpr std::string morse_M = "--";
constexpr std::string morse_N = "-.";
constexpr std::string morse_O = "---";
constexpr std::string morse_P = ".--.";
constexpr std::string morse_Q = "--.-";
constexpr std::string morse_R = ".-.";
constexpr std::string morse_S = "...";
constexpr std::string morse_T = "-";
constexpr std::string morse_U = "..-";
constexpr std::string morse_V = "...-";
constexpr std::string morse_W = ".--";
constexpr std::string morse_X = "-..-";
constexpr std::string morse_Y = "-.--";
constexpr std::string morse_Z = "--..";
constexpr std::string morse_et_commercial = ".-...";
constexpr std::string morse_apostrophe = ".----.";
constexpr std::string morse_At = ".--.-."; //@
constexpr std::string morse_paranthese_droite = "-.--.-";
constexpr std::string morse_paranthese_gauche = "-.--.";
constexpr std::string morse_deux_points = "---...";
constexpr std::string morse_virgule = "--..--";
constexpr std::string morse_egal = "-...-";
constexpr std::string morse_point_exclamation = "-.-.--";
constexpr std::string morse_point = ".-.-.-";
constexpr std::string morse_moins = "-....-";
constexpr std::string morse_plus = ".-.-.";
constexpr std::string morse_guillemets = ".-..-.";
constexpr std::string morse_point_d_interrogation = "..--..";
constexpr std::string morse_slash = "-..-.";
constexpr std::string morse_zero = "-----";
constexpr std::string morse_un = ".----";
constexpr std::string morse_deux = "..---";
constexpr std::string morse_trois = "...--";
constexpr std::string morse_quatre = "....-";
constexpr std::string morse_cinq = ".....";
constexpr std::string morse_six = "-....";
constexpr std::string morse_sept = "--...";
constexpr std::string morse_huit = "---..";
constexpr std::string morse_neuf = "----.";
constexpr std::string morse_espace = " / ";

/// Transforme un caractère de l'alphabet passé en paramètre en sa valeur morse
/// @param c le caractère à traduire en morse
/// @return le caractère en morse
std::string encodeCaractere(char c) {
    switch (c) {
        case 'A': return morse_A;
        case 'B': return morse_B;
        case 'C': return morse_C;
        case 'D': return morse_D;
        case 'E': return morse_E;
        case 'F': return morse_F;
        case 'G': return morse_G;
        case 'H': return morse_H;
        case 'I': return morse_I;
        case 'J': return morse_J;
        case 'K': return morse_K;
        case 'L': return morse_L;
        case 'M': return morse_M;
        case 'N': return morse_N;
        case 'O': return morse_O;
        case 'P': return morse_P;
        case 'Q': return morse_Q;
        case 'R': return morse_R;
        case 'S': return morse_S;
        case 'T': return morse_T;
        case 'U': return morse_U;
        case 'V': return morse_V;
        case 'W': return morse_W;
        case 'X': return morse_X;
        case 'Y': return morse_Y;
        case 'Z': return morse_Z;
        case '&': return morse_et_commercial;
        case '\'': return morse_apostrophe;
        case '@': return morse_At;
        case ')': return morse_paranthese_droite;
        case '(': return morse_paranthese_gauche;
        case ':': return morse_deux_points;
        case ',': return morse_virgule;
        case '=': return morse_egal;
        case '!': return morse_point_exclamation;
        case '.': return morse_point;
        case '-': return morse_moins;
        case '+': return morse_plus;
        case '"': return morse_guillemets;
        case '?': return morse_point_d_interrogation;
        case '/': return morse_slash;
        case '0': return morse_zero;
        case '1': return morse_un;
        case '2': return morse_deux;
        case '3': return morse_trois;
        case '4': return morse_quatre;
        case '5': return morse_cinq;
        case '6': return morse_six;
        case '7': return morse_sept;
        case '8': return morse_huit;
        case '9': return morse_neuf;
        case ' ': return morse_espace;
        default: return " ";
    }
}

/// Traduit le morse en caractère
/// @param s le string correspondant a une lettre morse
/// @return le caractère correspondant au morse reçu
char decodeCaractere(const std::string& s) {
    if (s==morse_A) return 'A';
    if (s==morse_B) return 'B';
    if (s==morse_C) return 'C';
    if (s==morse_D) return 'D';
    if (s==morse_E) return 'E';
    if (s==morse_F) return 'F';
    if (s==morse_G) return 'G';
    if(s==morse_H) return 'H';
    if (s==morse_I) return 'I';
    if (s==morse_J) return 'J';
    if (s==morse_K) return 'K';
    if (s==morse_L) return 'L';
    if (s==morse_M) return'M'  ;
    if(s==morse_N) return 'N';
    if(s==morse_O) return 'O';
    if(s==morse_P) return 'P';
    if(s==morse_Q) return 'Q';
    if(s==morse_R) return 'R';
    if(s==morse_S) return 'S';
    if(s==morse_T) return 'T';
    if(s==morse_U) return 'U';
    if(s==morse_V) return 'V';
    if(s==morse_W) return 'W';
    if(s==morse_X) return 'X';
    if(s==morse_Y) return 'Y';
    if(s==morse_Z) return 'Z';
    if(s==morse_et_commercial) return '&';
    if(s==morse_apostrophe) return '\'';
    if(s==morse_At) return '@';
    if(s==morse_paranthese_droite) return ')';
    if(s==morse_paranthese_gauche) return '(';
    if(s==morse_deux_points) return ';';
    if(s==morse_virgule) return ',';
    if(s==morse_egal) return '=';
    if(s==morse_point_exclamation) return '!';
    if(s==morse_point) return '.';
    if(s==morse_moins) return '-';
    if(s==morse_plus) return '+';
    if(s==morse_guillemets) return '"';
    if(s==morse_point_d_interrogation) return '?';
    if(s==morse_slash) return '/';
    if (s==morse_zero) return '0';
    if (s==morse_un) return '1';
    if (s==morse_deux) return '2';
    if (s==morse_trois) return '3';
    if (s==morse_quatre) return '4';
    if (s==morse_cinq) return '5';
    if (s==morse_six) return '6';
    if (s==morse_sept) return '7';
    if (s==morse_huit) return '8';
    if (s==morse_neuf) return '9';
    return ' ';
}
