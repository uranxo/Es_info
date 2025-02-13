#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n, i = 0, fattoriale, indiceF;
    do
    {
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> n;

        if (cin.fail() || cin.peek() != '\n')
        {
            cout << "Il numero inserito non e' valido" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (n <= 0)
        {
            cout << "Il numero inserito non e' valido" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            i++;
            indiceF = 1;
            fattoriale = n;
            do
            {
                fattoriale = indiceF * fattoriale;
                indiceF++;
            } while (indiceF < n);
        }

    } while (i == 0);

    cout << "Il fattoriale di " << n << " e' " << fattoriale << endl;

    system("pause");
    return 0;
}