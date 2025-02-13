#include <iostream>
#include <string>
using namespace std;
struct dati {

    string nome;
    string cognome;
    float eta;
};

void inserimento(dati persone[]) {
    
    int i = 0;

    cout << "Inserire nome, cognome ed un eta', che sia accettabile, di 12 persone" << endl;

    while (i < 12) {

        cout << "Inserire il nome" << endl;
        getline(cin, persone[i].nome);
        cout << "Inserire il cognome" << endl;
        getline(cin, persone[i].cognome);
        cout << "Inserire l'eta'" << endl;

        do {

            cin >> persone[i].eta;
        } while (persone[i].eta < 0);

        cin.ignore();

        i++;
    }
}

string iterative(const dati persone[]) {

    int i = 0;
    string persMag18 = "";

    while (i < 12) {

        if (persone[i].eta >= 18)
            persMag18 += persone[i].nome + " " + persone[i].cognome + " " + to_string(persone[i].eta) + " anni\n";

        i++;
    }

    return persMag18;
}

string recursive(const dati persone[], int i, string persMag18) {

    if (i == 11) {

        if (persone[i].eta >= 18)
            persMag18 += persone[i].nome + " " + persone[i].cognome + " " + to_string(persone[i].eta) + " anni\n";

        return persMag18;
    }

    else {

        if (persone[i].eta >= 18)
            persMag18 += persone[i].nome + " " + persone[i].cognome + " " + to_string(persone[i].eta) + " anni\n";

        return recursive(persone, i + 1, persMag18);
    }
}

int main() {

    dati persone[12];

    inserimento(persone);

    cout << "I dati delle persone maggiorenni inserite determinate tramite funzione iterativa:\n" << iterative(persone) << endl;
    cout << "I dati delle persone maggiorenni inserite determinate tramite funzione ricorsiva:\n" << recursive(persone, 0, "") << endl;

    system("pause");
    return 0;
}