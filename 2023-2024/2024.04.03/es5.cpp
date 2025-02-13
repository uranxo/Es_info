#include <iostream>
#include <string>
using namespace std;

string ordinamento(float num1, float num2, float num3) {

    string numOrdinCresc = "";

    if (num1 < num2 && num2 < num3)
        numOrdinCresc = to_string(num1) + " " + to_string(num2) + " " + to_string(num3);
    else if (num2 < num3 && num3 < num1)
        numOrdinCresc = to_string(num2) + " " + to_string(num3) + " " + to_string(num1);
    else
        numOrdinCresc = to_string(num3) + " " + to_string(num1) + " " + to_string(num2);
    
    return numOrdinCresc;
}

void visualizzazione(string numOrdinati) {

    cout << "I numeri inseriti ordinati in ordine crescente: " << numOrdinati << endl;
}

int main() {

    float n1, n2, n3;

    cout << "Inserire 3 numeri" << endl;
    cin >> n1 >> n2 >> n3;

    visualizzazione(ordinamento(n1, n2, n3));

    system("pause");
    return 0;
}