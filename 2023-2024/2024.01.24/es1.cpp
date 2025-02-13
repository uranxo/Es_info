#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[25];
    int i = 0, lung, cA = 0;

    cout << "Inserire 25 parole che iniziano per 'a'" << endl;

    do {

        do {

            cin >> parole[i];
        } while (parole[i].at(0) != 'a' && parole[i].at(0) != 'A');

        i++;
    } while (i < 25);

    i = 0;

    do {

        lung = parole[i].length();

        do {

            if (parole[i].at(lung - 1) == 'a' || parole[i].at(lung - 1) == 'A')
                cA++;

            lung--;
        } while (lung > 0);

        i++;
    } while (i < 25);
    
    cout << "Numero di 'a' contenute nelle parole inserite: " << cA << endl;

    system("pause");
    return 0;
}