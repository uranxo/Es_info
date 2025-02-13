#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    const int NUMERI = 56;
    int n[NUMERI], nS, i = 0;
    bool nPres = false;
    srand(time(NULL));

    while (i < NUMERI)
    {

        n[i] = rand() % 2296 + 50;
        i++;
    }

    do
    {
        cout << "Inserire un numero compreso tra 50 e 2345" << endl;
        cin >> nS;
    } while (nS < 50 || nS > 2345);

    i = 0;

    while (i < NUMERI && nPres == false)
    {
        if (n[i] == nS)
        {

            nPres = true;
        }
        i++;
    }

    if (nPres == true)
    {

        cout << "Il numero " << nS << " e' stato generato" << endl;
    }
    else
    {

        cout << "Il numero " << nS << " non e' stato generato" << endl;
    }

    system("pause");
    return 0;
}