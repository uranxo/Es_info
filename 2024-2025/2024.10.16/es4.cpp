#include <iostream>
using namespace std;

const int NR = 20, NC = 20;

void inserimento(int n[][NC]) {

    int i = 0, j;

    cout << "Inserire " << NR * NC << " numeri interi positivi" << endl;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            do {

                cin >> n[i][j];
            } while (n[i][j] <= 0);

            j++;
        }

        i++;
    }
}

void determinazione(const int n[][NC], float &mPar, float &percDisp) {

    int i = 0, j, cPar = 0, cDisp = 0, sPar = 0;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            if (n[i][j] % 2 == 0) {

                sPar += n[i][j];
                cPar++;
            }
            
            else
                cDisp++;

            j++;
        }

        i++;
    }

    mPar = (float)sPar / cPar;
    percDisp = (float)cDisp / (NR * NC) * 100;
}

void visualizzazione(float mPar, float percDisp) {

    cout << "La media dei numeri pari inseriti: " << mPar << endl;
    cout << "La percentuale dei numeri dispari inseriti: " << percDisp << "%" << endl;
}

int main() {

    int n[NR][NC];
    float mPar, percDisp;

    inserimento(n);
    determinazione(n, mPar, percDisp);
    visualizzazione(mPar, percDisp);

    system("pause");
    return 0;
}