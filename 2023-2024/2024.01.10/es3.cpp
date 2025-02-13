#include <iostream>
#include <string>
using namespace std;

int main() {

    int i, lung, pIS = 0, lungMag = 5;
    string parola;

    cout << "Inserire 11 parole di almeno 5 caratteri" << endl;

    for (i = 0; i < 11; i++) {

        do {

            cin >> parola;
            lung = parola.length();
        } while (lung < 5);

        if (parola.at(0) == 's' || parola.at(0) == 'S')
            pIS++;

        if (lung > lungMag)
            lungMag = lung;
    }

    cout << "Parole che iniziano con 's': " << pIS << endl;
    cout << "Numero di caratteri della parola piú lunga: " << lungMag << endl;

    system("pause");
    return 0;
}