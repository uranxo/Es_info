#include <iostream>
#include <string>
using namespace std;

float inserimento(string lato) {

    float asset;

    do {

        cout << "Inserire " << lato << " di un rettangolo" << endl;
        cin >> asset;
    } while (asset <= 0);

    return asset;
}

float perimetro(float b, float h) {

    float peri;
    peri = 2 * (b + h);

    return peri;
}

void visualizzazione(float peri) {

    cout << "Il perimetro del rettangolo e': " << peri << endl;
}

int main() {

    float base, altezza;

    base = inserimento("la base");
    altezza = inserimento("l'altezza");

    visualizzazione(perimetro(base, altezza));

    system("pause");
    return 0;
}