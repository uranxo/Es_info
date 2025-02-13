#include <iostream>
#include <string>
using namespace std;

struct dati {

    string nome, cognome;
    float voto;
};

void inserimento(dati studenti[]) {

    int i = 0;

    cout << "Inserire nome, cognome e voto accettabile di 23 studenti" << endl;

    while (i < 23) {

        cout << "Inserire il nome" << endl;
        getline(cin, studenti[i].nome);
        cout << "Inserire il cognome" << endl;  
        getline(cin, studenti[i].cognome);
        cout << "Inserire il voto" << endl;
        cin >> studenti[i].voto;
        cin.ignore();

        i++;
    }
}

void visualizzazione(const dati studenti[]) {

    int i = 0;

    cout << "Gli strudenti inseriti con voto inferiore a 8:" << endl;
    
    while (i < 23) {

        if (studenti[i].voto < 8)
            cout << studenti[i].nome << " " << studenti[i].cognome << endl;

        i++;
    }
}

int main() {

    dati studenti[23];

    inserimento(studenti);
    visualizzazione(studenti);

    system("pause");
    return 0;
}