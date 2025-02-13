#include <iostream>
#include <string>
using namespace std;

int main() {

    const int N = 28;
    string parole[N], pMag[N];
    int i = 0, lung, lungMag, cPMag = 0;

    cout << "Inserire " << N << " parole di almeno 4 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);

        i++;
    } while (i < N);

    lungMag = parole[0].length();
    pMag[0] = parole[0];
    cPMag++;
    i = 0;

    do {

        if (parole[i].length() == lungMag) {

            pMag[cPMag] = parole[i];
            cPMag++;
        }
        if (parole[i].length() > lungMag) {

            do {

                pMag[cPMag - 1] = "";
                cPMag--;
            } while (cPMag > 0);

            lungMag = parole[i].length();
            pMag[0] = parole[i];
            cPMag++;
        }

        i++;
    } while (i < N);

    i = 0;
    
    cout << "Le parole di lunghezza maggiore sono:" << endl;

    do {

        cout << pMag[i] << endl;
        i++;
    } while (i < cPMag);

    system("pause");
    return 0;
}