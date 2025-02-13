#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[15];
    int i = 0, lung;
    bool scambio = true;

    cout << "Inserire 15 parole che terminano per 'a'" << endl;

    while (i < 15) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (parole[i].at(lung - 1) != 'a' && parole[i].at(lung - 1) != 'A');

        while (lung > 0) {

            parole[i].at(lung - 1) = toupper(parole[i].at(lung - 1));
            lung--;
        }
        
        i++;
    }

    i = 0;

    while (scambio == true) {

        scambio = false;
        i = 0;

        while (i < 15 - 1) {

            if (parole[i] < parole[i + 1]) {

                parole[i].swap(parole[i + 1]);
                scambio = true;
            }

            i++;
        }
    }

    i = 0;

    cout << "Le parole inserite trasformate tutte in maiuscolo e ordinate in ordine alfabetico decrescente:" << endl;

    while (i < 15) {

        cout << parole[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}