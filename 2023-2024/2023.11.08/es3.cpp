#include <iostream>
using namespace std;

int main()
{

    const int N = 65;
    int n[N], i = 0, nMag, s = 0, cPar = 0;
    float m, percPar;

    do
    {
        do
        {
            cout << "Inserire un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] <= 0);
        i++;
    } while (i < N);

    nMag = n[0];

    for (i = 0; i < N; i++)
    {
        if (n[i] > nMag)
            nMag = n[i];
        if (n[i] % 2 == 0)
            cPar++;

        s += n[i];
    }

    m = (float)s / N;
    percPar = (float)cPar / N * 100;

    cout << "Il numero maggiore: " << nMag << endl;
    cout << "La media: " << m << endl;
    cout << "La percentuale dei numeri pari: " << percPar << "%" << endl;

    system("pause");
    return 0;
}