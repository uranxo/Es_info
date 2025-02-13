#include <iostream>
#include <string>
using namespace std;

int main() {

    string frase;
    int lung, cPer = 0, cA = 0, cSpazi = 0;

    cout << "Inserire una frase" << endl;

    do {

        getline(cin, frase);
        lung = frase.length();
    } while (lung < 30);

    do {

        frase.at(lung - 1) = tolower(frase.at(lung - 1));
        lung--;
    } while (lung > 0);

    size_t pos = frase.find("per");

    while (pos != string::npos) {

        cPer++;
        pos = frase.find("per", pos + 1);
    }

    for (lung = frase.length(); lung > 0; lung--) {

        if (frase.at(lung - 1) == 'a')
            cA++;
        if (frase.at(lung - 1) == ' ') 
            cSpazi++;
    }

    cout << "Numero di 'per' contenuti nella frase inserita: " << cPer << endl;
    cout << "Numero di 'a' contenute nella frase inserita: " << cA << endl;
    cout << "Numero di spazi contenuti nella frase inserita: " << cSpazi << endl;

    system("pause");
    return 0;
}