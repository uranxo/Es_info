#include <iostream>
#include <string>
using namespace std;

int main() {

    string parole[12];
    int i = 0, j = 0, lung;
    bool pal = true;

    cout << "Inserire 12 parole di almeno 4 caratteri" << endl;
    
    while (i < 12) {

        do {

            cin >> parole[i];
            lung = parole[i].length();
        } while (lung < 4);

        i++;
    }

    i = 0;

    while (i < 12) {

        lung = parole[i].length();

        while (j < lung / 2 && pal == true) {
            if (parole[i].at(j) != parole[i].at(lung - 1 - j))
                pal = false;

            j++;
        }
    }        

    if (pal == true)
        cout << "La parola inserita e' palindroma" << endl;
    else
        cout << "La parola inserita non e' palindroma" << endl;
    
    system("pause");
    return 0;
}