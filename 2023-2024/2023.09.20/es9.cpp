#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    int i = 0, n, nMag, contPar = 0, contDisp = 0, sommaPar = 0;
    float mediaPar, percentDisp;
    srand(time(NULL));

    n = rand() % 111 + 13;
    nMag = n;

    if (n % 2 == 0)
    {
        contPar++;
        sommaPar += n;
    }
    else
    {
        contDisp++;
    }

    i++;

    do
    {
        n = rand() % 111 + 13;

        if (n > nMag)
        {
            nMag = n;
        }

        if (n % 2 == 0)
        {
            contPar++;
            sommaPar += n;
        }
        else
        {
            contDisp++;
        }

        i++;
    } while (i < 10);

    mediaPar = (float)sommaPar / contPar;
    percentDisp = (float)contDisp / 10 * 100;

    cout << "Il numero maggiore generato e' " << nMag << endl;
    cout << "La media dei numeri pari generati e' " << mediaPar << endl;
    cout << "La percentuale dei numeri dispari generati e' " << percentDisp << "%" << endl;

    system("pause");
    return 0;
}