#include <iostream>
#include <string>
using namespace std;

void inserimento(float (&eta)[12]) {

    for (int i = 0; i < 12; i++) {

        cout << "Inserire l'eta' della persona" << endl;
        cin >> eta[i];
    }
}

void maggiorennato(float Eta[12], string (&maggiorenne)[12]) {

    for (int i = 0; i < 12; i++) {

        if (Eta[i] >= 18)
            maggiorenne[i] = "Maggiorenne";
        else
            maggiorenne[i] = "Minorenne";
    }
}

void visualizzazione(string Maggiorenne[12]) {

    cout << "Le persone sono:" << endl;
    for (int i = 0; i < 12; i++) {

        cout << Maggiorenne[i] << endl;
    }
}

int main() {

    float eta[12];
    string Maggiorennati[12];

    inserimento(eta);
    maggiorennato(eta, Maggiorennati);
    visualizzazione(Maggiorennati);

    system("pause");
    return 0;
}