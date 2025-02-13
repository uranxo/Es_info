#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    int n[37], i = 0, nMin = 113, cPos = 0, cNeg, sPos = 0;
    float mPos, percentNeg;

    srand(time(NULL));

    while (i < 37)
    {
        n[i] = rand() % 249 - 135;
        i++;
    }
    for (int i = 0; i < 37; i++)
    {
        if (n[i] < nMin)
        {
            nMin = n[i];
            cPos = i;
        }
        if (n[i] > 0)
        {
            sPos += n[i];
            cPos++;
        }
        if (n[i] < 0)
        {
            cNeg++;
        }
    }

    mPos = (float)sPos / cPos;
    percentNeg = (float)cNeg / 37 * 100;

    cout << "Il numero minore e': " << nMin << endl;
    cout << "La media dei numeri positivi e': " << mPos << endl;
    cout << "La percentuale dei numeri negativi e': " << percentNeg << "%" << endl;

    system("pause");
    return 0;
}