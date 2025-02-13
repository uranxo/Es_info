#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int N = 17;
    int n[N], i = 0, j;
    srand(time(NULL));

    while (i < N)
    {
        n[i] = rand() % 457 + 111;
        i++;
    }

    i = 0;

    while (i < N)
    {
        j = 0;
        while (j < N - 1)
        {
            if (n[j] < n[j + 1])
            {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
            j++;
        }
        i++;
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