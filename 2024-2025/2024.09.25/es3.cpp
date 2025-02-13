#include <iostream>
using namespace std;

void inserimento(int &n) {

    cout << "Inserire un numero intero positivo" << endl;

    do {

        cin >> n;

    } while (n <= 0);
}

int fattoriale(int &n) {

    int i = 1, f = 1;

    do {

        f *= i;
        i++;
    } while (i <= n);

    return f;
}

int main() {

    int n, f;

    inserimento(n);
    f = fattoriale(n);

    cout << "Il fattoriale di " << n << ": " << f << endl;

    system("pause");
    return 0;
}