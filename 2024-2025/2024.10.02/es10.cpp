#include <iostream>
using namespace std;

void memorizzazione(int n[]) {

    int i = 0;

    while (i < 125) {

        n[i] = 18 + i;

        i++;
    }
}

void visualizzazione(const int n[]) {

    int i = 125 - 1;

    cout << "I primi 125 numeri interi a partire da 18:" << endl;

    while (i >= 0) {

        cout << n[i] << endl;

        i--;
    }
}

int main() {

    int n[125];

    memorizzazione(n);
    visualizzazione(n);

    system("pause");
    return 0;
}