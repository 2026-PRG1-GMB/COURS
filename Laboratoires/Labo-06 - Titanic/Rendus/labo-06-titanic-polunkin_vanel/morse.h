/*
===============================================================================
* file morse.h
* version 1.0.0
* author Cédrick Vanel TCHINDA FEZE
* author POLUNKIN Michel
* date : 29.10.2025
* description : declaration of functions for morse code conversion logic.
===============================================================================
*/

#ifndef MORSE_H
#define MORSE_H

#include <string>
#include <fstream>

constexpr char space = ' ';
constexpr char dot = '.';
constexpr char hyphen = '-';

/**
* @brief Converts an integer value to its corresponding character based on predefined *mappings.
*@param value The integer value representing a symbol according to a specific encoding scheme.
*@return The corresponding character for the input value. Returns a space ' ' for unknown values.
 */
char translate_from_morse(int value);

/**
 * @brief Decodes an encoded string message into its corresponding readable representation
 * using a mapping defined in the translate_from_morse function.
 *
 * @param message The encoded message string consisting of '.', '-', and ' ' characters,
 * representing symbols in a specific encoding scheme.
 * @param decoded_msg Reference to a string where the decoded Morse message will be stored.
 *
 */
void decode(const std::string& message, std::string& decoded_msg);


/**
 * @brief Encodes a text string into Morse code.
 * @param str The original string to encode.
 * @param converted_msg Reference to a string where the encoded Morse message will be stored.
 */
void encode(const std::string& str, std::string& converted_msg);

/**
 * @brief Translates a single character into its Morse code equivalent.
 * @param ch The character to translate.
 * @return A string representing the Morse code translation of the character.
 *         Returns "unknown_char" if the character cannot be translated.
 */
std::string translate_to_morse(char ch);


#endif //MORSE_H
