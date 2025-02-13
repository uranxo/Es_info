#include <iostream>
using namespace std;

int main() {

    int i = 0, j;
    float n[23], temp;

    do {
        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 23);

    for (i = 0; i < 23; i++) {
        for (j = 0; j < 23 - 1 - i; j++) {
            if (n[j] > n[j + 1]) {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    i = 0;

    cout << "I numeri inseriti in ordine crescente:" << endl;

    while (i < 23) {
        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}