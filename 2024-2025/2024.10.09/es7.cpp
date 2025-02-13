#include <iostream>
#include <string>
using namespace std;

void inserimento(string parola[]);
void determinazione (const string parola[], int &cPLMin, float &mL);
void visualizzazione(int cPLMin, float mL);

int main() {

    string parola[21];
    int cPLMin = 0;
    float mL;

    inserimento(parola);
    determinazione(parola, cPLMin, mL);
    visualizzazione(cPLMin, mL);

    system("pause");
    return 0;
}

void inserimento(string parola[]) {

    int i = 0;

    cout << "Inserire 21 parole" << endl;

    while (i < 21) {

        cin >> parola[i];

        i++;
    }
}

void determinazione (const string parola[], int &cPLMin, float &mL) {

    int i = 0, l, lMin, sL = 0;

    while (i < 21) {

        l = parola[i].length();

        if (i == 0) {

            lMin = l;
            cPLMin++;
        }
        
        if (l < lMin) {

            lMin = l;
            cPLMin = 1;
        }

        if (l == lMin)
            cPLMin++;

        sL += l;

        i++;
    }

    mL = (float)sL / 21;
}

void visualizzazione(int cPLMin, float mL) {

    cout << "Il numero di parole di lunghezza minore inserite: " << cPLMin << endl;
    cout << "La media delle lunghezze delle parole inserite: " << mL << endl;
}
