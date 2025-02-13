#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void inserimento(float &asset, string frase);
void altezza(float lato, float base, float &altezza);
string determinazione(float a, float peri);

int main() {

    float l, b, h, a, peri;
    string frase;

    inserimento(l, "Inserire il lato obliquo");
    inserimento(b, "Inserire la base");
    altezza(l, b, h);

    a = (b * h) / 2;
    peri = 2 * l + b;
    frase = determinazione(a, peri);

    cout << frase << endl;

    system("pause");
    return 0;
}

void inserimento(float &asset, string frase) {

    cout << frase << endl;
    cin >> asset;
}

void altezza(float lato, float base, float &altezza) {

    altezza = sqrt(pow(lato, 2) - pow((base / 2), 2));
}

string determinazione(float a, float peri) {

    string frase;

    if (a > (pow(peri, 2)))
        frase = "L'area e' maggiore del quadrato del perimetro";
    else if (a < (pow(peri, 2)))
        frase = "L'area e' minore del quadrato del perimetro";
    else
        frase = "L'area e' uguale al quadrato del perimetro";

    return frase;
}