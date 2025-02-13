#include <iostream>
using namespace std;

const int NR = 35, NC = 35;

void inserimento(float n[][NC]);
void determinazione(const float n[][NC], float &nMinDiagSec, float &mPosCorn1, float &percNegCorn2);
void visualizzazione(float nMinDiagSec, float mPosCorn1, float percNegCorn2);

int main() {

    float n[NR][NC], nMinDiagSec, mPosCorn1, percNegCorn2;

    inserimento(n);
    determinazione(n, nMinDiagSec, mPosCorn1, percNegCorn2);
    visualizzazione(nMinDiagSec, mPosCorn1, percNegCorn2);

    system("pause");
    return 0;
}

void inserimento(float n[][NC]) {

    int i = 0, j;

    cout << "Inserire " << NR * NC << " numeri" << endl;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            cin >> n[i][j];

            j++;
        }

        i++;
    }
}

void determinazione (const float n[][NC], float &nMinDiagSec, float &mPosCorn1, float &percNegCorn2) {

    int i, j, cPosCorn1 = 0, cNegCorn2 = 0;
    float sPosCorn1 = 0, 

    nMinDiagSec = n[0][NC - 1];

    i = NC - 1;

    while (i < NR) {

        if (n[i][NC - 1 - i] < nMinDiagSec)
            nMinDiagSec = n[i][NC - 1 - i];

        i++;
    }

    // Determinazioni su cornice di ordine 1

    j = 1;

    while (j <= (NC - 1) - 1) {

        if (n[1][j] > 0) {

            sPosCorn1 += n[1][j];
            cPosCorn1++;
        }

        if (n[(NR - 1) - 1][j] > 0) {

            sPosCorn1 += n[(NR - 1) - 1][j];
            cPosCorn1++;
        }
        
        j++;
    }
    
    i = 2;

    while (i <= (NR - 1) - 2) {

        if (n[i][1] > 0) {

            sPosCorn1 += n[i][1];
            cPosCorn1++;
        }

        if (n[i][(NC - 1) - 1] > 0) {

            sPosCorn1 += n[i][(NC - 1) - 1];
            cPosCorn1++;
        }

        i++;
    }

    // Determinazioni su cornice di ordine 2

    j = 2;

    while (j <= (NC - 1) - 2) {

        if (n[2][j] < 0)
            cNegCorn2++;

        if (n[(NR - 1) - 2][j] < 0)
            cNegCorn2++;
        
        j++;
    }
    
    i = 3;

    while (i <= (NR - 1) - 3) {

        if (n[i][2] < 0)
            cNegCorn2++;

        if (n[i][(NC - 1) - 2] < 0)
            cNegCorn2++;

        i++;
    }

    mPosCorn1 = sPosCorn1 / cPosCorn1;
    percNegCorn2 = (float)cNegCorn2 / (((NC - 4) * 2) + ((NR - 6) * 2)) * 100;
}

void visualizzazione(float nMinDiagSec, float mPosCorn1, float percNegCorn2) {

    cout << "Il numero minore inserito presente sulla diagonale secondaria: " << nMinDiagSec << endl;
    cout << "La media dei numeri positivi inseriti presenti sulla cornice di ordine 1: " << mPosCorn1 << endl;
    cout << "La percentuale dei numeri negativi inseriti presentu sulla cornice di ordine 2: " << percNegCorn2 << "%" << endl;
}