#include <iostream>
using namespace std;
int main()
{

    const int NUMERI = 65;
    int n[NUMERI], i = 0, nMin, sMult3 = 0, cMulti3 = 0, cMulti5 = 0;
    float mMulti3, percMulti5;

    do
    {
        do
        {
            cout << "Inserire un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] <= 0);
        i++;
    } while (i < NUMERI);

    nMin = n[0];

    for (i = 0; i < NUMERI; i++)
    {
        if (n[i] < nMin)
            nMin = n[i];
        if (n[i] % 3 == 0)
        {
            sMult3 += n[i];
            cMulti3++;
        }
        if (n[i] % 5 == 0)
            cMulti5++;
    }

    mMulti3 = (float)sMult3 / cMulti3;
    percMulti5 = (float)cMulti5 / NUMERI * 100;

    cout << "Il numero minore: " << nMin << endl;
    cout << "La media dei multipli di 3: " << mMulti3 << endl;
    cout << "La percentuale dei multipli di 5: " << percMulti5 << "%" << endl;

    system("pause");
    return 0;
}