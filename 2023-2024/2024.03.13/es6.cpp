#include <iostream>
using namespace std;

void inserimento(int &num1, int &num2, int &num3, int &num4) {

    do {

        cout << "Inserire 4 numeri interi positivi" << endl;
        cin >> num1 >> num2 >> num3 >> num4;
    } while (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0);
}

void visualizzazione(int numMin) {

    cout << "Il numero minore inserito: " << numMin << endl;
}

int main() {

    int n1, n2, n3, n4, nMin;

    inserimento(n1, n2, n3, n4);

    if (n1 < n2 && n1 < n3 && n1 < n4)
        nMin = n1;
    else if (n2 < n1 && n2 < n3 && n2 < n4)
        nMin = n2;
    else if (n3 < n1 && n3 < n2 && n3 < n4)
        nMin = n3;
    else
        nMin = n4;
    
    visualizzazione(nMin);

    system("pause");
    return 0;
}