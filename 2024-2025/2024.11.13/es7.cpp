#include <iostream>
#include <string>
using namespace std;

void inserimento(string parole[]) {

    int i = 0;

    cout << "Inserire 25 parole" << endl;

    while (i < 25) {

        cin >> parole[i];

        i++;
    }
}

void determinazione(const string parole[], string &pCALMag) {

    int i = 0, l, lMag = 0;
    bool a;

    while (i < 25) {

        a = false;
        l = parole[i].length();

        while (l - 1 >= 0 || a == false) {

            if (parole[i].at(l - 1) == 'a' || parole[i].at(l - 1) == 'A')
                a = true;

            l--;
        }

        l = parole[i].length();

        if (a == true) {

            if (l > lMag) {

                lMag = l;
                pCALMag = parole[i];
            }

            if (l == lMag)
                pCALMag += " " + parole[i];
        }

        i++;
    }
}

void visualizzazione(const string pCALMag) {

    cout << "La/e parola/e che contengono almeno una 'a' con lunghezza maggiore: " << pCALMag << endl;
}

int main() {

    string parole[25], pCALMag = "";

    inserimento(parole);
    determinazione(parole, pCALMag);
    visualizzazione(pCALMag);

    system("pause");
    return 0;
}