#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n[12], i = 0, j = 0, temp;
    srand(time(NULL));

    while (i < 12) {

        n[i] = rand() % 80 - 23;
        i++;
    }

    i = 0;

    cout << "I numeri generati:" << endl;

    while (i < 12) {

        cout << n[i] << endl;
        i++;
    }

    i = 0;

    while (i < 12) {

        j = 0;

        while (j < 12 - i - 1) {

            if (n[j] < n[j + 1]) {

                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }

            j++;
        }

        i++;
    }

    i = 0;

    cout << "I numeri generati in ordine decrescente:" << endl;

    while (i < 12) {

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}