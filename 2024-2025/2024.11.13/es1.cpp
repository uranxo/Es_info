#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0;

    cout << "Inserire 10 parole" << endl;

    while (i < 10) {

        cin >> parole[i];

        i++;
    }
}

void ordinamento(string parole[]) {

    int i = 0, j;

    while (i < 10) {

        j = 0;

        while (j < 10 - 1 - i) {

            if (parole[j].length() > parole[j + 1].length()) {

                parole[j].swap(parole[j + 1]);
            }

            j++;
        }

        i++;
    }
}

void visualizzione(const string parole[]) {

    int i = 0;

    cout << "Le parole inserite ordinate in ordine di lunghezza crescente:" << endl;

    while (i < 10) {

        cout << parole[i] << endl;

        i++;
    }
}

int main() {

    string parole[10];

    inserimento(parole);
    ordinamento(parole);
    visualizzione(parole);

    system("pause");
    return 0;
}