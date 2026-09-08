#include "decode.h"

bool decode_file(const std::string& in_path, const std::string& out_path) {
    std::ifstream in;
    std::ofstream out;

    if (!open_streams(in_path, out_path, in, out)) return false;

    std::string token;

    // Lecture "token par token" séparée par des espaces
    while (in >> token) {
        if (token == "/")       // Séparateur de mots
            out << ' ';
        else
            out << morse_to_char(token);
    }

    close_streams(in, out);
    return true;
}