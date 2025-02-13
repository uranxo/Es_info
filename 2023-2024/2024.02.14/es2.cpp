#include <iostream>
#include <string>
using namespace std;

int main() {

    const int N = 10;
    string parole[N];
    int i = 0, j = 0, lung, cPal = 0;
    bool pal;

    cout << "Inserire " << N << " parole di almeno 5 caratteri" << endl;

    do {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 5);

        i++;
    } while (i < N);

    i = 0;

    do {

        lung = parole[i].length();

        do {

            parole[i].at(lung - 1) = tolower(parole[i].at(lung - 1));
            lung--;
        } while (lung > 0);

        i++;
    } while (i < N);

    i = 0;

    do {

        lung = parole[i].length();
        pal = true;
        j = 0;

        do {

            if (parole[i].at(j) != parole[i].at(lung - 1 - j))
                pal = false;

            j++;
        } while (j < lung / 2 && pal == true);

        if (pal == true)
            cPal++;

        i++;
    } while (i < N);

    cout << "Numero di parole palindrome inserite: " << cPal << endl;
    
    system("pause");
    return 0;
}