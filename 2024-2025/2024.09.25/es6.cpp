#include <iostream>
using namespace std;

void inserimento(int &n) {

    do {

        cin >> n;
    } while (n <= 0);
}

void visualizzazione(int nMag, int cMulti7, float mMulti4) {

    cout << "Il numero maggiore inserito: " << nMag << endl;
    cout << "Il numero dei numeri multipli di 7 inseriti: " << cMulti7 << endl;
    cout << "La media dei numeri multipli di 4 inseriti: " << mMulti4 << endl;
}

int main() {

    int n, i, nMag, cMulti7 = 0, cMulti4 = 0, sommaMulti4 = 0;
    float mMulti4;

    cout << "Inserire 56 numeri interi positivi" << endl;

    for (i = 0; i < 56; i++) {

        inserimento(n);

        if (i == 0)
            nMag = n;

        if (n > nMag)
            nMag = n;
        
        if (n % 7 == 0)
            cMulti7++;

        if (n % 4 == 0) {

            cMulti4++;
            sommaMulti4 += n;
        }
    }

    mMulti4 = (float)sommaMulti4 / cMulti4;

    visualizzazione(nMag, cMulti7, mMulti4);

    system("pause");
    return 0;
}