#include <iostream>
using namespace std;

void inserimento(int &num) {

    do {

        cout << "Inserire un numero intero positivo" << endl;
        cin >> num;
    } while (num <= 0);
}

string nPrimo(int num) {

    bool primo = true;
    string risposta;

    if (num == 1)

        risposta = "non e' primo";
    else {

        while (primo == true && num - 1 > 1) {

            if (num % (num - 1) == 0)
                primo = false;
            else
                num--;
        }
    }

    if (primo == true)
        risposta = "e' primo";
    else
        risposta = "non e' primo";

    return risposta;
}

void visualizzazione(string Risposta) {

    cout << "Il numero inserito " << Risposta << endl;
}

int main() {

    int numero;
    string Risposta;

    inserimento(numero);
    visualizzazione(nPrimo(numero));

    system("pause");
    return 0;
}