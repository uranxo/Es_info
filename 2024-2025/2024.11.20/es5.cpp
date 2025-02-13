#include <iostream>
using namespace std;

void inserimento(int n[]) {

    int i = 0;

    cout << "Inserire 15 numeri interi" << endl;

    while (i < 15) {

        cin >> n[i];

        i++;
    }
}

int iterative(const int n[]) {

    int i = 0, nMag = n[0];

    while (i < 15) {

        if (n[i] > nMag)
            nMag = n[i];

        i++;
    }

    return nMag;
}

int recursive(const int n[], int i, int nMag) {

    if (i == 14) {

        if (n[i] > nMag)
            nMag = n[i];

        return nMag;
    }

    else {

        if (i == 0)
            nMag = n[0];
        
        if (n[i] > nMag)
            nMag = n[i];

        return recursive(n, i + 1, nMag);
    }
}

int main() {

    int n[15];

    inserimento(n);

    cout << "Il numero maggiore inserito determinato tramite funzione iterativa: " << iterative(n) << endl;
    cout << "Il numero maggiore inserito determinato tramite funzione ricorsiva: " << recursive(n, 0, 0) << endl;

    system("pause");
    return 0;
}