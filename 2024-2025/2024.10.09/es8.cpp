#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int n[][21]);
void determinazione(const int n[][21], int &nMinDiagSec, float &mNegCorn3, float &percPosCorn0);
void visualizza(int nMinDiagSec, float mNegCorn3, float percPosCorn0);

int main() {

    int n[21][21], nMinDiagSec;
    float mNegCorn3, percPosCorn0;
    srand(time(NULL));

    generazione(n);
    determinazione(n, nMinDiagSec, mNegCorn3, percPosCorn0);
    visualizza(nMinDiagSec, mNegCorn3, percPosCorn0);

    system("pause");
    return 0;
}

void generazione(int n[][21]) {

    int i = 0, j;

    while (i < 21) {

        j = 0;

        while (j < 21) {

            n[i][j] = rand() % 764 - 274;

            j++;
        }

        i++;
    }
}

void determinazione(const int n[][21], int &nMinDiagSec, float &mNegCorn3, float &percPosCorn0) {

    int i = 0, j = 20, cNegCorn3 = 0, cPosCorn0 = 0, sNegCorn3 = 0;

    while (j >= 0) {

        if (j == 20)
            nMinDiagSec = n[20 - j][j];
            
        if (n[i][i] < nMinDiagSec)
            nMinDiagSec = n[20 - j][j];
            
        j--;
    }

    j = 0;

    while (i < 21) {

        j = 0;
        
        while (j < 21) {

            // Determinazioni su cornice di ordine 3

            if (n[3][j] < 0 && j >= 3 && j <= 17) {

                sNegCorn3 += n[3][j];
                cNegCorn3++;
            }

            if (n[i][3] < 0 && j >= 4 && j <= 16) {

                sNegCorn3 += n[i][3];
                cNegCorn3++;
            }

            if (n[i][17] < 0 && j >= 4 && j <= 16) {

                sNegCorn3 += n[i][17];
                cNegCorn3++;
            }

            if (n[17][j] < 0 && j >= 3 && j <= 17) {

                sNegCorn3 += n[17][j];
                cNegCorn3++;
            }

            // Determinazioni su cornice di ordine 0

            if (n[0][j] > 0 && j >= 0 && j <= 20)
                cPosCorn0++;

            if (n[i][0] > 0 && j >= 1 && j <= 19)
                cPosCorn0++;

            if (n[i][20] > 0 && j >= 1 && j <= 19)
                cPosCorn0++;
            
            if (n[20][j] > 0 && j >= 0 && j <= 20)
                cPosCorn0++;
            
            j++;
        }

        i++;
    }

    mNegCorn3 = (float)sNegCorn3 / cNegCorn3;
    percPosCorn0 = (float)cPosCorn0 / 80 * 100;
}

void visualizza(int nMinDiagSec, float mNegCorn3, float percPosCorn0) {

    cout << "Il numero minore inserito presente sulla diagonale secondaria: " << nMinDiagSec << endl;
    cout << "La media dei numeri negativi inseriti presenti sulla cornice di ordine 3: " << mNegCorn3 << endl;
    cout << "La media dei numeri positivi inseriti presenti sulla cornice di ordine 0: " << percPosCorn0 << "%" << endl;
}