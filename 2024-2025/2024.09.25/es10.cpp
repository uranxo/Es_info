#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione (int n[], int &nMag, int &cpar, int &cDisp, int &sPar) {

    int i = 0;

    while (i < 10) {

        n[i] = rand() % 111 + 13;

        if (n[i] > nMag)
            nMag = n[i];

        if (n[i] % 2 == 0) {

            cpar++;
            sPar += n[i];
        }

        if (n[i] % 2 != 0)
            cDisp++;

        i++;
    }
}

void visualizzazione (int nMag, float mPar, float percDisp) {

    cout << "Il numero maggiore generato: " << nMag << endl;
    cout << "La media dei numeri pari generati: " << mPar << endl;
    cout << "La percentuale dei numeri dispari generati: " << percDisp << "%" << endl;
}

int main() {

    int n[10], nMag = 13, cpar = 0, cDisp = 0, sPar = 0;
    float mPar, percDisp;
    srand(time(NULL));

    generazione(n, nMag, cpar, cDisp, sPar);

    mPar = (float)sPar / cpar;
    percDisp = (float)cDisp / 10 * 100;

    visualizzazione(nMag, mPar, percDisp);

    system("pause");
    return 0;
}