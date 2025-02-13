#include <iostream>
using namespace std;

void inserimento(float voti[], float &vMag, int &cVSuf, int &cVInsuf, float &sVSuf) {

    int i = 0;

    cout << "Inserire 21 voti" << endl;

    do {

        cin >> voti[i];

        if (voti[i] > vMag)
            vMag = voti[i];
        
        if (voti[i] >= 6) {

            cVSuf++;
            sVSuf += voti[i];
        }

        if (voti[i] < 6)
            cVInsuf++;

        i++;
    } while (i < 21);
}

void visualizzazione(float vMag, float mVSuf, float percVInsuf) {

    cout << "Il voto maggiore inserito: " << vMag << endl;
    cout << "La media dei voti sufficienti inseriti: " << mVSuf << endl;
    cout << "La percentuale dei voti insufficienti inseriti: " << percVInsuf << "%" << endl;
}

int main() {

    int cVSuf = 0, cVInsuf = 0;
    float voti[21], vMag = 1, sVSuf = 0, mVSuf, percVInsuf;

    inserimento(voti, vMag, cVSuf, cVInsuf, sVSuf);

    mVSuf = sVSuf / cVSuf;
    percVInsuf = (float)cVInsuf / 21 * 100;

    visualizzazione(vMag, mVSuf, percVInsuf);

    system("pause");
    return 0;
}