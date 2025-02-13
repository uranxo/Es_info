#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 8 parole di almeno 4 caratteri" << endl;

    while (i < 15) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 4);

        i++;
    }
}

int determinazione(const string parole[], int i, int cS) {

    int l = parole[i].length();

    if (i == 7) {

        while (l - 1 >= 0) {

            if (parole[i].at(l - 1) == 's' || parole[i].at(l - 1) == 'S')
                cS++;

            l--;
        }

        return cS;
    }

    else {

        while (l - 1 >= 0) {

            if (parole[i].at(l - 1) == 's' || parole[i].at(l - 1) == 'S')
                cS++;

            l--;
        }

        return determinazione(parole, i + 1, cS);
    }
}

void visualizzazione(int cS) {

    cout << "Il numero di 's' presenti nelle parole inserite: " << cS << endl;
}

int main() {

    string parole[15];

    inserimento(parole);
    int cS = determinazione(parole, 0, 0);
    visualizzazione(cS);

    system("pause");
    return 0;
}