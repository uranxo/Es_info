#include <iostream>
using namespace std;

void inserimento(float &n, float &nMin, int &cNeg, float &sPos, float &sNeg) {

    int i = 0;

    cout << "Inserire 23 numeri" << endl;
    
    do {

        cin >> n;

        if (i == 0)
            nMin = n;

        if (n < nMin)
            nMin = n;

        if (n > 0)
            sPos += n;
        
        if (n < 0) {

            cNeg++;
            sNeg += n;
        }

        i++;
    } while (i < 23);
}

void visualizzazione(float nMin, float sPos, float mNeg) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La somma dei numeri positivi inseriti: " << sPos << endl;
    cout << "La media dei numeri negativi inseriti: " << mNeg << endl;
}

int main() {

    int cNeg = 0;
    float n, nMin, sPos = 0, sNeg = 0, mNeg;

    inserimento(n, nMin, cNeg, sPos, sNeg);

    mNeg = sNeg / cNeg;

    visualizzazione(nMin, sPos, mNeg);

    system("pause");
    return 0; 
}