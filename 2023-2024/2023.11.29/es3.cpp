#include <iostream>
using namespace std;

int main()
{

    const int N = 72;
    int n[N], nPar[N], nDisp[N], i = 0, cPar = 0, cDisp = 0;

    for (i = 0; i < N; i++)
    {

        do
        {

            cout << "Inserire un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] <= 0);
    }

    for (i = 0; i < N; i++)
    {

        if (n[i] % 2 == 0)
        {
            nPar[cPar] = n[i];
            cPar++;
        }
        else
        {

            nDisp[cDisp] = n[i];
            cDisp++;
        }
    }

    cout << "I numeri pari inseriti:" << endl;

    for (i = 0; i < cPar; i++)
    {

        cout << nPar[i] << endl;
    }

    cout << "I numeri dispari inseriti:" << endl;

    for (i = 0; i < cDisp; i++)
    {

        cout << nDisp[i] << endl;
    }

    system("pause");
    return 0;
}