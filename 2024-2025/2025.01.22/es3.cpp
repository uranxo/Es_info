#include <iostream>
#include <string>
using namespace std;

struct data {

    int giorno, mese, anno;
};

struct dati {

    string nome, cognome;
    struct data dataNascita;
};

void determinazione(int &cNMarzo, int &cNP2000) {

    int i = 0;
    dati persona;

    cout << "Inserire nome, cognome, giorno, mese e anno di nascita di 15 persone" << endl;

    while(i < 15) {

        cout << "Inserire il nome" << endl;
        getline(cin, persona.nome);
        cout << "Inserire il cognome" << endl;
        getline(cin, persona.cognome);
        cout << "Inserire il giorno di nascita" << endl;
        cin >> persona.dataNascita.giorno;
        cout << "Inserire il mese di nascita" << endl;
        cin >> persona.dataNascita.mese;
        cout << "Inserire l'anno di nascita" << endl;
        cin >> persona.dataNascita.anno;
        cin.ignore();

        if(persona.dataNascita.mese == 3)
            cNMarzo++;
        
        if(persona.dataNascita.anno < 2000)
            cNP2000++;

        i++;
    }
}

void visualizzazione(int cNMarzo, int cNP2000) {

    cout << "Il numero di persone nate a marzo: " << cNMarzo << endl;
    cout << "Il numero di persone nate prima del 2000: " << cNP2000 << endl;
}

int main() {

    int cNMarzo = 0, cNP2000 = 0;

    determinazione(cNMarzo, cNP2000);
    visualizzazione(cNMarzo, cNP2000);

    system("pause");
    return 0;
}