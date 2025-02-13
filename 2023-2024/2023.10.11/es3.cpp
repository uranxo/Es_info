#include <iostream>
using namespace std;
int main()
{

    int i = 0, vMore8 = 0, vLess4 = 0;
    float voto[27], vMag, vMin;

    do
    {
        cout << "Inserisci un voto" << endl;
        cin >> voto[i];
        i++;
    } while (i < 27);

    vMag = voto[0];
    vMin = voto[0];
    i = 0;

    while (i < 27)
    {
        if (voto[i] > 8)
        {
            vMore8++;
        }
        else if (voto[i] < 4)
        {
            vLess4++;
        }
        i++;
    }

    for (i = 0; i < 27; i++)
    {
        if (voto[i] > vMag)
        {
            vMag = voto[i];
        }
        if (voto[i] < vMin)
        {
            vMin = voto[i];
        }
    }

    cout << vMore8 << " studenti hanno preso un voto maggiore di 8" << endl;
    cout << vLess4 << " studenti hanno preso un voto minore di 4" << endl;
    cout << "Il voto maggiore: " << vMag << endl;
    cout << "Il voto minore: " << vMin << endl;

    system("pause");
    return 0;
}