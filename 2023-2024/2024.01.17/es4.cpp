#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[11], i = 0, temp;
    bool scambio = true;
    srand(time(NULL));

    while (i < 11) {

        n[i] = 7 + i;
        i++;
    }

    i = 0;

    while (i < 11) {

        n[i] += rand() % 20 + 15;
        i++;
    }

    while (scambio == true) {

        scambio = false;
        i = 0;

        while (i < 10 - 1) {

            if (n[i] < n[i + 1]) {

                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }

            i++;
        }
    }

    i = 0;

    cout << "I numeri generati aggiungendo un numero casuale tra 15 e 34 ad ognuno di essi e ordinati in ordine decrescente: " << endl;

    while (i < 11) {

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}