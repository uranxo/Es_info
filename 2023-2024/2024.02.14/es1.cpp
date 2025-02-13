#include <iostream>
#include <string>
using namespace std;

int main() {

    const int N = 30;
    string parole[N];
    int i = 0, lung, cSi = 0, cA = 0, cSpazi = 0, pos;

    cout << "Inserire " << N <<  " parole di almeno 4 caratteri" << endl;

    for (i = 0; i < N; i++) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);
    }

    for (i = 0; i < N; i++) {

        lung = parole[i].length();

        while (lung > 0) {

            parole[i].at(lung - 1) = tolower(parole[i].at(lung - 1));
            lung--;
        }
    }

    i = 0;

    do {

        pos = parole[i].find("si");

        while (pos != string::npos) {

            cSi++;
            pos = parole[i].find("si", pos + 1);
        }

        i++;
    } while (i < N);

    i = 0;

    for (i = 0; i < N; i++) {

        lung = parole[i].length();

        while (lung > 0) {

            if (parole[i].at(lung - 1) == 'a')
                cA++;
            if (parole[i].at(lung - 1) == ' ')
                cSpazi++;
            
            lung--;
        }
    }

    cout << "Numero di 'si' contenuti nelle parole inserite: " << cSi << endl;
    cout << "Numero di 'a' contenute nelle parole inserite: " << cA << endl;
    cout << "Numero di spazi contenuti nelle parole inserite: " << cSpazi << endl;

    system("pause");
    return 0;
}