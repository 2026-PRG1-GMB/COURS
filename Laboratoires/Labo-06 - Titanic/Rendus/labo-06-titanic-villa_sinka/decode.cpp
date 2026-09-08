#include "decode.h"

using namespace std;

string decode(const string &message) {
    string decoded_message;
    string current_letter;
    string message_lengh = message + ' ';

    //Gestion de decodage de Morse au lettres
    for (unsigned int i = 0 ; i < message_lengh.length(); i++) {
        if (message_lengh[i] != ' ') {
            current_letter += message_lengh[i];
        } else if (current_letter == "/") {
            decoded_message += " ";
            current_letter = "";
        } else {
            if (current_letter == ".-") {
                decoded_message += "A";
                current_letter = "";
            } else if (current_letter == "-...") {
                decoded_message += "B";
                current_letter = "";
            } else if (current_letter == "-.-.") {
                decoded_message += "C";
                current_letter = "";
            } else if (current_letter == "-..") {
                decoded_message += "D";
                current_letter = "";
            } else if (current_letter == ".") {
                decoded_message += "E";
                current_letter = "";
            } else if (current_letter == "..-.") {
                decoded_message += "F";
                current_letter = "";
            } else if (current_letter == "--.") {
                decoded_message += "G";
                current_letter = "";
            } else if (current_letter == "....") {
                decoded_message += "H";
                current_letter = "";
            } else if (current_letter == "..") {
                decoded_message += "I";
                current_letter = "";
            } else if (current_letter == ".---") {
                decoded_message += "J";
                current_letter = "";
            } else if (current_letter == "-.-") {
                decoded_message += "K";
                current_letter = "";
            } else if (current_letter == ".-..") {
                decoded_message += "L";
                current_letter = "";
            } else if (current_letter == "--") {
                decoded_message += "M";
                current_letter = "";
            } else if (current_letter == "-.") {
                decoded_message += "N";
                current_letter = "";
            } else if (current_letter == "---") {
                decoded_message += "O";
                current_letter = "";
            } else if (current_letter == ".--.") {
                decoded_message += "P";
                current_letter = "";
            } else if (current_letter == "--.-") {
                decoded_message += "Q";
                current_letter = "";
            } else if (current_letter == ".-.") {
                decoded_message += "R";
                current_letter = "";
            } else if (current_letter == "...") {
                decoded_message += "S";
                current_letter = "";
            } else if (current_letter == "-") {
                decoded_message += "T";
                current_letter = "";
            } else if (current_letter == "..-") {
                decoded_message += "U";
                current_letter = "";
            } else if (current_letter == "...-") {
                decoded_message += "V";
                current_letter = "";
            } else if (current_letter == ".--") {
                decoded_message += "W";
                current_letter = "";
            } else if (current_letter == "-..-") {
                decoded_message += "X";
                current_letter = "";
            } else if (current_letter == "-.--") {
                decoded_message += "Y";
                current_letter = "";
            } else if (current_letter == "--..") {
                decoded_message += "Z";
                current_letter = "";
            } else if (current_letter == "-----") {
                decoded_message += "0";
                current_letter = "";
            } else if (current_letter == ".----") {
                decoded_message += "1";
                current_letter = "";
            } else if (current_letter == "..---") {
                decoded_message += "2";
                current_letter = "";
            } else if (current_letter == "...--") {
                decoded_message += "3";
                current_letter = "";
            } else if (current_letter == "....-") {
                decoded_message += "4";
                current_letter = "";
            } else if (current_letter == ".....") {
                decoded_message += "5";
                current_letter = "";
            } else if (current_letter == "-....") {
                decoded_message += "6";
                current_letter = "";
            } else if (current_letter == "--...") {
                decoded_message += "7";
                current_letter = "";
            } else if (current_letter == "---..") {
                decoded_message += "8";
                current_letter = "";
            } else if (current_letter == "----.") {
                decoded_message += "9";
                current_letter = "";
            } else if (current_letter == ".-...") {
                decoded_message += "&";
                current_letter = "";
            } else if (current_letter == ".----.") {
                decoded_message += "'";
                current_letter = "";
            } else if (current_letter == ".--.-.") {
                decoded_message += "@";
                current_letter = "";
            } else if (current_letter == "-.--.-") {
                decoded_message += ")";
                current_letter = "";
            } else if (current_letter == "-.--.") {
                decoded_message += "(";
                current_letter = "";
            } else if (current_letter == "---...") {
                decoded_message += ":";
                current_letter = "";
            } else if (current_letter == "--..--") {
                decoded_message += ",";
                current_letter = "";
            } else if (current_letter == "-...-") {
                decoded_message += "=";
                current_letter = "";
            } else if (current_letter == "-.-.--") {
                decoded_message += "!";
                current_letter = "";
            } else if (current_letter == ".-.-.-") {
                decoded_message += ".";
                current_letter = "";
            } else if (current_letter == "-....-") {
                decoded_message += "-";
                current_letter = "";
            } else if (current_letter == "-..-") {
                decoded_message += "x";
                current_letter = "";
            } else if (current_letter == "----- -..-. -----") {
                decoded_message += "%";
                current_letter = "";
            } else if (current_letter == ".-.-.") {
                decoded_message += "+";
                current_letter = "";
            } else if (current_letter == ".-..-.") {
                decoded_message += '"';
                current_letter = "";
            } else if (current_letter == "..--..") {
                decoded_message += "?";
                current_letter = "";
            } else if (current_letter == "-..-.") {
                decoded_message += "/";
                current_letter = "";
            }
        }
    }
    return decoded_message;
}
