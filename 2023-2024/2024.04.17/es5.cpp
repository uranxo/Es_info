#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void numMag(int num, int &nMag);
void visualizzazione(float asset, string frase1, string frase2);
void medNeg(int sNeg, int cNeg, float &mNeg);
float percPos(int cPos);

int main() {

    int n, nMag = -212, i = 0, cNeg = 0, cPos = 0, sNeg = 0;
    float mNeg, perPos;
    srand(time(NULL)); 

    while (i < 27) {

        n = rand() % 369 - 212;

        numMag(n, nMag);

        if (n < 0) {
            cNeg++;
            sNeg += n;
        }
        else
            cPos++;
        
        i++;
    }

    medNeg(sNeg, cNeg, mNeg);
    perPos = percPos(cPos);

    visualizzazione(((float)nMag), "Il numero maggiore tra quelli generati: ", "");
    visualizzazione(mNeg, "La media dei numeri negativi generati: ", "");
    visualizzazione(perPos, "La percentuale dei numeri positivi generati: ", " %");

    system("pause");
    return 0;
}

void numMag(int num, int &nMag) {

    if (num > nMag)
        nMag = num;
}

void visualizzazione(float asset, string frase1, string frase2) {

    cout << frase1 << asset << frase2 << endl;
}

void medNeg(int sNeg, int cNeg, float &mNeg) {

    mNeg = (float)sNeg / cNeg;
}

float percPos(int cPos) {

    float percPos = (float)cPos / 27 * 100;

    return percPos;
}