#include <iostream>
using namespace std;

int main() {

    const int N = 48;
    int i = 0, cNeg = 0;
    float n[N], nMag, nMin, s = 0, m = 0, percNeg;

    do
    {
        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < N);

    nMag = n[0];
    nMin = n[0];

    i = 0;

    while (i < N)
    {
        if (n[i] < 0)
            cNeg++;
        if (n[i] > nMag)
            nMag = n[i];
        if (n[i] < nMin)
            nMin = n[i];

        s += n[i];
        i++;
    }

    m = s / N;
    percNeg = (float)cNeg / N * 100;

    cout << "Il numero maggiore: " << nMag << endl;
    cout << "Il numero minore: " << nMin << endl;
    cout << "La media: " << m << endl;
    cout << "La percentuale dei numeri negativi: " << percNeg << "%" << endl;
    cout << "Ecco i numeri inseriti mostrati in ordine inverso all'inserimento:" << endl;

    for (i = N-1; i >=0; i--)
    {
        cout << n[i] << endl;
    }
    
    system("pause");
    return 0;
}