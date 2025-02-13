#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[10];
    int i = 0, j = 0, lung, cPal = 0;
    bool pal;

    cout << "Inserire 10 parole di almeno 4 caratteri" << endl;

    while (i < 10) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);
        
        i++;
    }

    i = 0;

    while (i < 10) {

        lung = parole[i].length();
        pal = true;
        j = 0;

        while (j < lung / 2 && pal == true) {

            if (parole[i].at(j) != parole[i].at(lung - j - 1))
                pal = false;
            j++;
        }

        if (pal == true)
            cPal++;
    }

    cout << "Numero di parole palindrome inserite: " << cPal << endl;

    system("pause");
    return 0;
}