#include <iostream>
using namespace std;
int main()
{

    int i = 0, n[22], sPar = 0, sDisp = 0;

    do
    {
        do
        {
            cout << "Inserisci un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] <= 0);
        i++;
    } while (i < 22);

    for (i = 0; i < 22; i++)
    {
        if (i % 2 == 0)
        {
            sPar += n[i];
        }
        else
        {
            sDisp += n[i];
        }
    }

    cout << "La somma dei numeri con indice pari: " << sPar << endl;
    cout << "La somma dei numeri con indice dispari: " << sDisp << endl;

    system("pause");
    return 0;
}