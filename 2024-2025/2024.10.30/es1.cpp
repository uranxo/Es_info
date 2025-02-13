#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int n[]) {

    int i = 0;

    while (i < 25) {

        n[i] = rand() % 116 + 10;

        i++;
    }
}

void visualizzazione(const int n[], const int nPar[], const int nDisp[], int cPar, int cDisp) {

    int i = 0;

    cout << "I numeri generati:" << endl;

    while (i < 25) {

        cout << n[i] << endl;

        i++;
    }

    i = 0;

    cout << "I numeri pari generati:" << endl;

    while (i < cPar) {

        cout << nPar[i] << endl;

        i++;
    }

    i = 0;

    cout << "I numeri dispari generati:" << endl;

    while (i < cDisp) {

        cout << nDisp[i] << endl;

        i++;
    }
}

int main() {

    int n[25], nPar[25], nDisp[25], i = 0, cPar = 0, cDisp = 0;
    srand(time(NULL));

    generazione(n);

    while (i < 25) {

        if (n[i] % 2 == 0) {

            nPar[cPar] = n[i];
            cPar++;

        }
        
        else {

            nDisp[cDisp] = n[i];
            cDisp++;
        }

        i++;
    }

    visualizzazione(n, nPar, nDisp, cPar, cDisp);

    system("pause");
    return 0;
}