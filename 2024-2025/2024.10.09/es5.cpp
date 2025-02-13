#include <iostream>
using namespace std;

void inserimento(int n[][16]);
void determinazione(const int n[][16], int &nMinDiagPrinc, float &mParCorn1, float &percDispCorn2);
void visualizzazione(int nMinDiagPrinc, float mParCorn1, float percDispCorn2);

int main() {

    int n[16][16], nMinDiagPrinc;
    float mParCorn1, percDispCorn2;

    inserimento(n);
    determinazione(n, nMinDiagPrinc, mParCorn1, percDispCorn2);
    visualizzazione(nMinDiagPrinc, mParCorn1, percDispCorn2);

    system("pause");
    return 0;
}

void inserimento(int n[][16]) {

    int i = 0, j;

    cout << "Inserire 256 numeri interi positivi" << endl;

    do {

        j = 0;

        do {

            do {

                cin >> n[i][j];
            } while (n[i][j] <= 0);

            j++;
        } while (j < 16);

        i++;
    } while (i < 16);
}

void determinazione(const int n[][16], int &nMinDiagPrinc, float &mParCorn1, float &percDispCorn2) {

    int i = 0, j, cParCorn1 = 0, cDispCorn2 = 0, sParCorn1;

    do {

        if (i == 0)
            nMinDiagPrinc = n[i][i];
            
        if (n[i][i] < nMinDiagPrinc)
            nMinDiagPrinc = n[i][i];
            
        i++;
    } while (i < 16);

    i = 0;

    do {

        j = 0;

        do {

            // Determinazioni su cornice di ordine 1

            if (n[1][j] % 2 == 0 && j >= 1 && j <= 14) {

                cParCorn1++;
                sParCorn1 += n[1][j];
            }
            
            if (n[i][1] % 2 == 0 && i >= 2 && i <= 13) {

                cParCorn1++;
                sParCorn1 += n[i][1];
            }

            if (n[i][14] % 2 == 0 && i >= 2 && i <= 13) {

                cParCorn1++;
                sParCorn1 += n[i][14];
            }

            if (n[14][j] % 2 == 0 && j >= 1 && j <= 14) {

                cParCorn1++;
                sParCorn1 += n[14][j];
            }

            // Determinazioni su cornice di ordine 2

            if (n[2][j] % 2 != 0 && j >= 2 && j <= 13)
                cDispCorn2++;
            
            if (n[i][2] % 2 != 0 && i >= 3 && i <= 12)
                cDispCorn2++;
            
            if (n[i][13] % 2 != 0 && i >= 3 && i <= 12)
                cDispCorn2++;
            
            if (n[13][j] % 2 != 0 && j >= 2 && j <= 13)
                cDispCorn2++;

            j++;
        } while (j < 16);

        i++;
    } while (i < 16);

    mParCorn1 = (float)sParCorn1 / cParCorn1;
    percDispCorn2 = (float)cDispCorn2 / 56 * 100;
}

void visualizzazione(int nMinDiagPrinc, float mParCorn1, float percDispCorn2) {

    cout << "Il numero minore inserito presente sulla diagonale principale: " << nMinDiagPrinc << endl;
    cout << "La media dei numeri pari inseriti presente sulla cornice di ordine 1: " << mParCorn1 << endl;
    cout << "La percentuale dei numeri dispari inseriti presente sulla cornice di ordine 2: " << percDispCorn2 << "%" << endl;
}