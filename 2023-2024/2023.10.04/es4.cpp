#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    int i = 0, n[56], nMin, cPos = 0, cNeg = 0, sNeg = 0;
    float percPos, mNeg;

    srand(time(NULL));

    do
    {
        n[i] = rand() % 556 - 444;
        i++;
    } while (i < 56);

    for (i = 0; i < 56; i++)
    {
        if (n[i] < nMin)
        {
            nMin = n[i];
        }
        if (n[i] > 0)
        {
            cPos++;
        }
        if (n[i] < 0)
        {
            cNeg++;
            sNeg += n[i];
        }
    }
    
    percPos = (float)cPos / 56 * 100;
    mNeg = (float)sNeg / cNeg;

    cout << "Il numero minore e': " << nMin << endl;
    cout << "La percentuale dei numeri positivi e': " << percPos << "%" << endl;
    cout << "La media dei numeri negativi e': " << mNeg << endl;

    system("pause");
    return 0;
}