#include "fichier.h"

bool open_streams(const std::string& in_path,
                  const std::string& out_path,
                  std::ifstream& in,
                  std::ofstream& out) {
    in.open(in_path);                               // lecture
    out.open(out_path, std::ios::out);        // écriture (écrase)
    if (!in || !out) {
        std::cerr << "Erreur : impossible d'ouvrir le fichier.\n";
        return false;
    }
    return true;
}

void close_streams(std::ifstream& in, std::ofstream& out) {
    if (in.is_open())  in.close();
    if (out.is_open()) out.close();
}