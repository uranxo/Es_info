#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int n[33], i = 0, temp;
    bool scambio = true;
    srand(time(NULL));

    do
    {

        n[i] = rand() % 308 - 175;
        i++;
    } while (i < 33);

    for (; scambio == true;)
    {

        scambio = false;

        for (i = 0; i < 33 - 1; i++)
        {

            if (n[i] < n[i + 1])
            {

                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }
        }
    }

    i = 0;

    cout << "I numeri generati in ordine decrescente:" << endl;

    while (i < 33)
    {

        cout << n[i] << endl;
        i++;
    }

    cout << "Il numero maggiore generato: " << n[0] << endl;
    cout << "Il numero minore generato: " << n[32] << endl;

    system("pause");
    return 0;
}