#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[14];
    int i = 0, j = 0;

    cout << "Inserire 14 parole" << endl;

    while (i < 14) {

        cin >> parole[i];
        i++;
    }

    i = 0;

    while (i < 14) {

        j = 0;

        while (j < 14 - 1 - i) {

            if (parole[j].length() < parole[j + 1].length())
                parole[j].swap(parole[j + 1]);

            j++;
        }

        i++;
    }
    
    i = 0;

    cout << "Parole inserite in ordine di lunghezza decrescente:" << endl;
    
    while (i < 14) {

        cout << parole[i] << endl;
        i++;
    }

    system("pause");
    return 0;
}