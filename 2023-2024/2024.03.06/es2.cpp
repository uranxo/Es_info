#include <iostream>
using namespace std;

int inserimento() {

    int eta;

    do {

        cout << "Inserire l'eta' di una persona" << endl;
        cin >> eta;
    } while (eta < 0);

    return eta;
}

bool maggiorennato(int eta) {

    bool maggiorenne;

    if (eta >= 18)
        maggiorenne = true;
    else
        maggiorenne = false;

    return maggiorenne;
}

void visualizzazione(bool maggiorenne) {

    if (maggiorenne == true)
        cout << "La persona la cui eta' e' stata inserita e' maggiorenne" << endl;
    else
        cout << "La persona la cui eta' e' stata inserita e' minorenne" << endl;
}

int main() {

    visualizzazione(maggiorennato(inserimento()));

    system("pause");
    return 0;
}