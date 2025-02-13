#include <iostream>
#include <string>
using namespace std;

int main() {

    int i = 0, cT = 0, lung;
    string parola;

    cout << "Inserire 13 parole di almeno 4 caratteri" << endl;

    while (i < 13) {
        
        do {

            cin >> parola;
            lung = parola.length();
        } while (lung < 4);

        while (lung > 0) {

            if (parola.at(lung - 1) == 't' || parola.at(lung - 1) == 'T')
                cT++;
                
            lung--;
        }

        i++;
    }

    cout << "Il numero di 't' contenute: " << endl;

    system("pause");
    return 0;
}