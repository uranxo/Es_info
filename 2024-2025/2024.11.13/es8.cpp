#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 10 parole di almeno 5 caratteri" << endl;

    while(i < 10) {
        
        do {

            cin >> parole[i];
            l = parole[i].length();
        } while(l < 5);

        i++;
    }
}

int iterative(const string parole[]) {

    int i = 0, l, lMag = 5;

    while (i < 10) {

        l = parole[i].length();

        if (l > lMag)
            lMag = l;

        i++;
    }
}

int recursive(const string parole[], int i, int lMag) {

    int l;

    l = parole[i].length();

    if (i == 9) {

        if (l > lMag)
            lMag = l;

        return lMag;
    }
    
    else {

        if (l > lMag)
            lMag = l;

        return recursive(parole, i + 1, lMag);
    }
}

int main() {

    string parole[10];

    inserimento(parole);

    cout << "La lunghezza maggiore delle parole inserite calcolata usando una funzione iterativa: " << iterative(parole) << endl;
    cout << "La lunghezza maggiore delle parole inserite calcolata usando una funzione ricorsiva: " << recursive(parole, 0, 5) << endl;

    system("pause");
    return 0;
}