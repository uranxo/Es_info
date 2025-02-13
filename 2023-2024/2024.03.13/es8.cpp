#include <iostream>
#include <cmath>
using namespace std;

void inserimento(float &raggio) {

    do {

        cout << "Inserire il raggio del cerchio" << endl;
        cin >> raggio;
    } while (raggio <= 0);
}

void visualizzazione(float area, float circonferenza) {

    cout << "L'area del cerchio: " << area << endl;
    cout << "La circonferenza del cerchio: " << circonferenza << endl;
}

int main() {

    float r, a, circ;
    
    inserimento(r);

    a = 3.14 * pow(r, 2);
    circ = 2 * 3.14 * r;

    visualizzazione(a, circ);

    system("pause");
    return 0;
}