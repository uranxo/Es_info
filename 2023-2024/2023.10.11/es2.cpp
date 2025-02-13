#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{

    int i = 0, n[23];

    srand(time(NULL));

    do
    {
        n[i] = rand() % 179 + 67;
        i++;
    } while (i < 23);

    for (i = 0; i < 23; i++)
    {
        cout << "Il quadrato del " << i + 1 << "° numero: " << pow(n[i], 2) << endl;
        cout << "Il cubo del " << i + 1 << "° numero: " << pow(n[i], 3) << endl;
    }

    system("pause");
    return 0;
}