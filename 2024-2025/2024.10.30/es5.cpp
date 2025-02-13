#include <iostream>
using namespace std;

void inserimento (int &base, int &esp) {

    cout << "Inserire due numeri interi positivi" << endl;

    do {

        cin >> base >> esp;
    } while (base <= 0 || esp <= 0);
}

int iterative(int base, int esp) {

    int i = 0, risult = 1;

    while (i < esp) {

        risult *= base;

        i++;
    }

    return risult;
}

int recursive(int base, int esp) {

    if (esp == 0 )
        return 1;

    else {

        return base * recursive(base, esp - 1);
    }
}

int main () {

    int base1, esp1, base2, esp2, risult = 1;

    inserimento(base1, esp1);
    base2 = base1;
    esp2 = esp1;

    cout << "La potenza avente come base ed esponente i numeri inseriti e calcolata con funzione iterativa: " << iterative(base1, esp1) << endl;
    cout << "La potenza avente come base ed esponente i numeri inseriti e calcolata con funzione ricorsiva: " << recursive(base2, esp2) << endl;
    
    system("pause");
    return 0;
}