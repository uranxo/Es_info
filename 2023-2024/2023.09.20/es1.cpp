#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n, i = 0, sPari = 0, cPari = 0, cDispari = 0;
    float mPari, pDispari;

    while (i < 17)
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
            if (n % 2 == 0)
            {
                sPari += n;
                cPari++;
            }
            else
            {
                cDispari++;
            }
            i++;
        }
    }

    mPari = (float)sPari / cPari;
    pDispari = (float)cDispari / 17 * 100;

    cout << "La media dei numeri pari e': " << mPari << endl;
    cout << "La percentuale dei numeri dispari e': " << pDispari << "%" << endl;

    system("pause");
    return 0;
}