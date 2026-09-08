// Fichier : morse.cpp
// Description :
//      Fonctions et constantes pour la conversion entre caractères ASCII et code Morse
//      Contient les relations entre chaque caractère et son code Morse équivalent
//      Fichiers en clair contiennent des majuscules, chiffres et symboles uniquement.
//      Les caractères non reconnus sont remplacés par un espace.
// Source du code Morse : https://fr.wikipedia.org/wiki/Code_Morse_international

#include "morse.h"

//Constantes des lettres majuscules, chiffres et symboles en code Morse
const std::string a_morse = ".-";
const std::string b_morse = "-...";
const std::string c_morse = "-.-.";
const std::string d_morse = "-..";
const std::string e_morse = ".";
const std::string f_morse = "..-.";
const std::string g_morse = "--.";
const std::string h_morse = "....";
const std::string i_morse = "..";
const std::string j_morse = ".---";
const std::string k_morse = "-.-";
const std::string l_morse = ".-..";
const std::string m_morse = "--";
const std::string n_morse = "-.";
const std::string o_morse = "---";
const std::string p_morse = ".--.";
const std::string q_morse = "--.-";
const std::string r_morse = ".-.";
const std::string s_morse = "...";
const std::string t_morse = "-";
const std::string u_morse = "..-";
const std::string v_morse = "...-";
const std::string w_morse = ".--";
const std::string x_morse = "-..-";
const std::string y_morse = "-.--";
const std::string z_morse = "--..";
const std::string zero_morse = "-----";
const std::string un_morse = ".----";
const std::string deux_morse = "..---";
const std::string trois_morse = "...--";
const std::string quatre_morse = "....-";
const std::string cinq_morse = ".....";
const std::string six_morse = "-....";
const std::string sept_morse = "--...";
const std::string huit_morse = "---..";
const std::string neuf_morse = "----.";
const std::string et_commercial_morse = ".-...";    // &
const std::string apostrophe_morse = ".----.";      // '
const std::string arobase_morse = ".--.-.";         // @
const std::string parenthese_g_morse = "-.--.";     // (
const std::string parenthese_d_morse = "-.--.-";    // )
const std::string deux_points_morse = "---...";     // :
const std::string virgule_morse = "--..--";         // ,
const std::string egal_morse = "-...-";             // =
const std::string exclamation_morse = "-.-.--";     // !
const std::string point_morse = ".-.-.-";           // .
const std::string moins_morse = "-....-";           // -
const std::string plus_morse = ".-.-.";             // +
const std::string quotation_morse = ".-..-.";       // "
const std::string interrogation_morse = "..--..";   // ?
const std::string slash_morse = "-..-.";            // /
const std::string tiret_bas_morse = "..--.-";       // _
const std::string point_virgule_morse = "-.-.-.";   // ;
const std::string espace_morse = " ";

//Constantes des lettres majuscules, chiffres et symboles (ASCII)
constexpr char a_maj = 'A';
constexpr char b_maj = 'B';
constexpr char c_maj = 'C';
constexpr char d_maj = 'D';
constexpr char e_maj = 'E';
constexpr char f_maj = 'F';
constexpr char g_maj = 'G';
constexpr char h_maj = 'H';
constexpr char i_maj = 'I';
constexpr char j_maj = 'J';
constexpr char k_maj = 'K';
constexpr char l_maj = 'L';
constexpr char m_maj = 'M';
constexpr char n_maj = 'N';
constexpr char o_maj = 'O';
constexpr char p_maj = 'P';
constexpr char q_maj = 'Q';
constexpr char r_maj = 'R';
constexpr char s_maj = 'S';
constexpr char t_maj = 'T';
constexpr char u_maj = 'U';
constexpr char v_maj = 'V';
constexpr char w_maj = 'W';
constexpr char x_maj = 'X';
constexpr char y_maj = 'Y';
constexpr char z_maj = 'Z';
constexpr char zero = '0';
constexpr char un = '1';
constexpr char deux = '2';
constexpr char trois = '3';
constexpr char quatre = '4';
constexpr char cinq = '5';
constexpr char six = '6';
constexpr char sept = '7';
constexpr char huit = '8';
constexpr char neuf = '9';
constexpr char arobase = '@';
constexpr char et_commercial = '&';
constexpr char apostrophe = '\'';
constexpr char parenthese_d = ')';
constexpr char parenthese_g = '(';
constexpr char deux_points = ':';
constexpr char virgule = ',';
constexpr char egal = '=';
constexpr char exclamation = '!';
constexpr char point = '.';
constexpr char moins = '-';
constexpr char plus = '+';
constexpr char quotation = '"';
constexpr char interrogation = '?';
constexpr char slash = '/';
constexpr char point_virgule = ';';
constexpr char tiret_bas = '_';

