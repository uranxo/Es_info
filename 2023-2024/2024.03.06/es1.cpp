#include <iostream>
using namespace std;

int inserimento() {

    int n;

    do {

        cout << "Inserire un numero intero positivo" << endl;
        cin >> n;
    } while (n <= 0);

    return n;
}

bool parita(int n) {

    bool pari;

    if (n % 2 == 0)
        pari = true;
    else
        pari = false;
    
    return pari;
}

void visualizzazione(bool pari) {

    if (pari == true)
        cout << "Il numero inserito e' pari" << endl;
    else
        cout << "Il numero inserito e' dispari" << endl;
}

int main() {

    visualizzazione(parita(inserimento()));

    system("pause");
    return 0;
}