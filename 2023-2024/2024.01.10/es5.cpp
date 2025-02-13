#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[37], i, nIns, cNInf = 0, sNInf = 0, cNSup = 0;
    float MNInf, percNSup;
    srand(time(NULL));

    while (i < 37) {

        n[i] = rand() % 249 - 135;
    }

    i = 0;

    do {

        cout << "Inserire un numero compreso tra -135 e 113" << endl;
        cin >> nIns;
    } while (nIns < -135 || nIns > 113);

    for (i = 0; i < 37; i++) {

        if (n[i] < nIns) {

            cNInf++;
            sNInf += n[i];
        }
        if (n[i] > nIns)
            cNSup++;
    }

    MNInf = (float)sNInf / cNInf;
    percNSup = (float)cNSup / 37 * 100;

    cout << "La media dei numeri inferiori al numero inserito: " << MNInf << endl;
    cout << "La percentuale dei numeri superiori al numero inserito: " << percNSup << "%" << endl;
    
    system("pause");
    return 0;
}