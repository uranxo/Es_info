#include <iostream>
using namespace std;

int main()
{

    const int N = 27;
    int i = 0, j;
    float n[N], temp;

    do
    {
        cout << "Inserire un numero" << endl;
        cin >> n[i];
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
        } while (j < N - 1);
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