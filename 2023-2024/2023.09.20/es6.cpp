#include <iostream>
#include <limits>
using namespace std;

int main()
{

    int n, nMag, multiSette = 0, multiQuattro = 0;

    for (int i = 0; i < 1;)
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
            nMag = n;

            if (n % 7 == 0)
            {
                multiSette++;
            }
            else if (n % 4 == 0)
            {
                multiQuattro++;
            }

            i++;
        }
    }

    for (int i = 1; i < 56;)
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
            if (n > nMag)
            {
                nMag = n;
            }

            if (n % 7 == 0)
            {
                multiSette++;
            }
            else if (n % 4 == 0)
            {
                multiQuattro++;
            }

            i++;
        }
    }

    cout << "Il numero maggiore e': " << nMag << endl;
    cout << "I multipli di 7 sono: " << multiSette << endl;
    cout << "I multipli di 4 sono: " << multiQuattro << endl;

    system("pause");
    return 0;
}