#include <iostream>
#include <string>
using namespace std;

struct dati {

    string nome, cognome;
    float eta;
};

void inserimento(dati persone[]) {

    int i = 0;

    cout << "Inserire nome, cognome ed eta' di 25 persone" << endl;

    do {

        cout << "Inserire il nome" << endl;
        getline(cin, persone[i].nome);
        cout << "Inserire il cognome" << endl;
        getline(cin, persone[i].cognome);
        cout << "Inserire l'eta'" << endl;
        cin >> persone[i].eta;
        cin.ignore();

        i++;
    } while (i < 25);
}

void visualizzazione(const dati persone[]) {

    int i = 0;

    cout << "Le persone inserite con un eta' superiore a 60 anni:" << endl;

    do {

        if (persone[i].eta > 60)
            cout << persone[i].nome << " " << persone[i].cognome << endl;

        i++;
    } while (i < 25);
}

int main() {

    dati persone[25];

    inserimento(persone);
    visualizzazione(persone);

    system("pause");
    return 0;
}