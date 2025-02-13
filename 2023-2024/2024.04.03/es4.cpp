#include <iostream>
#include <string>
using namespace std;

string triangolo(float lato1, float lato2, float lato3) {

    string tipo;
    if (lato1 == lato2 && lato2 == lato3)
        tipo = "equilatero";
    else if (lato1 != lato2 && lato2 != lato3 && lato3 != lato1)
        tipo = "scaleno";
    else
        tipo = "isoscele";
    
    return tipo;
}

void visualizzazione(string triangolo) {

    cout << "Il triangolo e' " << triangolo << endl;
}

int main() {

    float l1, l2, l3;

    cout << "Inserire i 3 lati di un triangolo" << endl;
    cin >> l1 >> l2 >> l3;

    visualizzazione(triangolo(l1, l2, l3));

    system("pause");
    return 0;
}