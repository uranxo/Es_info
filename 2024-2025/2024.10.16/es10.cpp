#include <iostream>
using namespace std;

const int NR = 14, NC = 10;

void memorizzazione(int n[][NC]) {

    int i = 0, j;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            n[i][j] = -18 + (i * NC + j);

            j++;
        }

        i++;
    }
}

void visualizzazione(const int n[][NC]) {

    int i = 0, j;

    cout << "I numeri inseriti ordinati in una tabella di 14 righe e 10 colonne:" << endl;

    while (i < NR) {

        j = 0;

        while (j < NC) {

            cout << n[i][j] << "\t";

            j++;
        }

        cout << endl;

        i++;
    }
}

int main() {

    int n[NR][NC];

    memorizzazione(n);
    visualizzazione(n);

    system("pause");
    return 0;
}