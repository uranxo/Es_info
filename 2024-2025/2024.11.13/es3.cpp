#include <iostream>
#include <string>
using namespace std;

const int N = 12;

void inserimento(string parole[]) {

    int i = 0;
    
    cout << "Inserire " << N << " parole" << endl;

    do {

        cin >> parole[i];

        i++;
    } while (i < N);
}

void ordinamento(string parole[]) {

    int i = 0, j, l;

    do {

        l = parole[i].length();
        
        while (l - 1 >= 0) {

            parole[i].at(l - 1) = tolower(parole[i].at(l - 1));
            l--;
        }

        i++;
    } while (i < N);

    i = 0;

    do {

        j = 0;

        do {

            if (parole[j] > parole[j + 1]) {

                parole[j].swap(parole[j + 1]);
            }

            j++;
        } while (j < N - 1);

        i++;
    } while (i < N);
}

void visualizzazione(const string parole[]) {

    int i = 0;

    cout << "Le parole inserite, le quali prime lettere sono state sostituite con una 'z', e ordinate in ordine alfabetico crescente:" << endl;

    do {

        cout << parole[i] << endl;

        i++;
    } while (i < N);
}

int main() {

    string parole[N];
    int i = 0;

    inserimento(parole);

    do {

        parole[i].at(0) = 'z';
        i++;
    } while (i < N);

    ordinamento(parole);
    visualizzazione(parole);

    system("pause");
    return 0;
}