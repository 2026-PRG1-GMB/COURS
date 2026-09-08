#include "encode.h"

bool encode_file(const std::string& in_path, const std::string& out_path) {
    std::ifstream in;
    std::ofstream out;

    if (!open_streams(in_path, out_path, in, out)) return false;

    char c;
    while (in.get(c)) {
        // Le fichier clair ne contient qu'une seule ligne au format du labo
        if (c == '\n' || c == '\r') continue;
        if (c == ' ' || c == '/') {     // Permet de séparer les mots par '/'
            out << "/ ";
            continue;
        }

        const char* code = char_to_morse(c);
        if (code != nullptr)            // Permet de séparer les codes par ' '
            out << code << ' ';
        else
            out << "..--.." << ' ';     // ' ' si caractère pas compris
    }

    close_streams(in, out);
    return true;
}