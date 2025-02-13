#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 84;

void genereazione(int n[]) {

    int i = 0;

    do {

        n[i] = rand() % 697 - 537;

        i++;
    } while (i < N);
}

void determinazione(const int n[], int &nMag, int &cTraNeg290ENeg150, float &percPos) {

    int i = 0, cPos = 0;

    do {

        if (n[i] > nMag)
            nMag = n[i];

        if (n[i] >= -290 && n[i] <= -150)
            cTraNeg290ENeg150++;

        if (n[i] > 0)
            cPos++;

        i++;
    } while (i < N);

    percPos = (float)cPos / N * 100;
}

void visualizzazione(int nMag, int cTraNeg290ENeg150, float percPos) {

    cout << "Il numero maggiore inserito: " << nMag << endl;
    cout << "Il numero di numeri compresi tra -290 e -150 inseriti: " << cTraNeg290ENeg150 << endl;
    cout << "La percentuale dei numeri positivi inseriti: " << percPos << "%" << endl;
}

int main() {

    int n[N], nMag = -537, cTraNeg290ENeg150 = 0;
    float percPos;
    srand(time(NULL));

    genereazione(n);
    determinazione(n, nMag, cTraNeg290ENeg150, percPos);
    visualizzazione(nMag, cTraNeg290ENeg150, percPos);

    system("pause");
    return 0;
}