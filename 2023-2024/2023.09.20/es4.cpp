#include <iostream>
using namespace std;

int main()
{

    int i = 0, votoM, contSuf = 0, sommaSuf = 0, contIns = 0;
    float mediaSuf, percentIns, voto;

    while (i == 0)
    {
        cout << "Inserisci il voto" << endl;
        cin >> voto;
        if (voto >= 0 && voto <= 10)
        {
            votoM = voto;

            if (voto >= 6)
            {
                contSuf++;
                sommaSuf += voto;
            }
            else
            {
                contIns++;
            }

            i++;
        }
        else
        {
            cout << "Il voto inserito non e' valido" << endl;
        }
    }

    while (i < 21)
    {
        cout << "Inserisci il voto" << endl;
        cin >> voto;
        if (voto >= 0 && voto <= 10)
        {
            if (voto > votoM)
            {
                votoM = voto;
            }

            if (voto >= 6)
            {
                contSuf++;
                sommaSuf += voto;
            }
            else
            {
                contIns++;
            }

            i++;
        }
        else
        {
            cout << "Il voto inserito non e' valido" << endl;
        }
    }

    mediaSuf = (float)sommaSuf / contSuf;
    percentIns = (float)contIns / 21 * 100;

    cout << "Il voto piu' alto e' " << votoM << endl;
    cout << "La media dei voti sufficienti e' " << mediaSuf << endl;
    cout << "La percentuale dei voti insufficienti e' " << percentIns << "%" << endl;

    system("pause");
    return 0;
}