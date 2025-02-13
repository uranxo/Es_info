#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int &nMag, int &cPar, int &cDisp, int &sPar) {

    int i = 0, n;

    do {

        n = rand() % 111 + 13;

        if (n > nMag)
            nMag = n;

        if (n % 2 == 0) {

            cPar++;
            sPar += n;
        }

        if (n % 2 != 0)
            cDisp++;

        i++;
    } while (i < 10);
}

void visualizzazione(int nMag, int mPar, float percDisp) {

    cout << "Il numero maggiore generato: " << nMag << endl;
    cout << "La media dei numeri pari generati: " << mPar << endl;
    cout << "La percentuale dei numeri dispari generati: " << percDisp << "%" << endl;
}

int main() {

    int nMag = 13, cPar = 0, cDisp = 0, sPar = 0;
    float mPar, percDisp;
    srand(time(NULL));

    generazione(nMag, cPar, cDisp, sPar);

    mPar = (float)sPar / cPar;
    percDisp = (float)cDisp / 10 * 100;

    visualizzazione(nMag, mPar, percDisp);

    system("pause");
    return 0;
}