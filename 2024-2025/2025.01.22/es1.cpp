#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0;

    cout << "Inserire 15 parole che iniziano per 'a'" << endl;

    while (i < 15) {

        do {

            cin >> parole[i];
        } while (parole[i].at(0) != 'a' || parole[i].at(0) != 'A');

        i++;
    }
}

int determinazione(const string parole[], int i, int cA) {

    int l = parole[i].length();

    if (i == 14) {

        while (l - 1 > 0) {

            if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
                cA++;

            l--;
        }

        return cA;
    }

    else {

        while (l - 1 > 0) {

            if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
                cA++;

            l--;
        }

        return determinazione(parole, i + 1, cA);
    }
}

void visualizzazione(int cA) {

    cout << "Il numero di 'a' presenti nelle parole inserite: " << cA << endl;
}

int main() {

    string parole[15];

    inserimento(parole);
    int cA = determinazione(parole, 0, 15);
    visualizzazione(cA);

    system("pause");
    return 0;
}