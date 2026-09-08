#ifndef PRG1_LABO06_TITANIC_MORSE_TRANSLATOR_HPP
#define PRG1_LABO06_TITANIC_MORSE_TRANSLATOR_HPP
#include <string>

namespace morse {
   constexpr char morse_word_separator = '/';
   constexpr char morse_letter_separator = ' ';

   std::string letter_to_morse(char c);

   char morse_to_letter(const std::string &letter_in_morse);
}

#endif //PRG1_LABO06_TITANIC_MORSE_TRANSLATOR_HPP
