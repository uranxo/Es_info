#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[11], pLungMag = "";
    int i = 0, lung, lungMag;
    bool scambio;

    cout << "Inserire 11 parole di almeno 3 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 3);
        
        if (i == 0) {

            pLungMag = parole[i];
            lungMag = parole[i].length();
        }
        if (parole[i].length() > lungMag) {

            pLungMag = parole[i];
            lungMag = parole[i].length();
        }
        if (parole[i].length() == lungMag)
            pLungMag += " " + parole[i];

        i++;
    } while (i < 11);

    i = 0;

    do {

        i = 0;
        scambio = false;

        do {

            if (parole[i].length() > parole[i + 1].length()) {

                parole[i].swap(parole[i + 1]);
                scambio = true;
            }

            i++;
        } while (i < 11 - 1);
    } while (scambio == true);

    cout << "La/e parola/e piu' lunga/e e' " << pLungMag << endl;

    system("pause");
    return 0;
}