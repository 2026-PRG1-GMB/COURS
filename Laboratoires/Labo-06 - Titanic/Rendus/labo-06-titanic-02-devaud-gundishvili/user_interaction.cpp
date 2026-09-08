/// Labo 06
/// User interaction functions
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#include <iostream>
#include <ostream>
#include <string>
#include <limits>

using namespace std;

/// Prototype(s) of private function(s)
bool cin_fail_clear();

/// Function to ask a question with two possible char answers, and return the chosen answer
/// @param question [reference] question to ask the user, don't need to add space at the end
/// @param option1 first answer option (char)
/// @param option2 second answer option (char)
/// @param separator when displaying options, the separator between option1 and option2
/// @return The chosen option (option1 or option2)
char ask_two_choice(const string& question, const char option1, const char option2, const char separator) {
    char answer;
    bool valid = false;

    do {
        cout << question << " [" << option1 << separator << option2 << "] :";

        if (cin >> answer) {
            valid = toupper(answer) == toupper(option1) || toupper(answer) == toupper(option2);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin_fail_clear();
            valid = false;
        }
    } while (!valid);

    return toupper(answer) == toupper(option1) ? option1 : option2;
}

/// Function to ask a question and get a string answer from the user
/// @param question [reference] question to ask the user, don't need to add space at the end
/// @return The answer string. Raw input from the user
string ask_string(const string& question) {
    string answer;

    do {
        cout << question << " :";
        getline(cin, answer);
    } while (cin_fail_clear());

    return answer;
}

/// [Private] Clears cin error flags and ignores the rest of the line if cin is in fail state
/// @return True if cin was in fail state and has been cleared, false otherwise
bool cin_fail_clear() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return true;
    }
    return false;
}
