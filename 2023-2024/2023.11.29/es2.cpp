#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int N = 26;
    int n[N], i = 0, j = 0, temp;
    srand(time(NULL));

    do
    {

        n[i] = rand() % 669 - 157;
        i++;
    } while (i < N);

    i = 0;

    do
    {

        j = 0;

        do
        {

            if (n[j] > n[j + 1])
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

    cout << "I numeri generati in ordine crescente" << endl;

    do
    {

        cout << n[i] << endl;
        i++;
    } while (i < N);

    system("pause");
    return 0;
}