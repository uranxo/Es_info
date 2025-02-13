#include <iostream>
using namespace std;

const int NR = 15, NC = 13;

void inserimento(int n[][NC]) {

    int i = 0, j;

    cout << "Inserire " << NR * NC << " numeri interi positivi" << endl;

    do {

        j = 0;

        do {

            do {

                cin >> n[i][j];
            } while (n[i][j] <= 0);

            j++;
        } while (j < NC);

        i++;
    } while (i < NR);
}

void determinazione (const int n[][NC], int &nMag, int &sDisp, float &percPar) {

    int i = 0, j, cPar = 0;
    
    nMag = n[0][0];

    do {

        j = 0;

        do {

            if (n[i][j] > nMag)
                nMag = n[i][j];
            
            if (n[i][j] % 2 != 0)
                sDisp += n[i][j];
            
            if (n[i][j] % 2 == 0)
                cPar++;

            j++;
        } while (j < NC);

        i++;
    } while (i < NR);

    percPar = (float)cPar / (NR * NC) * 100;
}

void visualizzazione(int &nMag, int &sDisp, float &percPar) {

    cout << "Il numero maggiore inserito: " << nMag << endl;
    cout << "La somma dei numeri dispari inseriti: " << sDisp << endl;
    cout << "La percentuale dei numeri pari inseriti: " << percPar << "%" << endl;
}

int main() {

    int n[NR][NC], nMag, sDisp = 0;
    float percPar;

    inserimento(n);
    determinazione(n, nMag, sDisp, percPar);
    visualizzazione(nMag, sDisp, percPar);

    system("pause");
    return 0;
}