#include <iostream>
#include <string>
using namespace std;

struct dati {

    string nome;
    string cognome;
    float voto;
};

int main() {

    dati studenti[23];
    int i = 0;

    cout << "Inserire nome, cognome e voto di 23 studenti" << endl;

    do {

        cout << "Inserire il nome" << endl;
        getline(cin, studenti[i].nome);
        cout << "Inserire il cognome" << endl;
        getline(cin, studenti[i].cognome);
        cout << "Inserire il voto" << endl;
        cin >> studenti[i].voto;
        cin.ignore();

        i++;
    } while (i < 23);

    i = 0;

    cout << "Gli studenti sufficienti:" << endl;

    do {

        if (studenti[i].voto >= 6) {

            cout << studenti[i].nome << " " << studenti[i].cognome << endl;
        }

        i++;
    } while (i < 23);

    system("pause");
    return 0;
}