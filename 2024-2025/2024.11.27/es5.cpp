#include <iostream>
using namespace std;

void inserimento(float n[]) {

    int i = 0;

    cout << "Inserire 12 numeri positivi" << endl;

    while (i < 12) {

        do {

            cin >> n[i];
        } while (n[i] <= 0);

        i++;
    }
}

float iterative(const float n[]) {

    int i = 0;
    float nMin = n[0];

    while (i < 12) {

        if (n[i] < nMin)
            nMin = n[i];

        i++;
    }

    return nMin;
}

float recursive(const float n[], int i, float nMag) {

    if (i == 11) {

        if (n[i] > nMag)
            return n[i];
    }

    else {

        if (n[i] > nMag)
            nMag = n[i];

        return recursive(n, i + 1, nMag);
    }
}

int main() {

    float n[12];

    inserimento(n);

    cout << "Il numero minimo inserito determinato tramite funzione iterativa: " << iterative(n) << endl;
    cout << "Il numero massimo inserito determinato tramite funzione ricorsiva: " << recursive(n, 0, n[0]) << endl;

    system("pause");
    return 0;
}