#include <iostream>
#include <string>
using namespace std;

void inserimento(int &voto);
void visualizzazione(float asset, string frase1, string frase2);
void medSuf(int sSuf, int cSuf, float &mSuf);
float percInsuf(int cInsuf);

int main() {

    int voto, votoMag = 1, cSuf = 0, cInsuf = 0, sSuf = 0, i = 0;
    float mSuf, perInsuf;

    do {

        do {

            inserimento(voto);
        } while (voto < 1 || voto > 10);
        
        if (voto > votoMag)
            votoMag = voto;
        if (voto >= 6) {

            sSuf += voto;
            cSuf++;
        }
        if (voto < 6)
            cInsuf++;

        i++;
    } while (i <  22);

    medSuf(sSuf, cSuf, mSuf);
    perInsuf = percInsuf(cInsuf);

    visualizzazione(((float)votoMag), "Il voto maggiore tra quelli inseriti: ", "");
    visualizzazione(mSuf, "La media dei voti sufficienti inseriti: ", "");
    visualizzazione(perInsuf, "La percentuale dei voti insufficienti inseriti: ", " %");

    system("pause");
    return 0;
}

void inserimento(int &voto) {

    cout << "Inserire un voto valido" << endl;
    cin >> voto;
}

void visualizzazione(float asset, string frase1, string frase2) {

    cout << frase1 << asset << frase2 << endl;
}

void medSuf(int sSuf, int cSuf, float &mSuf) {

    mSuf = (float)sSuf / cSuf;
}

float percInsuf(int cInsuf) {

    float percInsuf = (float)cInsuf / 22 * 100;

    return percInsuf;
}