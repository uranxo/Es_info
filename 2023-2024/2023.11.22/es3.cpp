#include <iostream>
using namespace std;

int main()
{

    const int N = 43;
    int n[N], i, temp;
    bool scambio = true;

    for (i = 0; i < N; i++)
    {

        for (;;)
        {

            cout << "Inserire un numero intero positivo" << endl;
            cin >> n[i];

            if (n[i] > 0)
                break;
        }
    }

    for (; scambio == true;)
    {

        scambio = false;

        for (i = 0; i < N - 1; i++)
        {

            if (n[i] > n[i + 1])
            {
                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }
        }
    }

    cout << "I numeri inseriti in ordine crescente:" << endl;

    for (i = 0; i < N; i++)
    {

        cout << n[i] << endl;
    }

    system("pause");
    return 0;
}