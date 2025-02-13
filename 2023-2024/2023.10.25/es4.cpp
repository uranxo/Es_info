#include <iostream>
using namespace std;
int main()
{

    const int NUMERI = 84;
    int i = 0;
    float n[NUMERI], nMag, nMin, s = 0, cPos = 0, m, percPos;

    do
    {
        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < NUMERI);

    nMag = n[0];
    nMin = n[0];

    for (i = 0; i < NUMERI; i++)
    {
        if (n[i] > nMag)
            nMag = n[i];
        if (n[i] < nMin)
            nMin = n[i];
        s += n[i];
        if (n[i] < 0)
            cPos++;
    }

    m = s / NUMERI;
    percPos = cPos / NUMERI * 100;

    cout << "Il numero maggiore: " << nMag << endl;
    cout << "Il numero minore: " << nMin << endl;
    cout << "La media: " << m << endl;
    cout << "La percentuale dei positivi: " << percPos << "%" << endl;

    system("pause");
    return 0;
}