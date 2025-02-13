#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[12];
    int i = 0, lung, cS = 0;

    cout << "Inserire 12 parole di almeno 4 caratteri" << endl;

    while (i < 12) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);

        i++;
    }

    i = 0;

    while (i < 25) {

        lung = parole[i].length();

        while (lung > 0) {

            if (parole[i].at(lung - 1) == 's' || parole[i].at(lung - 1) == 'S')
                cS++;

            lung--;
        }

        i++;
    }

    cout << "Numero di 's' contenute nelle parole inserite: " << cS << endl;

    system("pause");
    return 0;
}