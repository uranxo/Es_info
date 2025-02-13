#include <iostream>
using namespace std;

void inserimento(float voti[]);
void determinazione(const float voti[], float &vMag, float &mVoti, float &percVMag7);
void visualizzazione(float vMag, float mVoti, float percVMag7);

int main() {

    float voti[30], vMag = 1, mVoti, percVMag7;

    inserimento(voti);
    determinazione(voti, vMag, mVoti, percVMag7);
    visualizzazione(vMag, mVoti, percVMag7);

    system("pause");
    return 0;
}

void inserimento(float voti[]) {

    int i = 0;

    cout << "Inserire 31 voti" << endl;

    while (i < 31) {

        cin >> voti[i];

        i++;
    }
}

void determinazione(const float voti[], float &vMag, float &mVoti, float &percVMag7) {

    int i = 0, sVoti = 0, cVMag7 = 0;

    while (i < 31) {

        if (voti[i] > vMag)
            vMag = voti[i];

        sVoti += voti[i];

        if (voti[i] > 7)
            cVMag7++;

        i++;
    }

    mVoti = (float)sVoti / 31;
    percVMag7 = (float)cVMag7 / 31 * 100;
}

void visualizzazione(float vMag, float mVoti, float percVMag7) {

    cout << "Il voto maggiore inserito: " << vMag << endl;
    cout << "La media dei voti inseriti: " << mVoti << endl;
    cout << "La percentuale dei voti maggiori di 7 inseriti: " << percVMag7 << "%" << endl;
}