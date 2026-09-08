/// Labo 06
/// Morse code encoding and decoding functions
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#include <iostream>
#include <string>

using namespace std;

constexpr char error_char = '#'; //character used to represent an error
constexpr char separator_char = '/'; //character used for spaces in morse code

//prototypes of the functions
constexpr int string_hasher(const string& str);

char morse_to_char(const string& morse);

string char_to_morse(char character);

string encode_to_morse(const string& text);

string decode_morse(const string& morse_text);

/// Encodes a string of characters into a string of morse strings
/// @param text [reference] Text to encode into morse code,
/// does not function with lower case and special symbols or multiple lines
/// @return Returns the text encode into morse codes, spaces become a separator
string encode_to_morse(const string& text) {
    string encoded;

    for (const char c: text) {
        //if the char is not a space then translate it to morse and add one
        if (c != ' ') {
            encoded += char_to_morse(c) + " ";
        } else {
            //if it is a space, add the character for seperation
            encoded += separator_char;
            encoded += ' ';
        }
    }

    return encoded;
}

///Decodes a text written in morse code with points'.' and dashes '-' into readable text
/// @param morse_text Morse text to decode, letters are separated by spaces, spaces are represented by slashes
/// @return returns the decoded code as a text of one line
string decode_morse(const string& morse_text) {
    string decoded;

    for (size_t i = 0; i < morse_text.length(); ++i) {
        string morse_chars;

        //get a whole morse char
        for (; i < morse_text.length(); ++i) {
            //when at the end of the encoded character, exit the loop
            if (morse_text[i] == ' ') {
                break;
            }

            morse_chars += morse_text[i];
        }

        //get the decoded character
        if (morse_chars[0] != separator_char) {
            decoded += morse_to_char(morse_chars);
        } else {
            decoded += ' ';
        }
    }

    return decoded;
}

/// Hashes a string into a unique (for the program) integer
/// @param str String to hash
/// @return Returns the 'unique' hash value of the string
constexpr int string_hasher(const string& str) {
    int hash = 0;
    int base = 1;
    constexpr int coeff = 10;

    for (size_t i = 0; i < str.length(); ++i) {
        hash += static_cast<int>(str[i]) * base;
        base *= coeff;
    }

    return hash;
}

/// Decode a morse code character into a character
/// @param morse Morse to decode
/// @return Returns the character
char morse_to_char(const string& morse) {
    switch (string_hasher(morse)) {
        case string_hasher(".-"):       return 'A';
        case string_hasher("-..."):     return 'B';
        case string_hasher("-.-."):     return 'C';
        case string_hasher("-.."):      return 'D';
        case string_hasher("."):        return 'E';
        case string_hasher("..-."):     return 'F';
        case string_hasher("--."):      return 'G';
        case string_hasher("...."):     return 'H';
        case string_hasher(".."):       return 'I';
        case string_hasher(".---"):     return 'J';
        case string_hasher("-.-"):      return 'K';
        case string_hasher(".-.."):     return 'L';
        case string_hasher("--"):       return 'M';
        case string_hasher("-."):       return 'N';
        case string_hasher("---"):      return 'O';
        case string_hasher(".--."):     return 'P';
        case string_hasher("--.-"):     return 'Q';
        case string_hasher(".-."):      return 'R';
        case string_hasher("..."):      return 'S';
        case string_hasher("-"):        return 'T';
        case string_hasher("..-"):      return 'U';
        case string_hasher("...-"):     return 'V';
        case string_hasher(".--"):      return 'W';
        case string_hasher("-..-"):     return 'X';
        case string_hasher("-.--"):     return 'Y';
        case string_hasher("--.."):     return 'Z';
        case string_hasher("-----"):    return '0';
        case string_hasher(".----"):    return '1';
        case string_hasher("..---"):    return '2';
        case string_hasher("...--"):    return '3';
        case string_hasher("....-"):    return '4';
        case string_hasher("....."):    return '5';
        case string_hasher("-...."):    return '6';
        case string_hasher("--..."):    return '7';
        case string_hasher("---.."):    return '8';
        case string_hasher("----."):    return '9';
        case string_hasher("........"): return error_char;
        case string_hasher(".-..."):    return '&';
        case string_hasher(".----."):   return '\'';
        case string_hasher(".--.-."):   return '@';
        case string_hasher("-.--.-"):   return ')';
        case string_hasher("-.--."):    return '(';
        case string_hasher("---..."):   return ':';
        case string_hasher("--..--"):   return ',';
        case string_hasher("-...-"):    return '=';
        case string_hasher("-.-.--"):   return '!';
        case string_hasher(".-.-.-"):   return '.';
        case string_hasher("-....-"):   return '-';
        case string_hasher(".-.-."):    return '+';
        case string_hasher(".-..-."):   return '"';
        case string_hasher("..--.."):   return '?';
        case string_hasher("-..-."):    return '/';
        default:                               return error_char;
    }
}

/// Encode a character into its morse code equivalent
/// @param character Character to encode
/// @return Returns a text representing the character encoded in morse
string char_to_morse(const char character) {
        switch (character) {
        case 'A':           return ".-";
        case 'B':           return "-...";
        case 'C':           return "-.-.";
        case 'D':           return "-..";
        case 'E':           return ".";
 	    case 'F':           return "..-.";
 	    case 'G':           return "--.";
 	    case 'H':           return "....";
 	    case 'I':           return "..";
 	    case 'J':           return ".---";
 	    case 'K':           return "-.-";
 	    case 'L':           return ".-..";
 	    case 'M':           return "--";
        case 'N':           return "-.";
        case 'O':           return "---";
        case 'P':           return ".--.";
        case 'Q':           return "--.-";
        case 'R':           return ".-.";
        case 'S':           return "...";
        case 'T':           return "-";
        case 'U':           return "..-";
        case 'V':           return "...-";
        case 'W':           return ".--";
        case 'X':           return "-..-";
        case 'Y':           return "-.--";
        case 'Z':           return "--..";
        case '0':           return "-----";
        case '1':           return ".----";
        case '2':           return "..---";
        case '3':           return "...--";
        case '4':           return "....-";
        case '5':           return ".....";
        case '6':           return "-....";
        case '7':           return "--...";
        case '8':           return "---..";
        case '9':           return "----.";
        case error_char:    return "........";
        case '&':           return ".-...";
        case '\'':          return ".----.";
        case '@':           return ".--.-.";
        case ')':           return "-.--.-";
        case '(':           return "-.--.";
        case ':':           return "---...";
        case ',':           return "--..--";
        case '=':           return "-...-";
        case '!':           return "-.-.--";
        case '.':           return ".-.-.-";
        case '-':           return "-....-";
        case '*':           return "-..-";
        case '%':           return "-----";
        case '+':           return ".-.-.";
        case '"':           return ".-..-.";
        case '?':           return "..--..";
        case '/':           return "-..-.";
        default:            return "........";
    }
}
