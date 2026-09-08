#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

// Writes text to a file (overwrites if it exists)
void writeTextToFile(const std::string& addContent, const std::string& filename) {
    ofstream fout(filename);// open file for writing
    if(!fout) {
        cerr<<"\nError in opening file: "<<filename<<endl;
    }
    fout<<addContent;// write content
    fout.close();
}

// Gets an integer from the user within [min, max]
int userChoiceInput(const string& inputMsg,const int min ,const int max) {
    int choice;
    do{
        cout << inputMsg << " [" << min << "-" << max << "]:";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// flush line
        }
    }while(choice < min || choice > max);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');// clear leftover chars
    return choice;
}

// Prompts until a non-empty filename is entered
string enterFileName(const string& fileToEnter) {
    string nom_fichier;
    do{
     cout << fileToEnter;
    getline(cin, nom_fichier);
    }
    while (nom_fichier.empty());
    return nom_fichier;

}

// Asks user to continue with a yes/no char YN
char userRestartInput(const char yes,const char no) {
    char restart;
    do{
        cout << "continue [" << yes << "/" << no << "] ";
        cin >> restart;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }while(restart != yes && restart != no);
    return restart;
}