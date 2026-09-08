/// Labo 06
/// Encode / Decode Morse Code main function
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#include "read_write.h"
#include "morse_code.h"
#include "user_interaction.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/// Main function of the program. Handles user interaction and calls encoding/decoding functions
/// @return EXIT_SUCCESS if the program didn't stop in the middle of execution
int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    constexpr char yes_char = 'Y';
    constexpr char no_char = 'N';

    do {
        constexpr char decode_char = '2';
        constexpr char encode_char = '1';

        // Propose the user to encode or decode options
        cout << "This program ..." << endl;
        cout << "\t\t " << encode_char << " - encode" << endl;
        cout << "\t\t " << decode_char << " - decode" << endl;

        // Ask the user their choice
        const char encode_decode_answer = ask_two_choice("your choice", encode_char, decode_char, '-');

        string file_input_path;
        string file_input_content;

        // Ask the user for the input file until a valid one is given (treated in read_file())
        do {
            file_input_path = ask_string("file in");
        } while (!read_file(file_input_path, file_input_content));

        string file_output_path;

        // Ask the user for the output file until the write_file() is successful
        do {
            file_output_path = ask_string("file out");
        } while (!write_file(file_output_path,
                             encode_decode_answer == encode_char
                                 ? encode_to_morse(file_input_content)
                                 : decode_morse(file_input_content)
        ));

        cout << endl;
        // Ask the user if they want to continue
    } while (yes_char == ask_two_choice("continue", yes_char, no_char));

    return EXIT_SUCCESS;
}
