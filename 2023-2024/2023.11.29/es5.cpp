#include <iostream>
using namespace std;

int main() {

    int i = 0, cPos = 0, cNeg = 0;
    float n[17], nPos[17], nNeg[17];

    do {

        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 17);

    i = 0;

    while (i < 17) {

        if (n[i] > 0) {

            nPos[cPos] = n[i];
            cPos++;
        }
        if (n[i] < 0) {

            nNeg[cNeg] = n[i];
            cNeg++;
        }
        i++;
    }

    cout << "I numeri positivi inseriti:" << endl;

    for (i = 0; i < cPos; i++) {

        cout << nPos[i] << endl;
    }

    cout << "I numeri negativi inseriti:" << endl;

    for (i = 0; i < cNeg; i++) {

        cout << nNeg[i] << endl;
    }

    system("pause");
    return 0;
}