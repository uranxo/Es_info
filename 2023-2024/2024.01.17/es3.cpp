#include <iostream>
using namespace std;

int main() {

    const int N = 15;
    float n[N], nMag, nMin, s, m, percNMin100;
    int i = 0, cNMin100 = 0;

    do {

        do {

            cout << "Inserire un numero positivo" << endl;
            cin >> n[i];
        } while (n[i] < 0);

        i++;
    } while (i < N);

    i = 0;
    nMag = n[0];
    nMin = n[0];

    do {

        s += n[i];

        if (n[i] > nMag)
            nMag = n[i];
        if (n[i] < nMin)
            nMin = n[i];
        if (n[i] < 100)
            cNMin100++;

        i++;
    } while (i < N);

    m = s / N;
    percNMin100 = (float)cNMin100 / N * 100;

    cout << "La media dei numeri inseriti: " << m << endl;
    cout << "Il numero maggiore: " << nMag << endl;
    cout << "Il numero minore: " << nMin << endl;
    cout << "La percentuale dei numeri minori di 100: " << percNMin100 << "%" << endl;
    cout << "I numeri inseriti in ordine inverso all'inserimento: " << endl;

    i = N - 1;

    do {

        cout << n[i] << endl;
        i--;
    } while (i >= 0);

    system("pause");
    return 0;
}