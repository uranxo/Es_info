#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione(int n[]) {

    int i = 0;

    while (i < 15) {

        n[i] = rand() % 88 + 5;

        i++;
    }
}

void ordinamento(int n[]) {

    int i, temp;
    bool scambio = true;

    while (scambio == true) {

        scambio = false;
        i = 0;
        
        while (i < 15 - 1) {

            if (n[i] < n[i + 1]) {

                int temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }

            i++;
        }
    }
}

int main() {

    int n[15], i = 0;
    srand(time(NULL));

    generazione(n);
    ordinamento(n);

    cout << "I numeri generati ordinati in ordine decrescente:" << endl;

    while (i < 15) {

        cout << n[i] << endl;

        i++;
    }

    system("pause");
    return 0;
}