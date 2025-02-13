#include <iostream>
#include <string>
using namespace std;

void inserimento(string &parola);
void determinazione(string parola, int &lMin, int &cPIS, int &cPTO);
void visualizzazione(int lMin, int cPIS, int cPTO);

int main() {

    int lMin, cPIS = 0, cPTO = 0, i;
    string parola;

    cout << "Inserire 18 parole di almeno 4 caratteri" << endl;

    for (i = 0; i < 18; i++) {

        inserimento(parola);
        determinazione(parola, lMin, cPIS, cPTO);
    }

    visualizzazione(lMin, cPIS, cPTO);

    system("pause");
    return 0;
}

void inserimento(string &parola) {

    int l;

    do {

        cin >> parola;

        l = parola.length();
    } while (l < 4);
}

void determinazione(string parola, int &lMin, int &cPIS, int &cPTO) {

    int l, i;

    l = parola.length();

    if (l < lMin)
        lMin = l;

    if (parola.at(0) == 's' || parola.at(0) == 'S')
        cPIS++;
    
    if (parola.at(l - 1) == 'o' || parola.at(l - 1) == 'O')
        cPTO++;
}

void visualizzazione(int lMin, int cPIS, int cPTO) {

    cout << "La lunghezza della parola di lunghezza minore inserita: " << lMin << endl;
    cout << "Il numero di parole inserite che iniziano con 's': " << cPIS << endl;
    cout << "Il numero di parole inserite che terminano con 'o': " << cPTO << endl;
}