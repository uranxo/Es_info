#include <iostream>
using namespace std;

void inserimento(float &eta) {

    cout << "Inserire la propria eta'" << endl;
    cin >> eta;
}

void visualizzazione(bool maggiorennato) {

    if (maggiorennato == true)
        cout << "Sei maggiorenne" << endl;
    else
        cout << "Sei minorenne" << endl;
}

int main() {

    float anni;
    inserimento(anni);

    if (anni >= 18)
        visualizzazione(true);
    else
        visualizzazione(false);

    system("pause");
    return 0;
}