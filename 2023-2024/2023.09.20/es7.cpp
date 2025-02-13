#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    float n[23], nMin, contPos = 0, sommaPos = 0, contNeg = 0, sommaNeg = 0, mediaNeg;

    cout << "Inserisci un numero" << endl;
    cin >> n[i];

    nMin = n[i];

    if (n > 0)
    {
        contPos++;
        sommaPos += n[i];
    }
    else if (n < 0)
    {
        contNeg++;
        sommaNeg += n[i];
    }
    i++;

    while (i < 23)
    {
        cout << "Inserisci un numero" << endl;
        cin >> n[i];

        if (n[i] < nMin)
        {
            nMin = n[i];
        }

        if (n > 0)
        {
            contPos++;
            sommaPos += n[i];
        }
        else if (n < 0)
        {
            contNeg++;
            sommaNeg += n[i];
        }

        i++;
    }

    mediaNeg = sommaNeg / contNeg;

    cout << "Il numero minore e' " << nMin << endl;
    cout << "La somma dei numeri positivi e' " << sommaPos << endl;
    cout << "La media dei numeri negativi e' " << mediaNeg << endl;

    system("pause");
    return 0;
}
