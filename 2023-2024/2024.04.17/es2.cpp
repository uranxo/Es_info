#include <iostream>
using namespace std;

void calcola (int &n, int m, int &p) {

    if (n % 2 == 0)
        n = m + 4;
    else
        n = p - 5;

    cout << n << " " << m << endl;

    p = 7;
}

int main() {
    
    int x, y, z;
    x = 5;
    y = 8;
    z = 12;

    calcola(x, y, z);

    cout << y << " " << x << endl;

    calcola(y, z, x);

    cout << z << " " << y << endl;

    system("pause");
    return 0;
}

/*

1:


x = 5, y = 8, z = 12

n = 5, m = 8, p = 12

resto di 5 / 2 != 0 allora:

n = 12 - 5 = 7

mostra: "7 8"

p = 7

x = 7, y = 8, z = 7

mostra: "8 7"


2:


x = 7, y = 8, z = 7

n = 8, m = 7, p = 7

resto di 8 / 2 = 0 allora:

n = 7 + 4 = 11

mostra: "11 7"

p = 7

y = 11, z = 7, x = 7

mostra: "7 11"


In totale mostrerá:


7 8
8 7
11 7
7 11

*/