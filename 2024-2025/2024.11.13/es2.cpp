#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0;

    cout << "Inserisci 20 parole" << endl;

    while (i < 20) {

        cin >> parole[i];
        i++;
    }
}

void ordinamento(string parole[]) {

    int i, l;
    bool scambio = true;
    
    while (i < 20) {

        l = parole[i].length();
        
        while (l - 1 >= 0) {

            parole[i].at(l - 1) = tolower(parole[i].at(l - 1));
            l--;
        }

        i++;
    }

    while (scambio == true) {

        scambio = false;
        i = 0;

        while (i < 20 - 1) {

            if (parole[i] < parole[i + 1]) {

                parole[i].swap(parole[i + 1]);
                scambio = true;
            }

            i++;
        }
    }
}

void visualizzazione(const string parole[]) {

    int i = 0;

    cout << "Le parole inserite ordinate in ordine alfabetico decrescente:" << endl;

    while (i < 20) {

        cout << parole[i] << endl;

        i++;
    }
}

int main() {

    string parole[20];
    int i = 0, l, sL = 0;

    inserimento(parole);

    while (i < 20) {

        l = parole[i].length();
        sL += l;

        i++;
    }

    cout << "La somma delle lunghezze delle parole inserite: " << sL << endl;

    ordinamento(parole);
    visualizzazione(parole);

    system("pause");
    return 0;
}