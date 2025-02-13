#include <iostream>
using namespace std;

void inserimento(int n[]);
void determinazione(const int n[], int &nMin, float &mMulti3, float &percMulti5);
void visualizzazione(int nMin, float mMulti3, float percMulti5);

int main() {

    int n[43], nMin;
    float mMulti3, percMulti5;

    inserimento(n);
    determinazione(n, nMin, mMulti3, percMulti5);
    visualizzazione(nMin, mMulti3, percMulti5);

    system("pause");
    return 0;
}

void inserimento(int n[]) {

    int i = 0;

    cout << "Inserire 43 numeri interi positivi" << endl;

    do {

        do {

            cin >> n[i];
        } while (n[i] <= 0);
        
        i++;
    } while (i < 43);
}

void determinazione(const int n[], int &nMin, float &mMulti3, float &percMulti5) {

    int i = 0, cMulti3 = 0, cMulti5 = 0, sMulti3 = 0;

    do {

        if (i == 0)
            nMin = n[i];

        if (n[i] < nMin)
            nMin = n[i];

        if (n[i] % 3 == 0) {

            cMulti3++;
            sMulti3 += n[i];
        }

        if (n[i] % 5 == 0)
            cMulti5++;

        i++;
    } while (i < 43);

    mMulti3 = (float)sMulti3 / cMulti3;
    percMulti5 = (float)cMulti5 / 43 * 100;
}

void visualizzazione(int nMin, float mMulti3, float percMulti5) {

    cout << "Il numero minore inserito: " << nMin << endl;
    cout << "La media dei numeri multipli di 3 inseriti: " << mMulti3 << endl;
    cout << "La percentuale dei numeri multipli di 5 inseriti " << percMulti5 << "%" << endl;
}