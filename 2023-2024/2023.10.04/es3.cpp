#include <iostream>
using namespace std;
int main()
{

    int i = 0, voto[23], vMag, cVotiMulti4 = 0, cVotiMulti5 = 0, sVotiMulti4 = 0;
    float mVotiMulti4, percVotiMulti5;

    do
    {
        do
        {
            cout << "Inserisci un voto compreso tra 0 e 10" << endl;
            cin >> voto[i];
        } while (i < 1 || i > 10);
        i++;
    } while (i < 23);

    vMag = voto[0];

    for (i = 0; i < 23; i++)
    {
        if (voto[i] > vMag)
        {
            vMag = voto[i];
        }
        if (voto[i] % 4 == 0)
        {
            cVotiMulti4++;
            sVotiMulti4 += voto[i];
        }
        if (voto[i] % 5 == 0)
        {
            cVotiMulti5++;
        }
    }

    mVotiMulti4 = (float)sVotiMulti4 / cVotiMulti4;
    percVotiMulti5 = (float)cVotiMulti5 / 23 * 100;

    cout << "Il voto maggiore e': " << vMag << endl;
    cout << "La media dei voti multipli di 4 e': " << mVotiMulti4 << endl;
    cout << "La percentuale dei voti multipli di 5 e': " << percVotiMulti5 << "%" << endl;

    system("pause");
    return 0;
}