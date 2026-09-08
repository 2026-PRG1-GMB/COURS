#include <string>
#include <cstdlib>
#include <fstream>
#include <cctype>

#include "morse_conversion_library.h"

using namespace std;

string char_to_morse(char ch);
char morse_to_char(const string& code);
void decode(ifstream &in_stream, ofstream &out_stream);
void encode(ifstream& in_stream, ofstream& out_stream);

const char morse_delimiter_letter = ' ';
const char morse_delimiter_word = '/';

//fonction de décodage, on récupère une référence de flux en paramètre
void decode(ifstream& in_stream, ofstream& out_stream) {
	//on itère toute la ligne jusqu'à la fin
	while (!in_stream.eof()) {
		//string pour une lettre
		string morse_characters;
		char c;
		//on récupère chaque caractère du flux un par un
		while (in_stream.get(c)) {
			if (c == morse_delimiter_letter) {
				break;
			}
			if (c == morse_delimiter_word){
				out_stream << " ";
				break;
			}
			morse_characters += c;
		}
		if (!morse_characters.empty()) {
			//on écrit dans le fichier à l'aide de la fonction dictionnaire
			out_stream << morse_to_char(morse_characters);
		}
	}
}

//fonction de décodage, on récupère une référence de flux en paramètre
void encode(ifstream& in_stream, ofstream& out_stream) {
	char c = 0;
	while (in_stream.get(c)) {
		if (c==' ') {
			out_stream << morse_delimiter_word;
		}else {
			//on écrit dans le fichier grâce à une fonction dictionnaire
			out_stream << char_to_morse(c);
		}
		//condition car on ne souhaite pas d'espace à la fin de la ligne en morse
		if (!in_stream.eof()) {
			out_stream << morse_delimiter_letter;
		}
	}
}


//fonction dictionnaire créée à l'aide de ChatGPT
string char_to_morse(char ch) {

	// Accented first (Latin-1 single bytes)
	switch (ch) {
		case 0xC1: /* Á */
		case 0xC0: /* À */
		case 0xC2: /* Â */
		case 0xC5: /* Å */
			return ".--.-";
		case 0xC4: /* Ä */
		case 0xC6: /* Æ */
			return ".-.-";
		case 0xC7: /* Ç */ return "-.-..";
		case 0xC8: /* È */ return ".-..-";
		case 0xC9: /* É */ return "..-..";
		case 0xD1: /* Ñ */ return "--.--";
		case 0xD6: /* Ö */ return "---.";
		case 0xDC: /* Ü */ return "..--";
		default: break;
	}

	// ASCII letters (normalize to uppercase)
	char c = static_cast<char>(std::toupper(ch));
	switch (c) {
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
		default: return "";
	}
}


//fonction dictionnaire créée à l'aide de ChatGPT
char morse_to_char(const string &code) {

	// Letters A–Z
	if (code == ".-") return 'A';
	if (code == "-...") return 'B';
	if (code == "-.-.") return 'C';
	if (code == "-..") return 'D';
	if (code == ".") return 'E';
	if (code == "..-.") return 'F';
	if (code == "--.") return 'G';
	if (code == "....") return 'H';
	if (code == "..") return 'I';
	if (code == ".---") return 'J';
	if (code == "-.-") return 'K';
	if (code == ".-..") return 'L';
	if (code == "--") return 'M';
	if (code == "-.") return 'N';
	if (code == "---") return 'O';
	if (code == ".--.") return 'P';
	if (code == "--.-") return 'Q';
	if (code == ".-.") return 'R';
	if (code == "...") return 'S';
	if (code == "-") return 'T';
	if (code == "..-") return 'U';
	if (code == "...-") return 'V';
	if (code == ".--") return 'W';
	if (code == "-..-") return 'X';
	if (code == "-.--") return 'Y';
	if (code == "--..") return 'Z';

	// Digits 0–9
	if (code == "-----") return '0';
	if (code == ".----") return '1';
	if (code == "..---") return '2';
	if (code == "...--") return '3';
	if (code == "....-") return '4';
	if (code == ".....") return '5';
	if (code == "-....") return '6';
	if (code == "--...") return '7';
	if (code == "---..") return '8';
	if (code == "----.") return '9';

	// Punctuation (ITU)
	if (code == ".-.-.-") return '.'; // period
	if (code == "--..--") return ','; // comma
	if (code == "..--..") return '?'; // question
	if (code == ".----.") return '\''; // apostrophe
	if (code == "-.-.--") return '!'; // exclamation
	if (code == "-..-.") return '/'; // slash
	if (code == "-.--.") return '('; // open parenthesis
	if (code == "-.--.-") return ')'; // close parenthesis
	if (code == ".-...") return '&'; // ampersand
	if (code == "---...") return ':'; // colon
	if (code == "-.-.-.") return ';'; // semicolon
	if (code == "-...-") return '='; // equals
	if (code == ".-.-.") return '+'; // plus
	if (code == "-....-") return '-'; // hyphen
	if (code == "..--.-") return '_'; // underscore
	if (code == ".-..-.") return '"'; // quotation mark
	if (code == "...-..-")return '$'; // dollar
	if (code == ".--.-.") return '@'; // at

	// Accented letters (International Morse → return Latin-1 uppercase)
	// Note: these are single-byte Latin-1 codes:
	//  Á(C1)  Ä(C4)  Ç(C7)  È(C8)  É(C9)  Ñ(D1)  Ö(D6)  Ü(DC)
	if (code == ".--.-") return '\xC1'; // Á  (also used for À/Â/Å in Morse)
	if (code == ".-.-") return '\xC4'; // Ä  (also used for Æ)
	if (code == "-.-..") return '\xC7'; // Ç
	if (code == ".-..-") return '\xC8'; // È
	if (code == "..-..") return '\xC9'; // É
	if (code == "--.--") return '\xD1'; // Ñ
	if (code == "---.") return '\xD6'; // Ö
	if (code == "..--") return '\xDC'; // Ü

	return '\0'; // unknown token
}
