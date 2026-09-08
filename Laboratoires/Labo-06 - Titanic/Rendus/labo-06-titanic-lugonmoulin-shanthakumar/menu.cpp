#include "menu.h"

void reset_input() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int ask_choice_1_2() {
    int choice;
    while (true) {
        std::cout << "This program ..." << std::endl
             << encode << " - encode" << std::endl
             << decode << " - decode" << std::endl
             << "your choice [" << encode << "-" << decode << "] :";

        std::cin >> choice;

        // Si l'utilisateur tape autre chose qu'un entier on réinitialise et on redemande.
        if (std::cin.fail() || (choice != encode && choice != decode)) {
            reset_input();
            std::cout << "Choix invalide, reessaye.\n\n";
        } else {
            reset_input();  // retire le '\n' restant avant un futur getline()
            return choice;
        }
    }
}

bool ask_continue() {
    char response;
    while (true) {
        std::cout << "continue [" << YES << "/" << NO << "] :";
        std::cin >> response;

        if (std::cin.fail()) {  // saisie impossible on réinitialise et on repose la question
            reset_input();
            continue;
        }

        if (response == YES || response == yes) {
            reset_input();
            return true;
        }
        if (response == NO || response == no) {
            reset_input();
            return false;
        }

        // Si un autre caractère on redemande
        reset_input();
    }
}