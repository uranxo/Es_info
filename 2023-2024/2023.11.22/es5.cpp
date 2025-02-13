#include <iostream>
using namespace std;

int main() {

    float n[17];
    int i = 0, j, temp;

    do {

        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 17);

    for (i = 0; i < 17; i++) {

        for (j = 0; j < 17 - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    i = 0;

    cout << "I numeri inseriti in ordine crescente:" << endl;

    while (i < 17) {

        cout << n[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}