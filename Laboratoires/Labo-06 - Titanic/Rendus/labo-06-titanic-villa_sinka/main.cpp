#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <limits>
#include "encode.h"
#include "decode.h"
#include "lecture.h"
#include "ecriture.h"

using namespace std;

int main() {
    int userChoice;
    bool userChoiceCorrectValue = false;
    bool continuePrograme = false;
    const string option_1 = "1 - encode ";
    const string option_2 = "2 - decode ";

    //Choix pour encoder ou decoder----------------------
    do {
        constexpr int wcol = 20;

        cout << "PRG1 - Laboratoire 06 : Titanic" << endl;
        cout << "This program ..." << endl;
        cout << right << setw(wcol) << option_1 <<endl;
        cout << right << setw(wcol) << option_2 <<endl;

        //séléction de l'option entre encoder et decoder
        do {
            cout << "your choice [1-2] : ";
            cin >> userChoice;

            if (userChoice == 1 || userChoice == 2) {
                userChoiceCorrectValue = true;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else {
                userChoiceCorrectValue = false;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (!userChoiceCorrectValue);

        //encode----------------------------------
        if (userChoice == 1) {
            string file_name;
            //lecture du fichier
            cout << "file in : " << endl;
            getline(cin, file_name);
            string const extracted_message = lecture(file_name);

            //ecriture du message
            string file_out_name;
            cout << "file out : " << endl;
            getline(cin, file_out_name);

            string const encoded_message = encode(extracted_message);
            ecriture(file_out_name,encoded_message);
        }

        //decodage----------------------------------
        else if (userChoice == 2) {
            string file_name;
            //lecture du fichier
            cout << "file in : " << endl;
            getline(cin, file_name);
            string const extracted_message = lecture(file_name);;

            //ecriture du message
            string file_out_name;
            cout << "file out : " << endl;
            getline(cin, file_out_name);

            string const decoded_message = decode(extracted_message);
            ecriture(file_out_name,decoded_message);
        }

        //boucle pour recommencer le programme
        char continueChoice;
        bool valid = false;
        do {
            cout << "continue [Y/N]: ";
            cin >> continueChoice;

            if (continueChoice == 'Y') {
                continuePrograme = true;
                valid = true;
            }
            else if (continueChoice == 'N') {
                continuePrograme = false;
                valid = true;
            }
            else {
                valid = false;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }while (!valid);

    }while (continuePrograme);//Boucle pour recommencer le code

    return EXIT_SUCCESS;
}