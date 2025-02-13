#include <iostream>
using namespace std;

int main() {

    float n[17], temp;
    int i = 0;
    bool scambio = true;

    do {

        cout << "Inserire un numero" << endl;
        cin >> n[i];
        i++;
    } while (i < 17);

    i = 0;

    cout << "I numeri inseriti:" << endl;

    do {

        cout << n[i] << endl;
        i++;
    } while (i < 17);

    do {

        scambio = false;
        i = 0;
        
        do {

            if (n[i] < n[i + 1]) {

                n[i] = temp;
                n[i] = n[i + 1];
                n[i + 1] = temp;
                scambio = true;
            }
        
            i++;
        } while (i < 17 - 1);
    } while (scambio == true);

    cout << "I numeri inseriti in ordine decrescente:" << endl;

    do {

        cout << n[i] << endl;
        i++;
    } while (i < 17);

    system("pause");
    return 0;
}