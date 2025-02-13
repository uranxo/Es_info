#include <iostream>
#include <string>
using namespace std;

void inserimento(string &parola, int &cPIS, int &cPTA) {
    
    int i = 0, lung;

    cout << "Inserire 20 parole di almeno 6 caratteri" << endl;

    while (i < 20) {

        do {

            cin >> parola;
            
            lung = parola.length();
        } while (lung < 6);

        if (parola.at(0) == 'p' || parola.at(0) == 'P')
            cPIS++;
        
        if (parola.at(lung - 1) == 'a' || parola.at(lung - 1) == 'A')
            cPTA++;
        
        i++;
    }
}

void visualizzazione(int cPIS, int cPTA) {

    cout << "Il numero di parole che iniziano per 'p': " << cPIS << endl;
    cout << "Il numero di parole che terminano per 'a': " << cPTA << endl;
}

int main() {

    string parola;
    int cPIS = 0, cPTA = 0;

    inserimento(parola, cPIS, cPTA);
    visualizzazione(cPIS, cPTA);

    system("pause");
    return 0;
}