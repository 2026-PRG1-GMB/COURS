#include <cstdlib>
#include <iostream>
#include "morseIO.h"
#include "utils.h"
using namespace std;
constexpr int encode_choice = 1;
constexpr int decode_choice = 2;
constexpr char restart_yes = 'Y';
constexpr char restart_no  = 'N';
constexpr string choiceMessage = "your choice";
constexpr string fileInMessage  = "file in  : ";
constexpr string fileOutMessage = "file out : ";

int choice;
char restart;

int main() {
    cout << "PRG1 - Laboratoire 06 : Titanic" << endl;

    cout << "This programme ...\n";
    cout << "\t1 - encode\n";
    cout << "\t2 - decode\n";

    do {
        choice = userChoiceInput(choiceMessage, encode_choice, decode_choice);

        // ask file names
        const string inFile  = enterFileName(fileInMessage);
        const string outFile = enterFileName(fileOutMessage);

        if (choice == encode_choice) { // encode
            writeTextToFile(encodeFile(inFile),outFile);
        } else if (choice == decode_choice) { // decode
            writeTextToFile(decodeFile(inFile),outFile);
        }
        restart = userRestartInput(restart_yes, restart_no); // restart choice

    } while (restart == restart_yes);
    return EXIT_SUCCESS;
}
