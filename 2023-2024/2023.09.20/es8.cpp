#include <iostream>
using namespace std;

int main()
{

    int i = 0, votoM, contSuf = 0, sommaSuf=0, contIns = 0;
    float mediaSuf, percentIns, voto[21];

    do
    {
        cout << "Inserisci il voto" << endl;
        cin >> voto[i];
        if (voto[i] >= 0 && voto[i] <= 10)
        {
            votoM = voto[i];
            if (voto[i]>=6)
            {
                contSuf++;
                sommaSuf+=voto[i];
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

    } while (i == 0);

    do
    {
        cout << "Inserisci il voto" << endl;
        cin >> voto[i];
        if (voto[i] >= 0 && voto[i] <= 10)
        {
            if (voto[i] > votoM)
            {
                votoM = voto[i];
            }

            votoM = voto[i];
            if (voto[i]>=6)
            {
                contSuf++;
                sommaSuf+=voto[i];
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

    } while (i < 21);

    mediaSuf = (float)sommaSuf/contSuf;
    percentIns = (float)contIns / 21 * 100;

    cout << "Il voto piu' alto e' " << votoM << endl;
    cout << "La media dei voti sufficienti e' " << mediaSuf << endl;
    cout << "La percentuale dei voti insufficienti e' " << percentIns << "%" << endl;

    system("pause");
    return 0;
}