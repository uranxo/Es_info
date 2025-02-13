#include <iostream>
using namespace std;

void inserimento(float n[]);
void determinazione(const float n[], float &nMin, float &sPos, float &mNeg);
void visualizzazione(float nMin, float sPos, float mNeg);

int main() {

    float n[18], nMin, sPos = 0, mNeg;

    inserimento(n);
    determinazione(n, nMin, sPos, mNeg);
    visualizzazione(nMin, sPos, mNeg);

    system("pause");
    return 0;
}

void inserimento(float n[]) {

    cout << "Inserire 18 numeri" << endl;

    for (int i = 0; i < 18; i++) {

        cin >> n[i];
    }
}

void determinazione(const float n[], float &nMin, float &sPos, float &mNeg) {

    int cNeg = 0, sNeg = 0;

    for (int i = 0; i < 18; i++) {

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
    }

    mNeg = (float)sNeg / cNeg;
}

void visualizzazione(float nMin, float sPos, float mNeg) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La somma dei numeri positivi inseriti: " << sPos << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
}