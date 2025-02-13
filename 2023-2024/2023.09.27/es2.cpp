#include <iostream>
using namespace std;
int main()
{

    int n, i;
    bool primo = true;

    do
    {
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> n;

        if (n == 1)
        {
            primo = false;
        }
        else
        {
            for (i = n - 1; i > 1; i--)
            {
                if (n % i == 0)
                {
                    primo = false;
                    break;
                }
            }
        }

    } while (n <= 0);

    if (primo == true)
    {
        cout << "Il numero e' primo" << endl;
    }
    else
    {
        cout << "Il numero non e' primo" << endl;
    }

    system("pause");
    return 0;
}