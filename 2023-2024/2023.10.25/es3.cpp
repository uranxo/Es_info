#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    const int NUMERI = 73;
    int n[NUMERI], i = 0, nMin = 131, cPos = 0, sPos = 0, cNeg = 0;
    float mPos, percNeg;
    srand(time(NULL));

    do
    {
        n[i] = rand() % 285 - 153;
        i++;
    } while (i < NUMERI);

    for (i = 0; i < NUMERI; i++)
    {
        if (n[i] < nMin)
            nMin = n[i];
        if (n[i] > 0)
        {
            sPos += n[i];
            cPos++;
        }
        if (n[i] < 0)
            cNeg++;
    }

    mPos = (float)sPos / cPos;
    percNeg = (float)cNeg / NUMERI * 100;

    cout << "Il numero minore: " << nMin << endl;
    cout << "La media dei positivi: " << mPos << endl;
    cout << "La percentuale dei negativi: " << percNeg << "%" << endl;
    cout << "I numeri generati:" << endl;

    i = 0;

    while (i < NUMERI)
    {
        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}