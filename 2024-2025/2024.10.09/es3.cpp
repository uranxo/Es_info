#include <iostream>
using namespace std;

void inserimento(float &vMin, int &cVInsuf, int &cVSuf, float &sVInsuf) {

    float voto;
    int i = 0;

    cout << "Inserire 17 voti accettabili" << endl;

    while (i < 17) {

        do {

            cin >> voto;
        } while (voto < 1 || voto > 10);

        if (voto < vMin)
            vMin = voto;

        if (voto < 6) {

            sVInsuf += voto;
            cVInsuf++;
        }

        if (voto >= 6)
            cVSuf++;

        i++;
    }
}

void determinazione(int cVInsuf, int cVSuf, float sVInsuf, float &mVInsuf, float &percVSuf) {

    mVInsuf = sVInsuf / cVInsuf;
    percVSuf = (float)cVSuf / 17 * 100;
}

void visualizzazione(float vMin, float mVInsuf, float percVSuf) {

    cout << "Il voto minore inserito: " << vMin << endl;
    cout << "La media dei voti insufficienti inseriti: " << mVInsuf << endl;
    cout << "La percentuale dei voti sufficienti inseriti: " << percVSuf << "%" << endl;
}

int main() {

    int cVInsuf = 0, cVSuf = 0;
    float vMin = 10, sVInsuf = 0, mVInsuf, percVSuf;

    inserimento(vMin, cVInsuf, cVSuf, sVInsuf);
    determinazione(cVInsuf, cVSuf, sVInsuf, mVInsuf, percVSuf);
    visualizzazione(vMin, mVInsuf, percVSuf);

    system("pause");
    return 0;
}