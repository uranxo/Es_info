#include <iostream>
#include <string>

using namespace std;

int main() {

    int i = 0, cP = 0, lung;
    string parola;

    cout << "Inserire 18 parole che terminano con 'a'" << endl;

    do {

        do {

            cin >> parola;
            lung = parola.length();
        } while (parola.at(lung - 1) != 'a' && parola.at(lung - 1) != 'A');

        do {

            if (parola.at(lung - 1) == 'p' || parola.at(lung - 1) == 'P')
                cP++;
            lung--;
        } while (lung > 0);

        i++;
    } while (i < 18);

    cout << "Il numero di 'p' contenute: " << cP << endl;

    system("pause");
    return 0;
}