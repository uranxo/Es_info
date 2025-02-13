#include <iostream>
using namespace std;
int main()
{

    int n1, n2, i = 1, f1 = 1, f2 = 1;

    do
    {
        cout << "Inserisci 2 numeri interi positivi" << endl;
        cin >> n1 >> n2;
    } while (n1 <= 0 || n2 <= 0);

    do
    {
        f1 *= i;
        i++;
    } while (i <= n1);

    i = 1;

    do
    {
        f2 *= i;
        i++;
    } while (i <= n2);

    cout << "Il fattoriale del primo numero: " << f1 << endl;
    cout << "Il fattoriale del secondo numero: " << f2 << endl;

    system("pause");
    return 0;
}