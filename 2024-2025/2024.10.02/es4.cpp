#include <iostream>
using namespace std;

void inserimento(int &n) {

    cout << "Inserire un numero intero positivo" << endl;

    do {

        cin >> n;
    } while (n <= 0);
}

bool primalita(int n) {

    int i = n - 1;
    bool primo = true;

    if (n == 1)
        primo = false;

    else if (n == 2)
        primo = true;

    else {
        
        while (i > 1 && primo == true) {

            if (n % i == 0)
                primo = false;

            i--;
        }
    }

    return primo;
}

int main() {

    int n;

    inserimento(n);

    if (primalita(n) == true)
        cout << "Il numero inserito e' primo" << endl;

    else
        cout << "Il numero inserito non e' primo" << endl;

    system("pause");
    return 0;
}