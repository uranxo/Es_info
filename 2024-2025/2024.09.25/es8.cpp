#include <iostream>
using namespace std;

void inserimento(float n[], float &nMin, int &cNeg, float &sPos, float &sNeg) {

    int i = 0;


    cout << "Inserire 23 numeri" << endl;

    while (i < 23) {

        cin >> n[i];

        if (i == 0)
            nMin = n[i];

        if (n[i] < nMin)
            nMin = n[i];

        if (n[i] > 0)
            sPos += n[i];

        if (n[i] < 0) {

            cNeg++;
            sNeg += n[i];
        }

        i++;
    }
}

void visualizzazione(float nMin, float sPos, float mNeg) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La somma dei numeri positivi inseriti: " << sPos << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
}

int main() {

    int cNeg = 0;
    float n[23], nMin, sPos = 0, sNeg = 0, mNeg;

    inserimento(n, nMin, cNeg, sPos, sNeg);

    mNeg = sNeg / cNeg;

    visualizzazione(nMin, sPos, mNeg);

    system("pause");
    return 0;
}