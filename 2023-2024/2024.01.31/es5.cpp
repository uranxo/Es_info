#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[11];
    int i = 0, j = 0, lung;
    
    cout << "Inserire 11 parole di almeno 6 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 6);

        i++;
    } while (i < 11);

    i = 0;

    do {

        j = 0;

        do {

            if (parole[j].length() > parole[j + 1].length())
                parole[j].swap(parole[j + 1]);
        } while (j < 11 - 1 - i);

        i++;
    } while (i < 11);

    i = 0;

    cout << "Le parole inserite ordinate in ordine di lunghezza crescente:" << endl;

    do {

        cout << parole[i] << endl;
        i++;
    } while (i < 11);
    
    system("pause");
    return 0;
}