#include <iostream>
#include <string>
using namespace std;

int main() {

    int i = 0, lung, pTI = 0, lungMin;
    string parola;

    cout << "Inserire 15 parole di almeno 4 caratteri" << endl;

    do {

        cin >> parola;
        lung = parola.length();
    } while (lung < 4);

    if (parola.at(lung - 1) == 'i' || parola.at(lung - 1) == 'I')
        pTI++;

    lungMin = lung;

    i++;

    while (i < 15) {

        do {

            cin >> parola;
            lung = parola.length();
        } while (lung < 4);

        if (parola.at(lung - 1) == 'i' || parola.at(lung - 1) == 'I')
            pTI++;

        if (lung < lungMin)
            lungMin = lung;

        i++;
    }

    cout << "Parole che terminano con 'i': " << pTI << endl;
    cout << "Numero di caratteri della parola piú corta: " << lungMin << endl;

    system("pause");
    return 0;
}