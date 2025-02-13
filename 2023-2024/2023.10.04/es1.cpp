#include <iostream>
using namespace std;
int main()
{

    int i = 0, n[27], nMag, cPar = 0, sPar = 0, cDisp = 0;
    float mPar, percDisp;

    do
    {
        do
        {
            cout << "Inserisci un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] <= 0);
        i++;
    } while (i <= 0);

    nMag = n[0];

    for (i = 0; i < 27; i++)
    {
        if (n[i] > nMag)
        {
            nMag = n[i];
        }
        if (n[i] % 2 == 0)
        {
            cPar++;
            sPar += n[i];
        }
        if (n[i] % 2 != 0)
        {
            cDisp++;
        }
    }

    mPar = (float)sPar / cPar;
    percDisp = (float)cDisp / 27 * 100;

    cout << "Il numero maggiore e': " << nMag << endl;
    cout << "La media dei numeri pari e': " << mPar << endl;
    cout << "La percentuale dei numeri dispari e': " << percDisp << "%" << endl;

    system("pause");
    return 0;
}