#include <iostream>
using namespace std;

bool multiplicita(int num1, int num2) {

    bool multiplo;
    if (num1 % num2 == 0)
        multiplo = true;
    else
        multiplo = false;

    return multiplo;
}

void visualizzazione(bool multiplo) {

    if (multiplo == true)
        cout << "Il primo numero e' multiplo del secondo" << endl;
    else
        cout << "Il primo numero non e' multiplo del secondo" << endl;
}

int main() {

    int n1, n2;
    cout << "Inserire 2 numeri interi" << endl;
    cin >> n1 >> n2;

    visualizzazione(multiplicita(n1, n2));

    system("pause");
    return 0;
}