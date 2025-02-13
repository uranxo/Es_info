#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NR = 61, NC = 61;

void generazione(int n[][NC]);
void determinazione(const int n[][NC], int &nMagDiagPrinc, float &mPosCorn2, float &percNegCorn1);
void visualizzazione(int nMadDiagPrinc, float mPosCorn2, float percNegCorn1);

int main() {

    int n[NR][NC], nMagDiagPrinc;
    float mPosCorn2, percNegCorn1;

    generazione(n);
    determinazione(n, nMagDiagPrinc, mPosCorn2, percNegCorn1);
    visualizzazione(nMagDiagPrinc, mPosCorn2, percNegCorn1);

    system("pause");
    return 0;
}

void generazione(int n[][NC]) {

    int i = 0, j;

    do {

        j = 0;

        do {

            n[i][j] = rand() % 1324 - 427;

            j++;
        } while (j < NC);

        i++;
    } while (i < NR);
}

void determinazione(const int n[][NC], int &nMagDiagPrinc, float &mPosCorn2, float &percNegCorn1) {

    int i = 0, j, cPosCorn2 = 0, cNegCorn1 = 0, sPosCorn2 = 0;

    do {

        if (n[i][i] > nMagDiagPrinc)
            nMagDiagPrinc = n[i][i];

        i++;
    } while (i < NR);

    // Determinazioni su cornice di ordine 2

    j = 2;

    do {

        if (n[2][j] > 0) {

            sPosCorn2 += n[2][j];
            cPosCorn2++;
        }

        if (n[(NR - 1) - 2][j] > 0) {

            sPosCorn2 += n[(NR - 1) - 2][j];
            cPosCorn2++;
        }

        j++;
    } while (j <= ((NC - 1) - 2));

    i = 3;

    do {

        if (n[i][2]) {

            sPosCorn2 += n[i][2];
            cPosCorn2++;
        }

        if (n[i][((NC - 1) - 2)] > 0) {

            sPosCorn2 += n[i][(NC - 1) - 2];
            cPosCorn2++;
        }

        i++;
    } while (i <= ((NR - 1) - 3));

    // Determinazioni su cornice di ordine 1

    j = 1;

    do {

        if (n[1][j] < 0)
            cNegCorn1++;

        if (n[(NR - 1) - 1][j] < 0)
            cNegCorn1++;

        j++;
    } while (j <= ((NC - 1) - 1));

    i = 2;

    do {

        if (n[i][1] < 0)
            cNegCorn1++;

        if (n[i][(NC - 1) - 1] < 0)
            cNegCorn1++;

        i++;
    } while (i <= ((NR - 1) - 2));

    mPosCorn2 = (float)sPosCorn2 / cPosCorn2;
    percNegCorn1 = (float)cNegCorn1 / (((NC - 2) * 2) + ((NR - 4) * 2)) * 100;
}

void visualizzazione(int nMagDiagPrinc, float mPosCorn2, float percNegCorn1) {

    cout << "Il numero maggiore inserito presente sulla diagonale principale: " << nMagDiagPrinc << endl;
    cout << "La media dei numeri positivi inseriti presenti sulla cornice di ordine 2: " << mPosCorn2 << endl;
    cout << "La percentuale dei numeri negativi inseriti presenti sulla cornice di ordine 1: " << percNegCorn1 << "%" << endl;
}