#include <iostream>
using namespace std;

class Frazione {

    int num, den;
    int MCD(int a, int b) {

        if (b == 0)
            return a;
        
        else
            return MCD(b, a % b);
    }

    void semplifica() {

        int a;

        a = MCD(num, den);
        num = num / a;
        den = den / a;
    }

    public:

        void setFrazione(int n, int d) {

            num = n;

            if (d == 0) {

                do {

                    cout << "Hai inserito denominatore nullo, devi inserire un numero intero diverso da zero" << endl;
                    cin >> d;
                } while (d == 0);
            }

            den = d;
            semplifica();
        }

        int getNum() {

            return num;
        }

        int getDen() {

            return den;
        }

        Frazione Sottrazione(Frazione f) {

            Frazione s;

            s.den = MCD(num, f.getDen());
            s.num = num * (s.den / den) - f.getNum() * (s.den / f.getDen());
            s.setFrazione(s.num, s.den);

            return s;
        }

        void visualizza() {

            cout << num << "/" << den << endl;
        }
};

int main() {

    Frazione f1, f2, fs;
    int n, d;

    cout << "Inserire il numeratore e denominatore della prima frazione" << endl;
    cin >> n >> d;

    f1.setFrazione(n, d);

    cout << "Inserire il numeratore e denominatore della seconda frazione" << endl;
    cin >> n >> d;

    f2.setFrazione(n, d);
    fs = f1.Sottrazione(f2);

    cout << "La sottrazione delle 2 frazioni inserite: ";

    fs.visualizza();

    system("pause");
    return 0;
}