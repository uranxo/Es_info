#include <iostream>
using namespace std;

void inserimento(float n[][8]) {

    int i = 0, j;

    cout << "Inserire 48 numeri" << endl;

    while (i < 6) {

        j = 0;

        while (j < 8) {

            cin >> n[i][j];

            j++;
        }

        i++;
    }
}

void determinazione(const float n[][8], float &mPos, float &percNeg) {

    int i = 0, j, cPos = 0, cNeg = 0;
    float sPos = 0;

    while (i < 6) {

        j = 0;

        while (j < 8) {

            if (n[i][j] > 0) {

                sPos += n[i][j];
                cPos++;
            }

            if (n[i][j] < 0)
                cNeg++;

            j++;
        }

        i++;
    }

    mPos = sPos / cPos;
    percNeg = (float) cNeg / 48 * 100;
}

void visualizzazione(float mPos, float percNeg) {

    cout << "La media dei numeri positivi inseriti: " << mPos << endl;
    cout << "La percentuale dei numeri negativi inseriti: " << percNeg << "%" << endl;
}

int main() {

    float n[6][8], mPos, percNeg;

    inserimento(n);
    determinazione(n, mPos, percNeg);
    visualizzazione(mPos, percNeg);

    system("pause");
    return 0;
}