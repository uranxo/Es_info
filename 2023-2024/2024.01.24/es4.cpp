#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[22];
    int i = 0, lung;
    bool scambio = true;

    cout << "Inserire 22 parole di almeno 5 caratteri" << endl;

    while (i < 22) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (parole[i].length() < 5);

        i++;
    }

    i = 0;

    while (scambio == true) {

        scambio = false;
        i = 0;

        while (i < 22 - 1) {

            if (parole[i] < parole[i + 1]) {

                parole[i].swap(parole[i + 1]);
                scambio = true;
            }

            i++;
        }
    }

    i = 0;

    cout << "Parole inserite in ordine alfabetico decrescente:" << endl;

    while (i < 22) {

        cout << parole[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}