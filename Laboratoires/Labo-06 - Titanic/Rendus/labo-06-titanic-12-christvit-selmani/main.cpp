#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include "morse_translator.hpp"
#include "file_managing.hpp"

using namespace std;
using namespace morse;
using namespace file;

/**
 * Manages user input for entering a file name
 *
 * @param message Message to show the user
 * @return The file name (string)
 **/
string read_file_name(const string &message) {
   string s;
   cout << left << std::setw(10) << message << ": ";
   getline(cin, s);
   cin.clear();
   return s;
}

/**
 * Asks the user to choose between two options by entering the corresponding character
 * The question is repeated until the answer is valid
 *
 * @param message The message to show the user
 * @param option_true The character representing the true option
 * @param option_false The character representing the false option
 * @param separator The separator between both options (because the example had a different one for both questions)
 * @return true if the user selected the true option
 *         false if the user selected the false option
 */
bool binary_choice(const string &message, char option_true, char option_false, char separator) {
   char choice;
   bool valid;

   do {
      cout << message << " [" << option_true << separator << option_false << "] : ";
      valid = (cin >> choice) && (choice == option_true || choice == option_false);

      if (!valid) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
   } while (!valid);

   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   cin.clear();

   return (choice == option_true);
}

/**
 * Encodes normal text to morse from an ifstream into an ofstream. Assumes both of the streams are opened and valid.
 * @param file_input the input file stream, with normal text.
 * @param file_output the output file stream, to translate in morse into.
 */
void encode(std::ifstream &file_input, std::ofstream &file_output) {
   char c;
   bool first = true;

   while (file_input.get(c)) {
      if (!first) file_output << ' '; // We add a space before every letter except the first

      std::string letter = letter_to_morse(c);
      file_output << letter;
      first = false;
   }
}

/**
 * Decodes morse text into normal text from an ifstream into an ofstream. Assumes both of the streams are opened and valid.
 * @param file_input the input file stream, with morse text.
 * @param file_output the output file stream, to translate in normal alphabet into.
 */
void decode(std::ifstream &file_input, std::ofstream &file_output) {
   string word_in_letters;

   string letter_in_morse;
   char c;
   char letter;

   while (file_input.get(c)) {
      switch (c) {
         case morse_letter_separator:
            // End of letter -> add it to the word
            letter = morse_to_letter(letter_in_morse);
            letter_in_morse = "";
            word_in_letters += letter;
            break;
         case morse_word_separator:
            // End of word -> write it and go to the next one
            file_output << word_in_letters << ' ';
            word_in_letters = "";
            file_input.get(c);
            break;
         default:
            letter_in_morse += c;
      }
   }
   letter = morse_to_letter(letter_in_morse);
   word_in_letters += letter;
   file_output << word_in_letters;
}

/**
 * Decides whether to encode or decode between morse and normal alphabet.
 * Assumes both of the streams are opened and valid, and closes them afterwards.
 * @param file_input the input file stream.
 * @param file_output the output file stream, to write on.
 * @param encoder whether to encode or decode. True = encode, false = decode.
 */
void translate_stream(std::ifstream &file_input, std::ofstream &file_output, bool encoder) {
   if (encoder) {
      encode(file_input, file_output);
   } else {
      decode(file_input, file_output);
   }

   file_input.close();
   file_output.close();
}


int main() {
   cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

   cout << "Choose the mode \n"
         << right << std::setw(15) << "1 - encode\n"
         << right << std::setw(15) << "2 - decode\n";

   bool encoder = binary_choice("your choice", '1', '2', '-');
   string file_in_name = read_file_name("file in");
   string file_out_name = read_file_name("file out");

   if (binary_choice("continue", 'Y', 'N', '/')) {
      std::ifstream file_input;
      std::ofstream file_output;

      open_file_input(file_input, file_in_name);
      open_file_output(file_output, file_out_name);

      translate_stream(file_input, file_output, encoder);
   }

   return EXIT_SUCCESS;
}