///Convertit caractère en Morse
/// @param c Caractère ASCII à encoder
/// @return Code Morse équivalent ou un espace si non reconnu
std::string char_to_morse(char c) {

    //Transformer en majuscules avant de convertir en Morse
    c = (c >= 'a' && c <= 'z') ? static_cast<char>(c - ('a' - 'A')) : c; //static_cast proposé par CLion
    switch (c) {
        case a_maj: return a_morse;
        case b_maj: return b_morse;
        case c_maj: return c_morse;
        case d_maj: return d_morse;
        case e_maj: return e_morse;
        case f_maj: return f_morse;
        case g_maj: return g_morse;
        case h_maj: return h_morse;
        case i_maj: return i_morse;
        case j_maj: return j_morse;
        case k_maj: return k_morse;
        case l_maj: return l_morse;
        case m_maj: return m_morse;
        case n_maj: return n_morse;
        case o_maj: return o_morse;
        case p_maj: return p_morse;
        case q_maj: return q_morse;
        case r_maj: return r_morse;
        case s_maj: return s_morse;
        case t_maj: return t_morse;
        case u_maj: return u_morse;
        case v_maj: return v_morse;
        case w_maj: return w_morse;
        case x_maj: return x_morse;
        case y_maj: return y_morse;
        case z_maj: return z_morse;
        case zero: return zero_morse;
        case un: return un_morse;
        case deux: return deux_morse;
        case trois: return trois_morse;
        case quatre: return quatre_morse;
        case cinq: return cinq_morse;
        case six: return six_morse;
        case sept: return sept_morse;
        case huit: return huit_morse;
        case neuf: return neuf_morse;
        case et_commercial: return et_commercial_morse;
        case apostrophe: return apostrophe_morse;
        case arobase: return arobase_morse;
        case parenthese_d: return parenthese_d_morse;
        case parenthese_g: return parenthese_g_morse;
        case deux_points: return deux_points_morse;
        case virgule: return virgule_morse;
        case egal: return egal_morse;
        case exclamation: return exclamation_morse;
        case point: return point_morse;
        case moins: return moins_morse;
        case plus: return plus_morse;
        case quotation: return quotation_morse;
        case interrogation: return interrogation_morse;
        case slash: return slash_morse;
        case point_virgule: return point_virgule_morse;
        case tiret_bas: return tiret_bas_morse;
        default: return espace_morse;
    }
}

///Convertit code Morse en caractère
/// @param morse Code Morse à décoder
/// @return Caractère équivalent ou un espace si non reconnu
char morse_to_char(const std::string& morse) {

    if (morse == a_morse) return a_maj;
    else if (morse == b_morse) return b_maj;
    else if (morse == c_morse) return c_maj;
    else if (morse == d_morse) return d_maj;
    else if (morse == e_morse) return e_maj;
    else if (morse == f_morse) return f_maj;
    else if (morse == g_morse) return g_maj;
    else if (morse == h_morse) return h_maj;
    else if (morse == i_morse) return i_maj;
    else if (morse == j_morse) return j_maj;
    else if (morse == k_morse) return k_maj;
    else if (morse == l_morse) return l_maj;
    else if (morse == m_morse) return m_maj;
    else if (morse == n_morse) return n_maj;
    else if (morse == o_morse) return o_maj;
    else if (morse == p_morse) return p_maj;
    else if (morse == q_morse) return q_maj;
    else if (morse == r_morse) return r_maj;
    else if (morse == s_morse) return s_maj;
    else if (morse == t_morse) return t_maj;
    else if (morse == u_morse) return u_maj;
    else if (morse == v_morse) return v_maj;
    else if (morse == w_morse) return w_maj;
    else if (morse == x_morse) return x_maj;
    else if (morse == y_morse) return y_maj;
    else if (morse == z_morse) return z_maj;
    else if (morse == zero_morse) return zero ;
    else if (morse == un_morse) return un ;
    else if (morse == deux_morse) return deux ;
    else if (morse == trois_morse) return trois ;
    else if (morse == quatre_morse) return quatre ;
    else if (morse == cinq_morse) return cinq ;
    else if (morse == six_morse) return six ;
    else if (morse == sept_morse) return sept ;
    else if (morse == huit_morse) return huit ;
    else if (morse == neuf_morse) return neuf ;
    else if (morse == et_commercial_morse) return et_commercial ;
    else if (morse == apostrophe_morse) return apostrophe;
    else if (morse == arobase_morse) return arobase ;
    else if (morse == parenthese_d_morse) return parenthese_d ;
    else if (morse == parenthese_g_morse) return parenthese_g ;
    else if (morse == deux_points_morse) return deux_points ;
    else if (morse == virgule_morse) return virgule ;
    else if (morse == egal_morse) return egal ;
    else if (morse == exclamation_morse) return exclamation ;
    else if (morse == point_morse) return point ;
    else if (morse == moins_morse) return moins ;
    else if (morse == plus_morse) return plus ;
    else if (morse == quotation_morse) return quotation ;
    else if (morse == interrogation_morse) return interrogation ;
    else if (morse == slash_morse) return slash;
    else if (morse == point_virgule_morse) return point_virgule ;
    else if (morse == tiret_bas_morse) return tiret_bas ;
    else return espace;
}
