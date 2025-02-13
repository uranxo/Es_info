#include <iostream>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 24 parole di almeno 5 caratteri:" << endl;

    while (i < 24) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 5);

        i++;
    }
}

void determinazione(const string parole[], string pContA[], int &cPContA) {

    int i = 0, l;
    bool contA = false;

    while (i < 24) {

        l = parole[i].length();
        contA = false;

        while (l - 1 >= 0 || contA == false) {

            contA = false;

            if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
                contA = true;

            l--;
        }

        if (contA == true) {

            pContA[cPContA] = parole[i];
            cPContA++;
        }

        i++;
    }
}

void visualizzazione(const string pContA[], int cPContA) {

    int i = 0;

    cout << "Le parole inserite che contengono la lettera 'a':" << endl;

    while (i < cPContA) {

        cout << pContA[i] << endl;

        i++;
    }
}

int main() {

    string parole[24], pContA[24];
    int cPContA = 0;

    inserimento(parole);
    determinazione(parole, pContA, cPContA);
    visualizzazione(pContA, cPContA);

    system("pause");
    return 0;
}