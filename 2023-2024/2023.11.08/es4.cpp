#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int N = 37;
    int n[N], i = 0, nMin = 113, s = 0, sNeg = 0, cNeg = 0, cPos = 0;
    float mNeg, percPos;
    srand(time(NULL));

    do
    {
        n[i] = rand() % 249 - 135;
        i++;
    } while (i < N);

    i = 0;

    while (i < N)
    {
        if (n[i] < nMin)
            nMin = n[i];
        if (n[i] < 0)
        {
            sNeg += n[i];
            cNeg++;
        }
        if (n[i] > 0)
            cPos++;

        i++;
    }

    mNeg = (float)sNeg / cNeg;
    percPos = (float)cPos / N * 100;

    cout << "Il numero minore: " << nMin << endl;
    cout << "La media dei numeri negativi: " << mNeg << endl;
    cout << "La percentuale dei numeri positivi: " << percPos << "%" << endl;
    cout << "Ecco i numeri generati:" << endl;

    for (i = 0; i < N; i++)
    {
        cout << n[i] << endl;
    }

    system("pause");
    return 0;
}