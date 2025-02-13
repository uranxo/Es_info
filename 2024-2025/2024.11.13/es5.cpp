#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 8 parle di almeno 6 caratteri" << endl;

    while (i < 8) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 6);

        i++;
    }
}

int iterative(string parole[]) {

    int i = 0, l, cTA = 0;

    while (i < 8) {

        l = parole[i].length();

        if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
            cTA++;

        i++;
    }

    return cTA;
}

int recursive(string parole[], int i, int cTA) {

    int l = parole[i].length();


    if (i == 7) {

        if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
            cTA++;

        return cTA;
    }

    else {

        if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
            cTA++;

        return recursive(parole, i + 1, cTA);
    }
}

int main() {

    string parole[8];

    inserimento(parole);

    cout << "Il numero di parole che terminano per 'a' utilizzando una funzione iterativa: " << iterative(parole) << endl;
    cout << "Il numero di parole che terminano per 'a' utilizzando una funzione ricorsiva: " << recursive(parole, 0, 0) << endl;

    system("pause");
    return 0;
}