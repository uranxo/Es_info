#include <iostream>
using namespace std;
int main()
{

    float n[27], sIndDisp = 0, mIndDisp, percNeg, sPos = 0, mPos;
    int i = 0, cIndDisp = 0, cNeg = 0, cPos = 0;

    do
    {
        cout << "Inserisci un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 27);

    for (i = 0; i < 27; i++)
    {
        if (i % 2 != 0)
        {
            sIndDisp += n[i];
            cIndDisp++;
        }
    }

    mIndDisp = sIndDisp / cIndDisp;
    i = 0;

    while (i < 27)
    {
        if (n[i] < 0)
        {
            cNeg++;
        }
        if (n[i] > 0)
        {
            sPos += n[i];
            cPos++;
        }
    }

    percNeg = (float)cNeg / 27 * 100;
    mPos = sPos / cPos;

    cout << "La media dei numeri in posizione dispari e': " << mIndDisp << endl;
    cout << "La percentuale dei numeri negativi e': " << percNeg << "%" << endl;
    cout << "La media dei numeri positivi e': " << mPos << endl;

    system("pause");
    return 0;
}