#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int n[73], i, j, temp;
    srand(time(NULL));

    do
    {
        n[i] = rand() % 159 - 35;
        i++;
    } while (i < 73);

    for (i = 0; i < 73; i++)
    {
        for (j = 0; j < 73 - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    i = 0;

    cout << "Il numero maggiore generato: " << n[73 - 1] << endl;
    cout << "Il numero minore generato: " << n[0] << endl;
    cout << "I numeri generati in ordine crescente:" << endl;

    while (i < 73)
    {
        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}