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

void visualizzazione(float m) {

    cout << "La media dei numeri inseriti: " << m << endl;
}

int main() {

    int cN = 0, s = 0;
    float m;

    inserimento(cN, s);
    
    m = (float)s / cN;

    visualizzazione(m);

    system("pause");
    return 0;
}