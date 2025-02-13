#include <iostream>
#include <string>
using namespace std;

int main() {

    string parola;
    int i = 0, lung, lungMag, cT = 0;

    cout << "Inserire 14 parole che terminano in 'o'" << endl;

    do {

        do {

            cin >> parola;
            lung = parola.length();
            if (i = 0)
                lungMag = lung;
        } while (parola.at(lung - 1) != 'o' && parola.at(lung - 1) != 'O');

        if (lung > lungMag)
            lungMag = lung;

        do {

            if (parola.at(lung - 1) == 't' || parola.at(lung - 1) == 'T')
                cT++;
            lung--;
        } while (lung > 0);
        
        i++;
    } while (i < 14);

    cout << "Il numero di 't' contenute: " << cT << endl;
    cout << "La lunghezza maggiore di una parola inserita: " << lungMag << endl;

    system("pause");
    return 0;
}