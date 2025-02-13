#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int (&num)[27]) {

    int i = 0;
    srand(time(NULL));

    while (i < 27) {

        num[i] = rand() % 169 + 12;
        i++;
    }
}

float mediaPar(int num[27]) {

    int s = 0, i = 0, cPar = 0;
    float m;

    while (i < 27) {

        if (num[i] % 2 == 0) {

            s += num[i];
            cPar++;
        }
    }

    m = (float)s / cPar;

    return m;
}

int numMin(int num[27]) {

    int nMin, i = 0;
    nMin = num[0];

    while (i < 27) {

        if (num[i] < nMin)
            nMin = num[i];

        i++;
    }

    return nMin;
}

float percDisp(int num[27]) {

    int i = 0, cDisp = 0;
    float p;

    while (i < 27) {

        if (num[i] % 2 != 0)
            cDisp++;

        i++;
    }

    p = (float)cDisp / 27 * 100;

    return p;
}

int main() {

    int num[27];
    
    generazione(num);

    cout << "La media dei numeri pari: " << mediaPar(num) << endl;
    cout << "Il numero minore: " << numMin(num) << endl;
    cout << "La percentuale dei numeri dispari: " << percDisp(num) << "%" << endl;

    return 0;
}