#include <iostream>
#include <cmath>
using namespace std;

class cerchio {

    float r;

    public:
    
        void setRaggio(float raggio) {

            if (raggio <= 0) {

                do {

                    cout << "Inserire un numero positivo" << endl;
                    cin >> raggio;
                } while (raggio <= 0);

                r = raggio;
            }
        }

        float getRaggio() {

            return r;
        }

        float calcolaCircoferenza() {

            return r * 2 * 3.14;
        }

        float calcolaArea() {

            return pow(r, 2) * 3.14;
        }

        float calcolaDiametro() {

            return r * 2;
        }
};

int main() {

    cerchio c[12];
    float raggio;
    int i = 0;

    cout << "Inserire il raggio di 12 cerchi" << endl;

    while (i < 12) {

        cin >> raggio;

        c[i].setRaggio(raggio);
    }

    i = 0;

    cout << "I dati dei 12 cerchi i quali raggi sono stati inseriti:" << endl;

    while (i < 12) {
        
        cout << "Cerchio " << i + 1 << ":" << endl;
        cout << "Circoferenza: " << c[i].calcolaCircoferenza() << endl;
        cout << "Area: " << c[i].calcolaArea() << endl;
        cout << "Diametro: " << c[i].calcolaDiametro() << endl;

        i++;
    }
    

    system("pause");
    return 0;
}