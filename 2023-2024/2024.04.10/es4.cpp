#include <iostream>
using namespace std;

void inserimento(int (&voti)[25]) {

    int  i = 0;

    do {

        do {

            cout << "Inserire il voto" << endl;
            cin >> voti[i];
        } while (voti[i] < 1 || voti[i] > 10);

        i++;
    } while (i < 25);
}

int votoMag(int Voti[25]) {

    int vMag, i = 0;
    vMag = Voti[0];

    do {

        if (Voti[i] > vMag)
            vMag = Voti[i];

        i++;
    } while (vMag < 25);

    return vMag;
}

int votoMin(int Voti[25]) {

    int vMin, i = 0;
    vMin = Voti[0];

    do {

        if (Voti[i] < vMin)
            vMin = Voti[i];

        i++;
    } while (vMin < 25);

    return vMin;
}

float media(int Voti[25]) {

    int s = 0, i = 0;
    float m;

    do {

        s += Voti[i];
        i++;
    } while (i < 25);

    m = (float)s / 25;
    
    return m;
}

int main() {

    int voti[25];

    inserimento(voti);

    cout << "Il voto maggiore: " << votoMag(voti) << endl;
    cout << "Il voto minore: " << votoMin(voti) << endl;
    cout << "La media dei voti: " << media(voti) << endl;

    system("pause");
    return 0;
}