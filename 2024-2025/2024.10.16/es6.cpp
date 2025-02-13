#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]);
void determinazione(const string parole[], int &lMin, int &cPIS, int &cPTO);
void visualizzazione(int lMin, int cPIS, int cPTO);

int main() {

    string parole[18];
    int lMin, cPIS = 0, cPTO = 0;

    inserimento(parole);
    determinazione(parole, lMin, cPIS, cPTO);
    visualizzazione(lMin, cPIS, cPTO);

    system("pause");
    return 0;
}

void inserimento(string parole[]) {

    int i, l;

    cout << "Inserire 18 parole di almeno 4 caratteri" << endl;

    for (i = 0; i < 18; i++) {

        do {

            cin >> parole[i];

            l = parole[i].length();
        } while (l < 4);
    }
}

void determinazione(const string parole[], int &lMin, int &cPIS, int &cPTO) {

    int i, l;
    lMin = parole[0].length();

    for (i = 0; i < 18; i++) {

        l = parole[i].length();

        if (l < lMin)
            lMin = l;

        if (parole[i].at(0) == 's' || parole[i].at(0) == 'S')
            cPIS++;
        
        if (parole[i].at(l - 1) == 'o' || parole[i].at(l - 1) == 'O')
            cPTO++;
    }
}

void visualizzazione(int lMin, int cPIS, int cPTO) {

    cout << "Il numero di caratteri della parola con lunghezza minore inserita: " << lMin << endl;
    cout << "Il numero di parole inserite che iniziano per 's': " << cPIS << endl;
    cout << "Il numero di parole inserite che terminano per 'o': " << cPTO << endl;
}