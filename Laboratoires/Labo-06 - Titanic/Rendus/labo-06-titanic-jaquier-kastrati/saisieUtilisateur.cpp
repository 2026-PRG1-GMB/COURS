#include "saisieUtilisateur.h"
#include <iostream>
#include <limits>

using namespace std;

constexpr char kBordureDebut = '[';
constexpr char kBordureFin = ']';
constexpr char kSeparateurBornes = '-';
constexpr char kSeparateurChoix = '/';
constexpr string kIndicateurDeSaisie = " : ";

/**
 * Réinitialise l'état de cin en cas d'erreur et vide le buffer d'entrée.
 */
void reinitialiserCin();

int saisieEntier(const string &message) {
    int valeur;
    bool saisieValide;

    do {
        cout << message << kIndicateurDeSaisie;
        cin >> valeur;
        saisieValide = !cin.fail();
        reinitialiserCin();
    } while (!saisieValide);

    return valeur;
}

int saisieEntierBornes(const string &message, const int min, const int max) {
    int valeur;

    do {
        valeur = saisieEntier(
            message + " " + kBordureDebut + to_string(min) + kSeparateurBornes + to_string(max) + kBordureFin);
    } while (valeur < min || valeur > max);

    return valeur;
}

string saisieChaine(const string &message) {
    string valeur;
    cout << message << kIndicateurDeSaisie;
    getline(cin, valeur);

    return valeur;
}

char saisieCaractere(const string &message) {
    char valeur;
    cout << message << kIndicateurDeSaisie;
    cin >> valeur;
    reinitialiserCin();

    return valeur;
}

bool saisieCaractereOuiNon(const std::string &message, char caractereOui, char caractereNon) {
    char valeur;
    do {
        valeur = saisieCaractere(
            message + " " + kBordureDebut + caractereOui + kSeparateurChoix + caractereNon + kBordureFin);

        if (valeur == caractereOui) {
            return true;
        }
        if (valeur == caractereNon) {
            return false;
        }
    } while (true);
}

void reinitialiserCin() {
    if (cin.fail()) {
        cin.clear();
    }
    //On vide le buffer de cin même si cin n'a pas échoué. Pour éviter des problèmes
    //lors de la saisie suivante (à cause des espaces ou retours à la ligne restant dans le buffer)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
