#include <iostream>
using namespace std;

const int N = 23;

void inserimento(float voti[]) {

    int i = 0;

    cout << "Inserire " << N << " voti accettabili" << endl;

    while (i < N) {

        do {

            cin >> voti[i];
        } while (voti[i] < 1 || voti[i] > 10);

        i++;
    }
}

void determinazione(const float voti[], float &vMag, float &mVSuf, float &percVInsuf) {

    int i = 0, cVSuf = 0, cVInsuf = 0;
    float sVSuf = 0;

    vMag = voti[0];

    while (i < N) {

        if (voti[i] > vMag)
            vMag = voti[i];
        
        if (voti[i] >= 6) {

            sVSuf += voti[i];
            cVSuf++;
        }
        
        if (voti[i] < 6)
            cVInsuf++;

        i++;
    }

    mVSuf = sVSuf / cVSuf;
    percVInsuf = (float)cVInsuf / N * 100;
}

void visualizzazione(float vMag, float mVSuf, float percVInsuf) {

    cout << "Il voto maggiore inserito: " << vMag << endl;
    cout << "La media dei voti sufficienti inseriti: " << mVSuf << endl;
    cout << "La percentuale dei voti insufficienti inseriti: " << percVInsuf << "%" << endl;
}

int main() {

    float voti[N], vMag, mVSuf, percVInsuf;

    inserimento(voti);
    determinazione(voti, vMag, mVSuf, percVInsuf);
    visualizzazione(vMag, mVSuf, percVInsuf);

    system("pause");
    return 0;
}