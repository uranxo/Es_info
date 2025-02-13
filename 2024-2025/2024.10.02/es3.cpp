#include <iostream>
using namespace std;

void inserimento (float voti[]) {

    cout << "Inserire 27 voti" << endl;

    for (int i = 0; i < 27; i++) {

        cin >> voti[i];
    }
}

void determinazione(const float voti[], float &vMin, float &mVInsuf, float &percVSuf) {

    int cVInsuf = 0, cVSuf = 0;
    float sVInsuf = 0;

    for (int i = 0; i < 27; i++) {
        
        if (voti[i] < vMin)
            vMin = voti[i];
        
        if (voti[i] < 6) {
            cVInsuf++;
            sVInsuf += voti[i];
        }

        if (voti[i] >= 6)
            cVSuf++;
    }

    mVInsuf = sVInsuf / cVInsuf;
    percVSuf = (float)cVSuf / 27 * 100;
}

void visualizzazione(float vMin, float mVInsuf, float percVSuf) {

    cout << "Il voto minore inserito: " << vMin << endl;
    cout << "La media dei voti insufficienti inseriti: " << mVInsuf << endl;
    cout << "La percentuale dei voti sufficienti inseriti: " << percVSuf << "%" << endl;
}

int main() {

    float voti[27], vMin = 10, mVInsuf, percVSuf;

    inserimento(voti);
    determinazione(voti, vMin, mVInsuf, percVSuf);
    visualizzazione(vMin, mVInsuf, percVSuf);

    system("pause");
    return 0;
}