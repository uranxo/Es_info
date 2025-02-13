#include <iostream>
using namespace std;

void inserimento(float n[]) {

    int i = 0;

    cout << "Inserire 20 numeri" << endl;

    while (i < 20) {

        cin >> n[i];

        i++;
    }
}

void iterative(const float n[]) {

    int i = 0;

    while (i < 20) {

        cout << n[i] << endl;

        i++;
    }
}

void recursive(const float n[], int i) {

    if (i < 20) {

        cout << n[i] << endl;

        recursive(n, i + 1);
    }
}

int main() {

    float n[20];
    
    inserimento(n);

    cout << "I numeri inserit visualizzati tramite funzione iterativa:" << endl;
    iterative(n);
    cout << "I numeri inserit visualizzati tramite funzione ricorsiva:" << endl;
    recursive(n, 0);

    system("pause");
    return 0;
}