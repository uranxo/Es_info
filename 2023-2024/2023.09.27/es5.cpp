#include <iostream>
using namespace std;
int main()
{

    int i = 0, cPos = 0;
    float n[48], nMag, nMin, sPos = 0, mPos, percentPos;

    while (i < 48)
    {
        cout << "Inserisci un numero" << endl;
        cin >> n[i];
        i++;
    }
    nMin = n[0];
    nMag = n[0];
    for (i = 0; i < 48; i++)
    {
        if (n[i] > nMag)
        {
            nMag = n[i];
        }
        if (n[i] < nMin)
        {
            nMin = n[i];
        }
        if (n[i] > 0)
        {
            sPos += n[i];
            cPos++;
        }
    }

    mPos = sPos / cPos;
    percentPos = (float)cPos / 48 * 100;

    cout << "Il numero maggiore e': " << nMag << endl;
    cout << "Il numero minore e': " << nMin << endl;
    cout << "La media dei numeri positivi e': " << mPos << endl;
    cout << "La percentuale dei numeri positivi e': " << percentPos << "%" << endl;
    cout << "Ecco i numeri inseriti in ordine inverso: " << endl;

    for (i = 47; i >= 0; i--)
    {
        cout << n[i] << endl;
    }

    system("pause");
    return 0;
}