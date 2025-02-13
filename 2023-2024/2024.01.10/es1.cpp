#include <iostream>
#include <string>
using namespace std;

int main() {

    int i = 0, cS = 0, lung;
    string parola;

    cout << "Inserire 25 parole che iniziano con 't'" << endl;

    while (i < 25) {

        do {

            cin >> parola;
            lung = parola.length();
        } while (parola.at(0) != 't' && parola.at(0) != 'T');

        while (lung > 0) {

            if (parola.at(lung - 1) == 's' || parola.at(lung - 1) == 'S')
                cS++;
            lung--;
        }

        i++;
    }

    cout << "Il numero di 's' contenute: " << cS << endl;

    system("pause");
    return 0;
}