#include <iostream>
using namespace std;

int main()
{

    const int N = 43;
    int n[N], i = 0, j, temp;

    do
    {
        do
        {
            cout << "Inserire un numero intero positivo" << endl;
            cin >> n[i];
        } while (n[i] < 0);
        i++;
    } while (i < N);

    i = 0;

    do
    {
        j = 0;
        do
        {
            if (n[j] < n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
            j++;
        } while (j < N - i - 1);
        i++;
    } while (i < N);

    i = 0;

    cout << "I numeri inseriti in ordine decrescente:" << endl;

    do
    {
        cout << n[i] << endl;
        i++;
    } while (i < N);

    system("pause");
    return 0;
}