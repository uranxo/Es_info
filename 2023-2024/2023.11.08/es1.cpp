#include <iostream>
using namespace std;

int main()
{

    const int N = 27;
    int n[N], i = 0, cPos = 0, sPos = 0, s = 0;
    float m;

    do
    {
        cout << "Inserire un numero intero" << endl;
        cin >> n[N];

        if (n[i] > 0)
        {

            sPos += n[i];
            cPos++;
        }

        s += n[i];
        i++;
    } while (i < N);

    m = (float)s / N;

    cout << "La media dei numeri inseriti: " << m << endl;
    cout << "La somma dei numeri inseriti: " << s << endl;

    system("pause");
    return 0;
}