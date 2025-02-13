#include <iostream>
#include <cmath>
using namespace std;

class Punto {

    float x, y;

    public:

        Punto() {

            setCords(0, 0);
        }

        Punto(float x_val, float y_val) {

            setCords(x_val, y_val);
        }


        inline void setCords(int pX, int pY) {

            x = pX;
            y = pY;
        }

        inline float getX() {

            return x;
        }

        inline float getY() {

            return y;
        }

        inline float distanzaDa00() {

            return sqrt(pow(getX(), 2) + pow(getY(), 2));
        }
};

int main() {

    Punto P[50];
    int i = 0;
    float x, y, d, dMag;
    srand(time(NULL));

    cout << "Inserire le cordinate di 50 punti" << endl;

    while (i < 50) {

        cout << "Inserire la x del punto " << endl;
        cin >> x;
        cout << "Inserire la y del punto " << endl;
        cin >> y;

        P[i].setCords(x, y);
        i++;
    }

    dMag = P[0].distanzaDa00();
    i = 0;

    while (i < 50) {

        d = P[i].distanzaDa00();

        if (d > dMag)
            dMag = d;

        i++;
    }

    i = 0;

    cout << "I le cordinate dei punti che distano maggiormente dall'origine: " << endl;

    while (i < 50) {

        d = P[i].distanzaDa00();
        
        if (d == dMag) {

            cout << "p" << i << "(" << P[i].getX() << "; " << P[i].getY() << ")" << endl;
        }

        i++;
    }

    system("pause");
    return 0;
}