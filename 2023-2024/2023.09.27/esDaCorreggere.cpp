#include <iostream>
using namespace std;
int main()
{

    int n, divisore;
    bool primo = true;

    do
    {
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> n;
    } while (n <= 0);

    divisore = n - 1;

    do
    {
        if (n == 1)
        {
            primo = false;
        }
        else
        {
            if (n % divisore == 0)
            {
                primo = false;
            }
            divisore--;
        }
    } while (divisore > 1 && primo == true);

    if (primo == true)
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