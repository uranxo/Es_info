#include <iostream>
#include <limits>
using namespace std;
int main()
{

    int n[65], i = 0, nMin, multi3 = 0, sMulti3 = 0, multi5 = 0;
    float media3, percMulti5;

    do
    {
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> n[i];

        if (n[i] > 0)
        {
            i++;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (i < 65);

    nMin = n[0];

    for (i = 0; i < 65; i++)
    {
        if (n[i] < nMin)
        {
            nMin = n[i];
        }
        if (n[i] % 3 == 0)
        {
            multi3++;
            sMulti3 += n[i];
        }
        if (n[i] % 5 == 0)
        {
            multi5++;
        }
    }

    media3 = (float)sMulti3 / multi3;
    percMulti5 = (float)multi5 / 65 * 100;

    cout << "Il numero minimo e' " << nMin << endl;
    cout << "La media dei multipli di 3 e' " << media3 << endl;
    cout << "La percentuale dei multipli di 5 e' " << percMulti5 << "%" << endl;

    system("pause");
    return 0;
}