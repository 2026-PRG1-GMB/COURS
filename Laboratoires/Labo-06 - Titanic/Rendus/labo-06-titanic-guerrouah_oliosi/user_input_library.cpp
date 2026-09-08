#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#include "user_input_library.h"

using namespace std;

int user_input_int(const string& msg);
char user_input_char(const string& msg);
string user_input_string(const string& msg);

int user_input_int(const string& msg) {
	int valeur;
	//on demande jusqu'à ce que l'utilisateur entre une donnée correcte
	while (true) {
		cout << msg;
		if (cin>>valeur) {
			//vide tout ce qui reste dans le buffer cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return valeur;
		}
		//si la valeur n'est pas bonne, on réinitialise l'état de cin et on le vide
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

char user_input_char(const string& msg) {
	char c;
	//on demande jusqu'à ce que l'utilisateur entre une donnée correcte
	while (true) {
		cout << msg;
		//on ne demande que 1 caractère sinon on accepte pas
		if (std::cin >> c && (std::cin.peek()==EOF || std::cin.peek()=='\r' || std::cin.peek()=='\n')) {
			//vide tout ce qui reste dans le buffer cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return c;
		}
		//si la valeur n'est pas bonne, on réinitialise l'état de cin et on le vide
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

string user_input_string(const string& msg) {
	string s;
	cout << msg;
	//on demande jusqu'à ce que l'utilisateur entre une donnée correcte
	while (true) {
		if (cin>>s) {
			//vide tout ce qui reste dans le buffer cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return s;
		}
		//si la valeur n'est pas bonne, on réinitialise l'état de cin et on le vide
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}