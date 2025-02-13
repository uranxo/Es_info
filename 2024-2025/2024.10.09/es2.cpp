#include <iostream>
using namespace std;

void inserimento(int n[][6]) {

    int i = 0, j;

    cout << "Inserire 72 numeri interi positivi" << endl;

    while (i < 12) {

        j = 0;

        while (j < 6) {

            do {

                cin >> n[i][j];
            } while (n[i][j] <= 0);

            j++;
        }

        i++;
    }
}

void determinazione(const int n[][6], int &nMin, int &sPar, float &mDisp) {

    int i = 0, j, cDisp = 0, sDisp = 0;
    
    while (i < 12) {

        j = 0;

        while (j < 6) {

            if (i == 0 && j == 0)
                nMin = n[i][j];
            
            if (n[i][j] < nMin)
                nMin = n[i][j];
            
            if (n[i][j] % 2 == 0)
                sPar += n[i][j];

            if (n[i][j] % 2 != 0) {

                sDisp += n[i][j];
                cDisp++;
            }

            j++;
        }

        i++;
    }

    mDisp = (float) sDisp / cDisp;
}

void visualizzazione(int nMin, int sPar, float mDisp) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La somma dei numeri pari inseriti: " << sPar << endl;
    cout << "La media dei numeri dispari inseriti: " << mDisp << endl;
}

int main() {

    int n[12][6], nMin, sPar = 0;
    float mDisp;

    inserimento(n);
    determinazione(n, nMin, sPar, mDisp);
    visualizzazione(nMin, sPar, mDisp);

    system("pause");
    return 0;
}