#include <iostream>
using namespace std;

int main()
{

    const int N = 13;
    int i = 0;
    float n[N], temp;
    bool scambio = true;

    while (i < N)
    {

        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    }

    i = 0;

    while (scambio == true)
    {

        scambio = false;
        i = 0;

        while (i < N - 1)
        {

            if (n[i] < n[i + 1])
            {
                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }

            i++;
        }
    }

    i = 0;

    cout << "I numeri inseriti in ordine decrescente:" << endl;

    while (i < N)
    {

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}