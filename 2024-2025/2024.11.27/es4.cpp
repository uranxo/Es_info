#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {
    
    int i = 0, l;

    cout << "Inserire 10 parole di almeno 5 caratteri" << endl;

    while (i < 10) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 5);

        i++;
    }
}

int iterative(const string parole[]) {

    int i = 0, l, lMin = 5;

    while (i < 10) {

        l = parole[i].length();

        if (l < lMin)
            lMin = l;

        i++;
    }

    return lMin;
}

int recursive(const string parole[], int i, int lMin) {

    int l = parole[i].length();
    
    if (i == 9) {
        
        if (l < lMin)
            return lMin;
    }

    else {

        if (l < lMin)
            lMin = l;

        return recursive(parole, i + 1, lMin);
    }
}

int main() {

    string parole[10];

    inserimento(parole);

    cout << "La lunghezza minore delle parole inserite determinata tramite funzione iterativa: " << iterative(parole) << endl;
    cout << "La lunghezza minore delle parole inserite determinata tramite funzione ricorsiva: " << recursive(parole, 0, 5) << endl;

    system("pause");
    return 0;
}