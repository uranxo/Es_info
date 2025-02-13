#include <iostream>
#include <string>
using namespace std;

void inserimento(int &num1, int &num2, int &num3) {

    string ins = "Inserire un numero intero positivo";

    do {

        cout << ins << endl;
        cin >> num1;
    } while (num1 <= 0);
    
    do {

        cout << ins << endl;
        cin >> num2;
    } while (num2 <= 0);

    do {

        cout << ins << endl;
        cin >> num3;
    } while (num3 <= 0);
}

int mcd(int numA, int numB) {

    int resto, MCD;

    while (numB > 0) {

        resto = numA % numB;
        numA = numB;
        numB = resto;
    }

    MCD = numA;

    return MCD;
}

int mcd(int numA, int numB, int numC) {

    int resto, MCD;

    while (numB > 0) {

        resto = numA % numB;
        numA = numB;
        numB = resto;
    }

    MCD = numA;
    numA = MCD;
    numB = numC;

    while (numB > 0) {

        resto = numA % numB;
        numA = numB;
        numB = resto;
    }

    MCD = numA;
}

int main() {

    int num1, num2, num3;

    inserimento(num1, num2, num3);

    cout << "L'MCD dei primi due numeri: " << mcd(num1, num2) << endl;
    cout << "L'MCD degli ultimi due numeri: " << mcd(num2, num3) << endl;
    cout << "L'MCD dei tre numeri: " << mcd(num1, num2, num3) << endl;

    system("pause");
    return 0;
}