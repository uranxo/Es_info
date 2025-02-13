#include <iostream>
#include <cmath>
using namespace std;

class Rombo {

    float diagMag, diagMin;

    public:

        Rombo() {

            setDiagonali(0.0, 0.0);
        }

        Rombo(float dMag_val, float dMin_val) {

            setDiagonali(dMag_val, dMin_val);
        }

        inline void setDiagonali(float dMag, float dMin) {

            if (dMag <= 0) {

                do {

                    cout << "Il valore della diagonale maggiore non e' accettabile, devi inserirne uno che sia maggiore di zero" << endl;
                    cin >> dMag;
                } while (dMag <= 0);
            }

            diagMag = dMag;

            if (dMin <= 0 || dMin > diagMag) {

                do {

                    cout << "Il valore della diagonale minore non e' accettabile, devi inserirne uno che sia maggiore di zero e minore del valore della diagonale maggiore" << endl;
                    cin >> dMag;
                } while (dMag <= 0 || dMin > diagMag);
            }

            diagMin = dMin;
        }

        inline float getDiagMag() {

            return diagMag;
        }

        inline float getDiagMin() {

            return diagMin;
        }

        inline float perimetro() {

            return 4 * sqrt(pow(diagMag / 2, 2) + pow(diagMin / 2, 2));
        }
};

int main() {

    Rombo R[63];
    int i = 0;
    float dMag, dMin, peri, periMag;

    cout << "Inserire il valore della diagonale maggiore e della diagonale minore di 63 rombi" << endl;

    while (i < 63) {

        cout << "Inserire la diagonale maggiore" << endl;
        cin >> dMag;
        cout << "Inserire la diagonale minore" << endl;
        cin >> dMin;

        R[i].setDiagonali(dMag, dMin);

        i++;
    }

    periMag = R[0].perimetro();
    i = 0;

    while (i < 63) {

        peri = R[i].perimetro();

        if (peri > periMag)
            periMag = peri;
        
        i++;
    }

    i = 0;

    cout << "Le diagonali dei rombi che hanno perimetro maggiore:" << endl;

    while(i < 63) {

        peri = R[i].perimetro();

        if (peri == periMag) {

            cout << "Rombo " << i << ":" << endl;
            cout << "Diagonale maggiore: " << R[i].getDiagMag() << endl;
            cout << "Diagonale minore: " << R[i].getDiagMin() << endl;
        }
        
        i++;
    }

    system("pause");
    return 0;
}