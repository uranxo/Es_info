#include <iostream>
#include <string>
using namespace std;

struct dati {

    string nome;
    string cognome;
    float voto;
};

int main() {

    dati studente[23];
    int i = 0;

    cout << "Inserire nome, cognome e voto accettabile di 23 studenti" << endl;

    do {

        cout << "Inserire nome" << endl;;
        getline(cin, studente[i].nome);
        cout << "Inserire cognome" << endl;
        getline(cin, studente[i].cognome);
        cout << "Inserire voto" << endl;

        do {

            cin >> studente[i].voto;
        } while (studente[i].voto < 1 || studente[i].voto > 10);

        cin.ignore();

        i++;
    } while (i < 23);

    i = 0;

    cout << "Gli studenti inseriti sufficienti: " << endl;

    do {

        if (studente[i].voto >= 6)
            cout << studente[i].nome << " " << studente[i].cognome << endl;

        i++;
    } while (i < 23);

    system("pause");
    return 0;
}