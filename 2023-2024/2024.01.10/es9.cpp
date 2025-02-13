#include <iostream>
using namespace std;

int main() {

    int n[10], i = 0, fN[10], j = 1;

    do {

        n[i] = 3 + i;
        i++;
    } while (i < 10);

    i = 0;

    do {
        
        fN[i] = 1;
        do {

            fN[i] *= j;
            j++;
        } while (j <= n[i]);

        i++;
        j = 1;
    } while (i < 10);

    i = 0;

    cout << "I fattoriali dei primi 10 numeri interi a partire da 3:" << endl;

    do {

        cout << fN[i] << endl;
        i++;
    } while (i < 10);

    system("pause");
    return 0;
}