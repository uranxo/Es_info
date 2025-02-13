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

    int i = 0, s = 0;

    while (i < 15) {

        s += n[i];
        i++;
    }

    return s;
}

int recursive(const int n[], int i) {

    if (i < 15) {

        return n[i] + recursive(n, i + 1);
    }
    
    else
        return 0;
}

int main() {

    int n[15];

    inserimento(n);

    cout << "La somma dei numeri inseriti calcolata tramite funzione iterativa: " << iterative(n) << endl;
    cout << "La somma dei numeri inseriti calcolata tramite funzione ricorsiva: " << recursive(n, 0) << endl;

    system("pause");
    return 0;
}