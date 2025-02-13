#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    int i = 0, n[23], nMin = 145, sPos = 0, cNeg = 0, sNeg = 0;
    float mNeg;

    srand(time(NULL));

    do
    {
        n[i] = rand() % 211 - 65;
        i++;
    } while (i < 23);

    for (i = 0; i < 23; i++)
    {
        if (n[i] < nMin)
        {
            nMin = n[i];
        }
        if (n[i] > 0)
        {
            sPos += n[i];
        }
        if (n[i] < 0)
        {
            cNeg++;
            sNeg += n[i];
        }
    }

    mNeg = (float)sNeg / cNeg;

    cout << "Il numero minore e': " << nMin << endl;
    cout << "La somma dei numeri positivi e': " << sPos << endl;
    cout << "La media dei numeri negativi e': " << mNeg << endl;

    system("pause");
    return 0;
}