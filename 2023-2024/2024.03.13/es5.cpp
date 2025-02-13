#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[21], pMin[21];
    int i = 0, lung, lungMin, cPMin = 0;

    cout << "Inserire 21 parole di almeno 5 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 5);

        i++;
    } while (i < 21);

    lungMin = parole[0].length();
    pMin[0] = parole[0];
    cPMin++;
    i = 0;

    do {

        if (parole[i].length() == lungMin) {

            pMin[cPMin] = parole[i];
            cPMin++;
        }
        if (parole[i].length() < lungMin) {

            do {

                pMin[cPMin - 1] = "";
                cPMin--;
            } while (cPMin > 0);

            lungMin = parole[i].length();
            pMin[0] = parole[i];
            cPMin++;
        }

        i++;
    } while (i < 21);

    i = 0;
    
    cout << "Le parole di lunghezza minore sono:" << endl;

    do {

        cout << pMin[i] << endl;
        i++;
    } while (i < cPMin);

    system("pause");
    return 0;
}