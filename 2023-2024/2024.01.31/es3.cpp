#include <iostream>
#include <string>
using namespace std;

int main() {

    string parola, parole = "", parolaTemp = "";
    int i, j, lung, lungTot;
    bool pal;

    cout << "Inserire 15 parole di almeno 3 caratteri" << endl;

    for (i = 0; i < 15; i++) {

        do {

            cin >> parola;
            lung = parola.length();
        } while (lung < 3);

        pal = true;

        for (j = 0; j < lung / 2 && pal == true; j++) {

            if (parola.at(j) != parola.at(lung - 1 - j))
                pal = false;
        }

        parole += parola + " ";
    }

    lungTot = parole.length();

    cout << "Le parole palindrome inserite:" << endl;

    for (i = 0; i < lungTot - 1; i++) {

        if (parole.at(i) != ' ')
            parolaTemp += parole.at(i);
        else {

            parola = parolaTemp;
            lung = parola.length();
            pal = true;

            for (j = 0; j < lung / 2 && pal == true; j++) {

                if (parola.at(j) != parola.at(lung - 1 - j))
                    pal = false;
            }

            if (pal == true)
                cout << parola << endl;

            parolaTemp = "";
        }
    }

    system("pause");
    return 0;
}