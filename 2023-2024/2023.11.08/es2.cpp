#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int N = 17;
    int n[N], i = 0;
    srand(time(NULL));

    while (i < N)
    {

        n[i] = rand() % 457 + 111;
        i++;
    }

    i = 0;

    cout << "I numeri generati dove i pari sono sostituiti dal numero 0:" << endl;

    while (i < N)
    {
        if (n[i] % 2 == 0)
            n[i] = 0;

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}