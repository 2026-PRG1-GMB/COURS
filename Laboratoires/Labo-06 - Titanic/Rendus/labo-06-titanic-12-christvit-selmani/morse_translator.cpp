#include "morse_translator.hpp"

// Private function to turn a character to uppercase if it's a lowercase letter
char charToUpper(char car) {
   constexpr int gap_lower_upper = 'a' - 'A';

   // Only if it's a lowercase letter from a to z, otherwise ignore
   if (car >= 'a' and car <= 'z') {
      car -= gap_lower_upper;
   }

   return car;
}

namespace morse {
   /**
    * Transforms a character in normal alphabet into morse
    *
    * @param c The character in normal alphabet we want to translate to morse
    * @return A string equivalent in morse
    */
   std::string letter_to_morse(char c) {
      c = charToUpper(c);

      switch (c) {
         // Letters A-Z
         case 'A': return ".-";
         case 'B': return "-...";
         case 'C': return "-.-.";
         case 'D': return "-..";
         case 'E': return ".";
         case 'F': return "..-.";
         case 'G': return "--.";
         case 'H': return "....";
         case 'I': return "..";
         case 'J': return ".---";
         case 'K': return "-.-";
         case 'L': return ".-..";
         case 'M': return "--";
         case 'N': return "-.";
         case 'O': return "---";
         case 'P': return ".--.";
         case 'Q': return "--.-";
         case 'R': return ".-.";
         case 'S': return "...";
         case 'T': return "-";
         case 'U': return "..-";
         case 'V': return "...-";
         case 'W': return ".--";
         case 'X': return "-..-";
         case 'Y': return "-.--";
         case 'Z': return "--..";

         // Numbers 0-9
         case '0': return "-----";
         case '1': return ".----";
         case '2': return "..---";
         case '3': return "...--";
         case '4': return "....-";
         case '5': return ".....";
         case '6': return "-....";
         case '7': return "--...";
         case '8': return "---..";
         case '9': return "----.";

         // Usual punctuation
         case '.': return ".-.-.-";
         case ',': return "--..--";
         case '?': return "..--..";
         case '\'': return ".----.";
         case '!': return "-.-.--";
         case '/': return "-..-.";
         case '(': return "-.--.";
         case ')': return "-.--.-";
         case '&': return ".-...";
         case ':': return "---...";
         case ';': return "-.-.-.";
         case '=': return "-...-";
         case '+': return ".-.-.";
         case '-': return "-....-";
         case '_': return "..--.-";
         case '"': return ".-..-.";
         case '$': return "...-..-";
         case '@': return ".--.-.";

         // Word separator
         case ' ': return "/";

         // Unknown character
         default: return "x";
      }
   }

   /**
    * Transforms a character in morse into normal alphabet
    * @param letter_in_morse The character in morse
    * @return A character equivalent in normal alphabet
    */
   char morse_to_letter(const std::string &letter_in_morse) {
      // Letters A–Z
      if (letter_in_morse == ".-") return 'A';
      if (letter_in_morse == "-...") return 'B';
      if (letter_in_morse == "-.-.") return 'C';
      if (letter_in_morse == "-..") return 'D';
      if (letter_in_morse == ".") return 'E';
      if (letter_in_morse == "..-.") return 'F';
      if (letter_in_morse == "--.") return 'G';
      if (letter_in_morse == "....") return 'H';
      if (letter_in_morse == "..") return 'I';
      if (letter_in_morse == ".---") return 'J';
      if (letter_in_morse == "-.-") return 'K';
      if (letter_in_morse == ".-..") return 'L';
      if (letter_in_morse == "--") return 'M';
      if (letter_in_morse == "-.") return 'N';
      if (letter_in_morse == "---") return 'O';
      if (letter_in_morse == ".--.") return 'P';
      if (letter_in_morse == "--.-") return 'Q';
      if (letter_in_morse == ".-.") return 'R';
      if (letter_in_morse == "...") return 'S';
      if (letter_in_morse == "-") return 'T';
      if (letter_in_morse == "..-") return 'U';
      if (letter_in_morse == "...-") return 'V';
      if (letter_in_morse == ".--") return 'W';
      if (letter_in_morse == "-..-") return 'X';
      if (letter_in_morse == "-.--") return 'Y';
      if (letter_in_morse == "--..") return 'Z';

      // Numbers 0–9
      if (letter_in_morse == "-----") return '0';
      if (letter_in_morse == ".----") return '1';
      if (letter_in_morse == "..---") return '2';
      if (letter_in_morse == "...--") return '3';
      if (letter_in_morse == "....-") return '4';
      if (letter_in_morse == ".....") return '5';
      if (letter_in_morse == "-....") return '6';
      if (letter_in_morse == "--...") return '7';
      if (letter_in_morse == "---..") return '8';
      if (letter_in_morse == "----.") return '9';

      // Punctuation
      if (letter_in_morse == ".-.-.-") return '.';
      if (letter_in_morse == "--..--") return ',';
      if (letter_in_morse == "..--..") return '?';
      if (letter_in_morse == ".----.") return '\'';
      if (letter_in_morse == "-.-.--") return '!';
      if (letter_in_morse == "-..-.") return '/';
      if (letter_in_morse == "-.--.") return '(';
      if (letter_in_morse == "-.--.-") return ')';
      if (letter_in_morse == ".-...") return '&';
      if (letter_in_morse == "---...") return ':';
      if (letter_in_morse == "-.-.-.") return ';';
      if (letter_in_morse == "-...-") return '=';
      if (letter_in_morse == ".-.-.") return '+';
      if (letter_in_morse == "-....-") return '-';
      if (letter_in_morse == "..--.-") return '_';
      if (letter_in_morse == ".-..-.") return '"';
      if (letter_in_morse == "...-..-") return '$';
      if (letter_in_morse == ".--.-.") return '@';

      // Word separator
      if (letter_in_morse == std::to_string(morse_word_separator))
         return morse_letter_separator;

      // Unknown character
      return 'x';
   }
}
