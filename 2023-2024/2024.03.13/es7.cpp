#include <iostream>
using namespace std;

void inserimento(int &num1, int &num2, int &num3, int &num4, int &num5) {

    cout << "Inserire 5 numeri interi" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
}

void visualizzazione(float media) {

    cout << "La media dei numeri inseriti: " << media << endl;
}

int main() {

    int n1, n2, n3, n4, n5;
    float m;

    inserimento(n1, n2, n3, n4, n5);

    m = (float)(n1 + n2 + n3 + n4 + n5) / 5;
    
    visualizzazione(m);

    system("pause");
    return 0;
}