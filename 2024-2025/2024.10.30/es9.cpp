#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, lung;

    cout << "Inserire 30 parole di almeno 5 caratteri" << endl;

    while (i < 30) {

        do {

            cin >> parole[i];

            lung = parole[i].length();
        } while (lung < 5);

        i++;
    }
}

void determinazione(const string parole[], string &pLungMag) {

    int i = 0, lung, lungMag = 5;

    while (i < 30) {
        
        lung = parole[i].length();

        if (lung > lungMag) {

            lungMag = lung;
            pLungMag = parole[i];
        }

        if (lung == lungMag)
            pLungMag += " " + parole[i];

        i++;
    }
}

void visualizzazione(const string pLungMag) {

    cout << "Le parole di lunghezza maggiore: " << pLungMag << endl;
}

int main() {

    string parole[30], pLungMag = "";

    inserimento(parole);
    determinazione(parole, pLungMag);
    visualizzazione(pLungMag);

    system("pause");
    return 0;
}