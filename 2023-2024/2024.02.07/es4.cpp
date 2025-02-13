#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[15];
    int i = 0, lung, cLa = 0, cS = 0, cO = 0;

    cout << "Inserire 15 parole che iniziano per 'l'" << endl;

    while (i < 15) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (parole[i].at(0) != 'l' && parole[i].at(0) != 'L');

        i++;
    }

    for (i = 0; i < 15; i++) {

        lung = parole[i].length();
        
        do {

            parole[i].at(lung - 1) = tolower(parole[i].at(lung - 1));
            lung--;
        } while (lung > 0);
        
        i++;
    }

    i = 0;

    do {

        lung = parole[i].length();
        size_t pos = parole[i].find("la");

        while (pos != string::npos) {

            cLa++;
            pos = parole[i].find("la", pos + 1);
        }
        
        i++;
    } while (i < 15);

    for (i = 0; i < 15; i++) {

        lung = parole[i].length();
        
        do {

            if (parole[i].at(lung - 1) == 's' || parole[i].at(lung - 1) == 'S')
                cS++;
            if (parole[i].at(lung - 1) == 'o' || parole[i].at(lung - 1) == 'O')
                cO++;

            lung--;
        } while (lung > 0);
    }

    cout << "Numero di 'la' contenuti nelle parole inserite: " << cLa << endl;
    cout << "Numero di 's' contenute nelle parole inserite: " << cS << endl;
    cout << "Numero di 'o' contenute nelle parole inserite: " << cO << endl;

    system("pause");
    return 0;
}