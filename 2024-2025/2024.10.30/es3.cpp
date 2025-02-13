#include <iostream>
using namespace std;

void inserimento(int &cN, int &s) {

    int n;

    cout << "Inserire numeri interi" << endl;

    do {

        cin >> n;
        s += n;
        cN++;
    } while (n != 0);
}

void visualizzazione(int s) {

    cout << "La somma dei numeri inseriti: " << s << endl;
}

int main() {

    int cN = 0, s = 0;

    inserimento(cN, s);
    visualizzazione(s);

    system("pause");
    return 0;
}