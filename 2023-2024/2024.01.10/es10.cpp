#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[22], i = 0, nPos[22];
    srand(time(NULL));

    do {

        n[i] = rand() % 380 - 123;
        i++;
    } while (i < 22);

    i = 0;

    do {

        if (n[i] > 0)
            nPos[i] = n[i];
        else 
            nPos[i] = 0;
        i++;
    } while (i < 22);

    i = 0;

    cout << "I numeri positivi generati sono:" << endl;

    do {
        
        if (nPos[i] > 0)
            cout << nPos[i] << endl;
        i++;
    } while (i < 22);

    system("pause");
    return 0;
}