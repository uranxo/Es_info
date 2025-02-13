#include <iostream>
using namespace std;

void inserimento(int n[]) {

    int i = 0;

    cout << "Inserire 18 numeri interi positivi" << endl;

    do {

        do {

            cin >> n[i];
        } while (n[i] <= 0);
        
        i++;
    } while (i < 18);
}

void determinazione (const int n[], int &nMin, int &sPar, float &mDisp) {

    int i = 0, cDisp = 0, sDisp = 0;

    do {

        if (i == 0)
            nMin = n[i];
        
        if (n[i] < nMin)
            nMin = n[i];
        
        if (n[i] % 2 == 0)
            sPar += n[i];
        
        if (n[i] % 2 != 0) {
            cDisp++;
            sDisp += n[i];
        }

        i++;
    } while (i < 18);

    mDisp = (float)sDisp / cDisp;
}

void visualizzazione(int nMin, int sPar, float mDisp) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La somma dei numeri pari inseriti: " << sPar << endl;
    cout << "La media dei numeri dispari inseriti: " << mDisp << endl;
}

int main() {

    int n[18], nMin, sPar = 0;
    float mDisp;

    inserimento(n);
    determinazione(n, nMin, sPar, mDisp);
    visualizzazione(nMin, sPar, mDisp);

    system("pause");
    return 0;
}