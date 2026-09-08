#ifndef MORSE_CODE_H
#define MORSE_CODE_H

// Originally written by Julian Vogel, 29.10.2025
// Last modified by : Julian Vogel, 31.10.2025
// DESCRIPTION :
// Library used for translating morse code

#include <string>

// Takes a one line message and returns its morse code version
std::string encode(const std::string& message);

// Takes a one line morse code and returns its translation
std::string decode(const std::string& morse);

#endif