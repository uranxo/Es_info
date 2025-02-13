#include <iostream>
using namespace std;

void inserimento(int n[][8]) {

    int i = 0, j;

    cout << "Inserire 56 numeri interi a partire da 35" << endl;

    do {

        j = 0;

        do {

            cin >> n[i][j];

            j++;
        } while (j < 8);

        i++;
    } while (i < 7);
}

void visualizzazione(const int n[][8]) {

    int i = 0, j;

    cout << "I numeri inseriti ordinati in una matrice di 7 righe e 8 colonne:" << endl;

    do {

        j = 0;

        do {

            cout << n[i][j] << "\t";

            j++;
        } while (j < 8);

        cout << endl;

        i++;
    } while (i < 7);
}

int main() {

    int n[7][8];

    inserimento(n);
    visualizzazione(n);

    system("pause");
    return 0;
}