#include <iostream>
using namespace std;

int main() {

    float n[28], nMag, nMin, sNeg = 0, mNeg, percPos;
    int i = 0, cNeg = 0, cPos = 0;

    do {

        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 28);

    i = 0;
    nMag = n[0];
    nMin = n[0];

    do {

        if (n[i] > nMag)
            nMag = n[i];

        if (n[i] < nMin)
            nMin = n[i];

        if (n[i] < 0) {

            cNeg++;
            sNeg += n[i];
        }

        if (n[i] > 0)
            cPos++;

        i++;
    } while (i < 28);
    
    i = 0;

    mNeg = sNeg / cNeg;
    percPos = (float)cPos / 28 * 100;

    cout << "Il numero maggiore inserito: " << nMag << endl;
    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
    cout << "La percentuale dei numeri positivi inseriti: " << percPos << "%" << endl;
    cout << "I numeri inseriti in ordine inverso:" << endl;

    do {

        cout << n[i] << endl;
        i++;
    } while (i < 28);

    system("pause");
    return 0;
}