#include <iostream>
using namespace std;

void inserimento(float n[]) {

    int i = 0;

    cout << "Inserire 27 numeri" << endl;

    do {

        cin >> n[i];
        i++;
    } while (i < 27);
}

void determinazione(const float n[], float &mPos, float &percNeg) { 

    int i = 0, cPos = 0, cNeg = 0;
    float sPos = 0;

    do {

        if (n[i] > 0) {

            cPos++;
            sPos += n[i];
        }

        if (n[i] < 0)
            cNeg++;

        i++;
    } while (i < 27);
    
    mPos = sPos / cPos;
    percNeg = (float)cNeg / 27 * 100;
}

void visualizzazione(float mPos, float percNeg) {

    cout << "La media dei numeri positivi inseriti: " << mPos << endl;
    cout << "La percentuale dei numeri negativi inseriti: " << percNeg << "%" << endl;
}

int main() {

    float n[27], mPos, percNeg;

    inserimento(n);
    determinazione(n, mPos, percNeg);
    visualizzazione(mPos, percNeg);

    system("pause");
    return 0;
}