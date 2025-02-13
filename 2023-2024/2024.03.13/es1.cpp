#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[21];
    int i = 0, lung, pos, cCon = 0, cSe = 0;

    cout << "Inserire 21 parole di almeno 6 caratteri" << endl;

    while (i < 21) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 6);
        
        i++;
    }

    i = 0;

    while (i < 21) {

        lung = parole[i].length();

        while (lung - 1 >= 0) {

            parole[i].at(lung - 1) = tolower(parole[i].at(lung - 1));

            lung--;
        }

        i++;
    }

    i = 0;

    while (i < 21) {

        lung = parole[i].length();
        pos = parole[i].find("con");

        while (pos != string::npos) {

            cCon++;
            pos = parole[i].find("con", pos + 1);
        }

        i++;
    }

    i = 0;

    while (i < 21) {

        lung = parole[i].length();
        pos = parole[i].find("se");

        while (pos != string::npos) {

            cSe++;
            pos = parole[i].find("se", pos + 1);
        }

        i++;
    }

    cout << "Numero di 'con' contenuti all'interno delle parole inserite: " << cCon << endl;
    cout << "Numero di 'se' contenuti all'interno delle parole inserite: " << cSe << endl;

    system("pause");
    return 0;
}
