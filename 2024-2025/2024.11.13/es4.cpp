#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 5 parole di almeno 4 caratteri" << endl;

    while (i < 5) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 4);

        i++;
    }
}

int iterative(const string parole[]) {

    int i = 0, cIA = 0;

    while (i < 5) {

        if (parole[i].at(0) == 'a' || parole[i].at(1) == 'A')
            cIA++;

        i++;
    }

    return cIA;
}

int recursive(const string parole[], int i, int cIA) {

    if (i == 4) {

        if (parole[i].at(0) == 'a' || parole[i].at(1) == 'A')
            cIA++;
        
        return cIA;
    }

    else {

        if (parole[i].at(0) == 'a' || parole[i].at(1) == 'A')
            cIA++;
        
        return recursive(parole, i + 1, cIA);
    }
}

int main() {

    string parole[5];

    inserimento(parole);

    cout << "Il numero di parole che inizianiano per 'a' calcolato con una funzione iterativa: " << iterative(parole) << endl;
    cout << "Il numero di parole che inizianiano per 'a' calcolato con una funzione ricorsiva: " << recursive(parole, 0, 0) << endl;

    system("pause");
    return 0;
}