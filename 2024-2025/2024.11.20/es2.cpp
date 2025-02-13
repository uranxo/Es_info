#include <iostream>
#include <string>
using namespace std;

struct dati {

    string nome;
    string cognome;
    float voto;
};

void inserimento(dati studenti[]) {
    int i = 0;

    cout << "Inserire nome, cognome, voto accetabile di 25 studenti" << endl;

    while (i < 25) {

        cout << "Inserire il nome" << endl;
        cin >> studenti[i].nome;
        cout << "Inserire il cognome" << endl;
        cin >> studenti[i].cognome;
        cout << "Inserire il voto" << endl;

        do {
            
            cin >> studenti[i].voto;
        } while (studenti[i].voto < 0 || studenti[i].voto > 10);

        cin.ignore();
        
        i++;
    }
}

void visualizzazione(const dati studenti[]) {

    int i = 0;
    
    cout << "Gli studenti che hanno preso 4:" << endl;

    while (i < 25) {

        if (studenti[i].voto == 4)
            cout << studenti[i].nome << " " << studenti[i].cognome << endl;

        i++;
    }
}

int main() {

    dati studenti[25];

    inserimento(studenti);
    visualizzazione(studenti);

    system("pause");
    return 0;
}
