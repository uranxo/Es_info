#include <iostream>
using namespace std;

void inserimento(int &n, int &cPar, int &cDisp, int &sPar) {

    int i = 0;

    while (i < 17) {

        do {

            cin >> n;
        } while (n <= 0);

        if (n %2 ==0) {

            cPar++;
            sPar += n;
        }

        else
            cDisp++;
        
        i++;
    }
}

void visualizzazione(float mPar, float percDisp) {

    cout << "La media dei numeri pari inseriti: " << mPar << endl;
    cout << "La percentuale dei numeri dispari inseriti: " << percDisp << "%" << endl;
}

int main() {

    int n, cPar = 0, cDisp = 0, sPar = 0;
    float mPar, percDisp;

    cout << "Inserire 17 numeri interi positivi" << endl;

    inserimento(n, cPar, cDisp, sPar);

    mPar = (float)sPar / cPar;
    percDisp = (float)cDisp / 17 * 100;

    visualizzazione(mPar, percDisp);

    system("pause");
    return 0;
}