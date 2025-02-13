#include <iostream>
using namespace std;
int main()
{

    float n, nMinore, sPositivi = 0, sNegativi = 0, mNegativi;
    int cNegativi = 0, i = 0;

    cout << "Inserisci un numero" << endl;
    cin >> n;
    nMinore = n;

    if (n > 0)
    {
        sPositivi += n;
    }
    else
    {
        sNegativi += n;
        cNegativi++;
    }
    i++;

    do
    {
        i++;
        cout << "Inserisci un numero" << endl;
        cin >> n;

        if (n < nMinore)
        {
            nMinore = n;
        }

        if (n > 0)
        {
            sPositivi += n;
        }
        else
        {
            sNegativi += n;
            cNegativi++;
        }
    } while (i < 23);

    mNegativi = sNegativi / cNegativi;

    cout << "Il numero minore e': " << nMinore << endl;
    cout << "La somma dei numeri positivi e': " << sPositivi << endl;

    system("pause");
    return 0;
}