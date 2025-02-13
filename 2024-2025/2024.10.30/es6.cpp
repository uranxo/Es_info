#include <iostream>
using namespace std;

void inserimento(int &n1, int &n2) {

    cout << "Inserire 2 numeri interi positivi" << endl;

    do {

        cin >> n1 >> n2;
    } while (n1 <= 0 || n2 <= 0);
}

int iterative(int n1A, int n2A) {

    int n1 = n1A, n2 = n2A, nA = n1A, nB = n2A, resto, MCD, MCM;

    while (n2 > 0) {

        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }

    MCD = n1;
    MCM = (nA * nB) / MCD;

    return MCM;
}

int recursive(int n1B, int n2B) {

    int n1 = n1B, n2 = n2B, nA = n1B, nB = n2B, resto, MCD, MCM;

    if (n2 == 0) {

        MCD = n1;
        MCM = (nA * nB) / MCD;

        return MCM;
    }
    
    else {

        resto = n1 % n2;
        n1 = n2;
        n2 = resto;

        return recursive(n1, n2);
    }
}

int main() {

    int n1A, n2A, n1B, n2B;

    inserimento(n1A, n2A);
    n1B = n1A;
    n2B = n2A;

    cout << "L'MCM dei numeri inseriti calcolato con funzione iterativa: " << iterative(n1A, n2A) << endl;
    cout << "L'MCM dei numeri inseriti calcolato con funzione ricorsiva: " << recursive(n1B, n2B) << endl;

    system("pause");
    return 0;
}