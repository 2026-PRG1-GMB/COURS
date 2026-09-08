#include "morseCode.h"


/* This function could allow using a switch when translating morse, this solution has been abandoned

// Converts the morse code into 1 and 0s
int morseToInt (const std::string& element)
{
    int intEquivalent = 0;
    for (size_t i = 0; i < element.length(); ++i)
    {
            // Using decimals doesn't work because 01 is the same as 1 -> we can use binary
            intEquivalent = (intEquivalent << 1 ) // Shifts all the bits by 1
                            | (element[i]== '-' ? 1 : 0); // We modify the lb depending on if it's '.' or '-'
    }
    return intEquivalent;
}*/


// Roundabout dictionary because of given rules forbidding it. Mode 1 decodes, mode 0 encodes
std::string morseDic(const bool& mode, const std::string& element)
{
    if (mode) // DECODE
{
    // In the readme, it's told that the / is used to separate words in morse code
    if (element == "/") return " ";

    // Letters
    if (element == ".-") return "A";
    if (element == "-...") return "B";
    if (element == "-.-.") return "C";
    if (element == "-..") return "D";
    if (element == ".") return "E";
    if (element == "..-.") return "F";
    if (element == "--.") return "G";
    if (element == "....") return "H";
    if (element == "..") return "I";
    if (element == ".---") return "J";
    if (element == "-.-") return "K";
    if (element == ".-..") return "L";
    if (element == "--") return "M";
    if (element == "-.") return "N";
    if (element == "---") return "O";
    if (element == ".--.") return "P";
    if (element == "--.-") return "Q";
    if (element == ".-.") return "R";
    if (element == "...") return "S";
    if (element == "-") return "T";
    if (element == "..-") return "U";
    if (element == "...-") return "V";
    if (element == ".--") return "W";
    if (element == "-..-") return "X";
    if (element == "-.--") return "Y";
    if (element == "--..") return "Z";

    // Digits
    if (element == "-----") return "0";
    if (element == ".----") return "1";
    if (element == "..---") return "2";
    if (element == "...--") return "3";
    if (element == "....-") return "4";
    if (element == ".....") return "5";
    if (element == "-....") return "6";
    if (element == "--...") return "7";
    if (element == "---..") return "8";
    if (element == "----.") return "9";

    // Special characters
    if (element == ".-...") return "&";
    if (element == ".----.") return "'";
    if (element == ".--.-.") return "@";
    if (element == "-.--.-") return ")";
    if (element == "-.--.") return "(";
    if (element == "---...") return ":";
    if (element == "--..--") return ",";
    if (element == "-...-") return "=";
    if (element == "-.-.--") return "!";
    if (element == ".-.-.-") return ".";
    if (element == "-....-") return "-";
    if (element == ".-.-.") return "+";
    if (element == "..--..") return "?";
    if (element == "-..-.") return "/";

    return "#ERROR#";
}

// ENCODE
switch (toupper(element[0]))
{
    // In the readme, it's told that the / is used to separate words in morse code
    case ' ': return "/";

    // Letters
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

    // Digits
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

    // Special characters
    case '&': return ".-...";
    case '\'': return ".----.";
    case '@': return ".--.-.";
    case ')': return "-.--.-";
    case '(': return "-.--.";
    case ':': return "---...";
    case ',': return "--..--";
    case '=': return "-...-";
    case '!': return "-.-.--";
    case '.': return ".-.-.-";
    case '-': return "-....-";
    case '+': return ".-.-.";
    case '?': return "..--..";
    case '/': return "-..-.";

    default: return "#ERROR#";
    }
}

// Encodes a string of letters and symbols into morse code
std::string encode(const std::string& message)
{
    std::string morseCode;
    for (const char c : message)
    {
        std::string s;
        s += c;
        morseCode.append(morseDic(0,s));
        morseCode.append(" ");
    }
    morseCode.pop_back();// Avoids having an extra empty space
    return morseCode;
}

// Decodes a string of morse code into letters and symbols
std::string decode(const std::string& morse)
{
    std::string message;
    std::string morseLetter;
    for (const char c : morse) {
            // Fills a string with the content of 1 letter at a time and translates it
            morseLetter += c;
            if (c == ' ') // Letter separation
            {
                morseLetter.pop_back();
                message.append(morseDic(1,morseLetter));
                morseLetter.clear();
            }
        }
        message.append(morseDic(1,morseLetter));
    return message;
}
