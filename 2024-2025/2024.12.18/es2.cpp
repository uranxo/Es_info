#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0, l;

    cout << "Inserire 8 parole di almeno 4 caratteri" << endl;

    while (i < 8) {

        do {

            cin >> parole[i];
        } while (l < 4);

        i++;
    }

    i = 0;

    while (i < 8) {

        l = parole[i].length();

        while (l - 1 >= 0) {

            parole[i].at(l - 1) = tolower(parole[i].at(l - 1));

            l--;
        }

        i++;
    }
}

int determinazione(const string parole[], int i, int cS) {

    int l = parole[i].length();

    if (i == 7) {

        while (l - 1 >= 0) {

            if (parole[i].at(l - 1) == 's')
                cS++;
            
            l--;
        }

        return cS;
    }

    else {

        while (l - 1 >= 0) {

            if (parole[i].at(l - 1) == 's')
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

    string parole[8];
    int cS;

    inserimento(parole);

    cS = determinazione(parole, 0, 0);

    visualizzazione(cS);

    system("pause");
    return 0;
}