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

        Frazione Somma(Frazione f) {

            Frazione s;

            s.den = MCD(num, f.getDen());
            s.num = num * (s.den / den) + f.getNum() * (s.den / f.getDen());
            s.setFrazione(s.num, s.den);

            return s;
        }

        Frazione Prodotto(Frazione f) {

            Frazione p;

            p.num = num * f.getNum();
            p.den = den * f.getDen();
            p.setFrazione(p.num, p.den);

            return p;
        }

        void visualizza() {

            cout << num << "/" << den << endl;
        }
};

int main() {

    Frazione f1, f2, f3, fs, fp;
    int n, d;

    cout << "Inserire il numeratore e denominatore della prima frazione" << endl;
    cin >> n >> d;

    f1.setFrazione(n, d);

    cout << "Inserire il numeratore e denominatore della seconda frazione" << endl;
    cin >> n >> d;

    f2.setFrazione(n, d);

    cout << "Inserire il numeratore e denominatore della terza frazione" << endl;
    cin >> n >> d;

    f3.setFrazione(n, d);
    fs = f1.Somma(f2);

    cout << "La somma delle prime due frazioni: ";

    fs.visualizza();
    fp = fs.Prodotto(f3);

    cout << "Il prodotto della somma delle prime due frazioni con la terza: ";

    fp.visualizza();

    system("pause");
    return 0;
}