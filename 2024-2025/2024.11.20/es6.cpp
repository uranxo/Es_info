#include <iostream>
using namespace std;

void inserimento(float n[]) {

    int i = 0;

    cout << "Inserisci 27 numeri" << endl;

    while (i < 27) {

        cin >> n[i];

        i++;
    }
}

float iterative(const float n[]) {

    int i = 0;
    float nMin = n[0];

    while (i < 27) {

        if (n[i] < nMin)
            nMin = n[i];

        i++;
    }

    return nMin;
}

int recursive(const int n[], int i, int nMin) {

    if (i == 16) {

        if (n[i] < nMin)
            nMin = n[i];

        return nMin;
    }

    else {

        if (i == 0)
            nMin = n[0];
        
        if (n[i] < nMin)
            nMin = n[i];

        return recursive(n, i + 1, nMin);
    }
}

int main() {

    float n[27];

    inserimento(n);

    cout << "Il numero minore inserito determinato tramite funzione iterativa: " << iterative(n) << endl;
    cout << "Il numero minore inserito determinato tramite funzione ricorsiva: " << recursive(n, 0, 0) << endl;

    system("pause");
    return 0;
}