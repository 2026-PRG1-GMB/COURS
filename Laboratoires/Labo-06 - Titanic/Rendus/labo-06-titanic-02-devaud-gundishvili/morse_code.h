/// Labo 06
/// Morse code encoding and decoding functions (.h)
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#ifndef MORSE_CODE_H
#define MORSE_CODE_H

#include <string>

std::string encode_to_morse(const std::string& text_to_encode);

std::string decode_morse(const std::string& morse_text);

#endif
