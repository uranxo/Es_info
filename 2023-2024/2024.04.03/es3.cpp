#include <iostream>
using namespace std;

void inserimento(int &y) {

    cout << "Inserire un anno" << endl;
    cin >> y;
}

void visualizzazione(bool bisestile) {

    if (bisestile == true)
        cout << "L'anno e' bisestile" << endl;
    else
        cout << "L'anno non e' bisestile" << endl;
}

int main() {

    int anno;
    inserimento(anno);

    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
        visualizzazione(true);
    else
        visualizzazione(false);

    system("pause");
    return 0;
}