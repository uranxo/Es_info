#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define NR 7
#define NC 9

void generazione(int n[][NC]) {

    int i = 0, j;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            n[i][j] = rand() % 208 - 75;

            j++;
        }

        i++;
    }
}

void determinazione(const int n[][NC], int &nMag, float &mPos, float &percNeg) {

    int i = 0, j, cPos = 0, cNeg = 0, sPos = 0;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            if (n[i][j] > nMag)
                nMag = n[i][j];

            if (n[i][j] > 0) {
                sPos += n[i][j];
                cPos++;
            }

            if (n[i][j] < 0)
                cNeg++;

            j++;
        }

        i++;
    }

    mPos = (float)sPos / cPos;
    percNeg = (float)cNeg / (NR * NC) * 100;
}

void visualizzazione(int nMag, float mPos, float percNeg) {

    cout << "Il numero maggiore generato: " << nMag << endl;
    cout << "La media dei numeri positivi generati: " << mPos << endl;
    cout << "La percentuale dei numeri negativi generati: " << percNeg << "%" << endl;
}

int main() {

    int n[NR][NC], nMag = -75;
    float mPos, percNeg;
    srand(time(NULL));

    generazione(n);
    determinazione(n, nMag, mPos, percNeg);
    visualizzazione(nMag, mPos, percNeg);

    system("pause");
    return 0;
}