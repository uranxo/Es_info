#include <iostream>
using namespace std;
int main() {

    int n1, n2, MCD, r;

    do
    {
        cout << "Inserisci 2 numeri interi positivi" << endl;
        cin >> n1 >> n2;
    } while (n1 <= 0 || n2 <= 0);

    while (n2 > 0)
    {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }

    MCD = n1;

    cout << "L' MCD tra i 2 numeri inseriti e' " << MCD << endl;

    system("pause");
    return 0;    
    
}