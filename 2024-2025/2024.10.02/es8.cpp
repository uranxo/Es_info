#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int n[]);
void determinazione(const int n[], int &nMin, float &nNeg, float &percPos);
void visualizzazione(int nMin, float mNeg, float percPos);

int main() {

    int n[20], nMin = 167;
    float mNeg, percPos;
    srand(time(NULL));

    generazione(n);
    determinazione(n, nMin, mNeg, percPos);
    visualizzazione(nMin, mNeg, percPos);

    system("pause");
    return 0;
}

void generazione(int n[]) {

    int i = 0;

    while (i < 15) {

        n[i] = rand() % 380 - 131;

        i++;
    }
}

void determinazione(const int n[], int &nMin, float &mNeg, float &percPos) {

    int i = 0, cNeg = 0, cPos = 0, sNeg = 0;

    while (i < 15) {

        if (n[i] < nMin)
            nMin = n[i];

        if (n[i] < 0) {
            cNeg++;
            sNeg += n[i];
        }

        if (n[i] > 0)
            cPos++;

        i++;
    }

    mNeg = (float)sNeg / cNeg;
    percPos = (float)cPos / 15 * 100;
}

void visualizzazione(int nMin, float mNeg, float percPos) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
    cout << "La percentuale dei numeri positivi inseriti: " << percPos << "%" << endl;
}