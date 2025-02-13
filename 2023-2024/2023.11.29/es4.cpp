#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int n[35], nIns, i = 0;
    bool found = false;
    srand(time(NULL));

    do
    {

        n[i] = rand() % 358 - 175;
        i++;
    } while (i < 35);

    i = 0;

    do
    {

        cout << "Inserire un numero compreso tra -175 e 182" << endl;
        cin >> nIns;
    } while (nIns < -175 || nIns > 182);

    do
    {

        if (nIns == n[i])
            found = true;
        i++;
    } while (found == false && i < 35);

    if (found == true)
    {
        cout << "Il numero inserito e' stato generato" << endl;
    }
    else
    {

        cout << "Il numero inserito non e' stato generato" << endl;
    }

    system("pause");
    return 0;
}