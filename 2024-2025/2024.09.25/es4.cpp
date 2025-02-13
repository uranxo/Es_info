#include <iostream>
using namespace std;

void inserimento(float &voto, float &vMag, int &cVSuf, int &cVInsuf, float &sVSuf) {

    int i = 0;

    cout << "Inserire 21 voti" << endl;

    while (i < 21) {

        cin >> voto;

        if (voto > vMag) 
            vMag = voto;

        if (voto >= 6) {

            cVSuf++;
            sVSuf += voto;
        }
        
        else 
            cVInsuf++;
        
        i++;
    }  
}

void visualizzazione(float vMag, float mVSuf, float percVInsuf) {

    cout << "Il voto maggiore inserito: " << vMag << endl;
    cout << "La media dei voti sufficienti inseriti: " << mVSuf << endl;
    cout << "La percentuale dei voti insufficienti inseriti: " << percVInsuf << "%" << endl;
}

int main() {

    int cVSuf = 0, cVInsuf = 0;
    float voto, vMag = 1, sVSuf = 0, mVSuf, percVInsuf;

    inserimento(voto, vMag, cVSuf, cVInsuf, sVSuf);

    mVSuf = sVSuf / cVSuf;
    percVInsuf = (float)cVInsuf / 21 * 100;

    visualizzazione(vMag, mVSuf, percVInsuf);

    system("pause");
    return 0;
}