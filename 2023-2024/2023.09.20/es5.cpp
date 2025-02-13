#include <iostream>
#include <limits>
using namespace std;

int main()
{

    int n, i, contDiv = 0;

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
            i = n;

            do
            {
                if (n % i == 0)
                {
                    contDiv++;
                }

                i--;
            } while (i > 0);
        }

    } while (i > 0);

    if (contDiv == 2)
    {
        cout << "Il numero inserito e' primo" << endl;
    }
    else
    {
        cout << "Il numero inserito non e' primo" << endl;
    }

    system("pause");
    return 0;
}