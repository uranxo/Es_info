#include <iostream>
using namespace std;

const int NR = 8, NC = 12;

void inserimento(float n[][NC]) {

    int i = 0, j;

    cout << "Inserire " << NR*NC << " numeri" << endl;

    do {

        j = 0;

        do {

            cin >> n[i][j];

            j++;
        } while (j < NC);

        i++;
    } while (i < NR);
}

void determinazione(const float n[][NC], float &nMin, float &mNeg, float &percPos) {

    int i = 0, j, cNeg = 0, cPos = 0;
    float sNeg = 0;

    nMin = n[0][0];

    do {

        j = 0;

        do {

            if (n[i][j] < nMin)
                nMin = n[i][j];
            
            if (n[i][j] < 0) {

                sNeg += n[i][j];
                cNeg++;
            }
            
            if (n[i][j] > 0)
                cPos++;

            j++;
        } while (j < NC);

        i++;
    } while (i < NR);

    mNeg = sNeg / cNeg;
    percPos = (float)cPos / (NR * NC) * 100;
}

void visualizzazione(float nMin, float mNeg, float percPos) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
    cout << "La percentuale dei numeri positivi inseriti: " << percPos << "%" << endl;
}

int main() {

    float n[NR][NC], nMin, mNeg, percPos;

    inserimento(n);
    determinazione(n, nMin, mNeg, percPos);
    visualizzazione(nMin, mNeg, percPos);

    system("pause");
    return 0;
}