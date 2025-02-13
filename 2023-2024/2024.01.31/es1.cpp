#include <iostream>
#include <string>
using namespace std;

int main() {

    string parola;
    int i = 0, lung;
    bool pal = true;

    do {

        cout << "Inserire una parola che inizia per 's'" << endl;
        cin >> parola;
    } while (parola.at(0) != 's' && parola.at(0) != 'S');

    lung = parola.length();

    i = 0;

    do {

        if (parola.at(i) != parola.at(lung - 1 - i))
            pal = false;

        i++;
    } while (i < lung / 2 && pal == true);

    if (pal == true)
        cout << "La parola inserita e' palindroma" << endl;
    else
        cout << "La parola inserita non e' palindroma" << endl;

    system("pause");
    return 0;
}