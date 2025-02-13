#include <iostream>
#include <string>
using namespace std;

const int N = 18;

void inserimento(string parole[]);
void determinazione(const string parole[], int &lMin, int &cPLMag, string &pLMin);
void visualizzazione(int lMin, int cPLMag);

int main() {

    string parole[N], pLMin = "";
    int lMin, cPLMag = 1;

    inserimento(parole);
    determinazione(parole, lMin, cPLMag, pLMin);
    visualizzazione(lMin, cPLMag);

    cout << "Le parole inserite di lunghezza minore: " << pLMin << endl;

    system("pause");
    return 0;
}

void inserimento(string parole[]) {

    int i = 0;

    cout << "Inserire " << N << " parole" << endl;

    do {

        cin >> parole[i];

        i++;
    } while (i < N);
}

void determinazione(const string parole[], int &lMin, int &cPLMag, string &pLMin) {

    int i = 0, l, lMag;

    lMin = parole[0].length();
    lMag = parole[0].length();

    do {

        l = parole[i].length();

        if (l < lMin) {

            lMin = l;
            pLMin = parole[i];
        }

        if (l = lMin)
            pLMin += " " + parole[i];

        if (l > cPLMag)
            cPLMag = l;

        if (l = lMag)
            cPLMag += 1;

        i++;
    } while (i < N);
}

void visualizzazione(int lMin, int cPLMag) {

    cout << "Il numero di caratteri della parola inserita con lunghezza minore: " << lMin << endl;
    cout << "Il numero di parole inserite con lunghezza maggiore: " << cPLMag << endl;
}