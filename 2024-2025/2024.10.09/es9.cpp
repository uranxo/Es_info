#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generazione (int &n) {

    n = rand() % 1125 - 453;
}

void determinazione (int n, int &nMag, int &cTraNeg110E450, float &cPos) {

    if (n > nMag)
        nMag = n;
    
    if (n >= -110 && n <= 450)
        cTraNeg110E450++;
    
    if (n > 0)
        cPos++;
}

void visualizza(int nMag, int cTraNeg110E450, float percPos) {

    cout << "Il numero maggiore generato: " << nMag << endl;
    cout << "Il numero di numeri generati compresi tra -110 e 450: " << cTraNeg110E450 << endl;
    cout << "La percentuale dei numeri positivi generati: " << percPos << "%" << endl;
}

int main() {

    int n, nMag = -453, cTraNeg110E450 = 0, i = 0;
    float cPos = 0;
    srand(time(NULL));

    while (i < 84) {


        generazione(n);
        determinazione(n, nMag, cTraNeg110E450, cPos);

        i++;
    }

    float percPos = cPos / 84 * 100;

    visualizza(nMag, cTraNeg110E450, percPos);

    system("pause");
    return 0;
}