#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[16];
    int i = 0, lung, lungMin, cIT = 0;

    cout << "Inserire 16 parole che terminano per 'i'" << endl;

    while (i < 16) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (parole[i].at(lung - 1) != 'i' && parole[i].at(lung - 1) != 'I');

        i++;
    }

    i = 0;

    while (i < 16) {

        lung = parole[i].length();

        if (parole[i].at(0) == 't' || parole[i].at(0) == 'T')
            cIT++;
        if (i == 0)
            lungMin = lung;
        if (lung < lungMin)
            lungMin = lung;

        i++;
    }
    
    cout << "Numero di parole inserite che iniziano per 't': " << cIT << endl;
    cout << "Numero di caratteri della parola piu' corta: " << lungMin << endl;

    system("pause");
    return 0;
}