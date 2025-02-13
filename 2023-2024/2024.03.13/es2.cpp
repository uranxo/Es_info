#include <iostream>
#include <string>
using namespace std;

int main() {

    const int N = 18;
    string parole[N];
    int i = 0, lung, pos, cDi = 0, cDa = 0;

    cout << "Inserire " << N << " parole di almeno 4 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);
        
        i++;
    } while (i < N);

    i = 0;

    do {

        lung = parole[i].length();

        do {

            parole[i].at(lung - 1) = tolower(parole[i].at(lung - 1));
            lung--;
        } while (lung - 1 >= 0);
        
        i++;
    } while (i < N);

    i = 0;

    do {

        pos = parole[i].find("di");

        do {

            if (pos != string::npos)
                cDi++;

            pos = parole[i].find("di", pos + 1);
        } while (pos != string::npos);
        
        i++;
    } while (i < N);

    i = 0;

    do {

        pos = parole[i].find("da");

        do {

            if (pos != string::npos)
                cDa++;

            pos = parole[i].find("da", pos + 1);
        } while (pos != string::npos);
        
        i++;
    } while (i < N);

    cout << "Numero di 'di' contenuti all'interno delle parole inserite: " << cDi << endl;
    cout << "Numero di 'da' contenuti all'interno delle parole inserite: " << cDa << endl;

    system("pause");
    return 0;
}