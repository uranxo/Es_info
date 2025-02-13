#include <iostream>
using namespace std;

void inserimento(int n[][14]) {

    int i = 0, j;

    cout << "Inserire 196 numeri interi positivi" << endl;

    do {

        j = 0;

        do {

            do {

                cin >> n[i][j];
            } while (n[i][j] <= 0);

            j++;
        } while (j < 14);

        i++;
    } while (i < 14);
}

bool primalita(int n) {

    int i = n - 1;
    bool primo = true;

    if (n == 1)
        primo = false;
            
    else if (n == 2)
            primo = true;

    else {

        do {

            if (n % i == 0)
                    primo = false;
                    
            i--;
        } while (i > 1 && primo == true);
    }

    return primo;
}

int main() {

    int n[14][14], cPrim = 0, cNonPrim = 0, sPrim = 0, i = 0, j;
    float mPrim, percNonPrim;

    inserimento(n);

    do {

        j = 0;

        do {

            if (primalita(n[i][j]) == true) {

                cPrim++;
                sPrim += n[i][j];
            }

            else
                cNonPrim++;

            j++;
        } while (j < 14);

        i++;
    } while (i < 14);

    mPrim = (float)sPrim / cPrim;
    percNonPrim = (float)cNonPrim / 196 * 100;

    cout << "La media dei numeri primi inseriti: " << mPrim << endl;
    cout << "La percentuale dei numeri non primi inseriti: " << percNonPrim << "%" << endl;

    system("pause");
    return 0;
}