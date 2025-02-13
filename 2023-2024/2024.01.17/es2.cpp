#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[12], i = 0, par[12], dispar[12];
    srand(time(NULL));

    while (i < 12) {

        n[i] = rand() % 601 + 23;
        i++;
    }

    i = 0;

    while (i < 12) {

        if (n[i] % 2 == 0)
            par[i] = n[i];
        else
            par[i] = 1;

        if (n[i] % 2 != 0)
            dispar[i] = n[i];
        else
            dispar[i] = 0;

        i++;
    }

    i = 0;

    cout << "I numeri pari generati:" << endl;

    while (i < 12) {

        if (par[i] != 1)
            cout << par[i] << endl;
        i++;
    }

    i = 0;

    cout << "I numeri dispari generati:" << endl;

    while (i < 12) {

        if (dispar[i] != 0)
            cout << dispar[i] << endl;
            i++;
    }

    system("pause");
    return 0;
}