#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int N = 26;
    int n[N], i = 0, j = 0, temp;
    srand(time(NULL));

    while (i < N)
    {
        n[i] = rand() % 669 - 157;
        i++;
    }

    i = 0;

    while (i < N)
    {

        j = 0;

        while (j < N - i - 1)
        {

            if (n[j] < n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
            j++;
        }

        i++;
    }

    i = 0;

    cout << "I numeri generati in ordine decrescente:" << endl;

    while (i < N)
    {

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}