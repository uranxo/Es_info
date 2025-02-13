#include <iostream>
using namespace std;

int main()
{

    const int N = 13;
    int i = 0;
    float n[N], temp;
    bool scambio = true;

    do
    {
        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < N);

    i = 0;

    do
    {
        scambio = false;
        i = 0;

        do
        {
            if (n[i] > n[i + 1])
            {
                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }
            i++;
        } while (i < N - 1);
    } while (scambio == true);

    i = 0;

    cout << "I numeri inseriti in ordine crescente:" << endl;

    do
    {

        cout << n[i] << endl;
        i++;
    } while (i < N);

    system("pause");
    return 0;
}