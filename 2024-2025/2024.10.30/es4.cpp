#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lancio(int &dado1, int &dado2, int &dado3) {

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;
}

void visualizzazione(int dado1, int dado2, int dado3) {

    cout << "Valore del primo dado: " << dado1 << endl;
    cout << "Valore del secondo dado: " << dado2 << endl;
    cout << "Valore del terzo dado " << dado3 << endl;
}

int main() {

    int dado1, dado2, dado3;
    srand(time(NULL));

    lancio(dado1, dado2, dado3);
    visualizzazione(dado1, dado2, dado3);

    system("pause");
    return 0;
}