#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[43], i, temp;
    bool scambio = true;
    srand(time(NULL));

    for (i = 0; i < 43; i++) {

        n[i] = rand() % 217 - 18;
    }

    i = 0;

    cout << "I numeri generati:" << endl;

    do {

        cout << n[i] << endl;
        i++;
    } while (i < 43);
    
    for (i = 0; scambio == true; i++) {

        scambio = false;
        i = 0;

        while (i < 43 - 1) {

            if (n[i] < n[i + 1]) {

                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }

            i++;
        }
    }

    cout << "I numeri generati ordinati in ordine decrescente:" << endl;

    for (i = 0; i < 43; i++) {

        cout << n[i] << endl;
    }

    system("pause");
    return 0;
}