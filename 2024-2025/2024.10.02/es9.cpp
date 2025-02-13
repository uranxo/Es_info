#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int n[]) {

    int i = 0;

    while (i < 48) {

        n[i] = rand() % 513 - 345;

        i++;
    }
}

void determinazione(const int n[], int &nMag, int &cNTra10E50, float &percNeg) {

    int i = 0, cNeg = 0;

    while (i < 48) {

        if (n[i] > nMag)
            nMag = n[i];

        if (n[i] >= 10 && n[i] <= 50)
            cNTra10E50++;

        if (n[i] < 0)
            cNeg++;

        i++;
    }

    percNeg = (float)cNeg / 48 * 100;
}

void visualizzazione(int nMag, int cNTra10E50, float percNeg) {

    cout << "Il numero maggiore inserito: " << nMag << endl;
    cout << "Il numero di numeri compresi tra 10 e 50 inseriti: " << cNTra10E50 << endl;
    cout << "La percentuale dei numeri negativi inseriti: " << percNeg << "%" << endl;
}

int main() {

    int n[48], nMag = -345, cNTra10E50 = 0;
    float percNeg;
    srand(time(NULL));

    generazione(n);
    determinazione(n, nMag, cNTra10E50, percNeg);
    visualizzazione(nMag, cNTra10E50, percNeg);

    system("pause");
    return 0;
}