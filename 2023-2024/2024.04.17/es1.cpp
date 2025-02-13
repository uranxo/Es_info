#include <iostream>
using namespace std;

void detMag(float nIns, float &nMag) {

    if (nIns > nMag)
        nMag = nIns;
}

int main() {

    float n1, n2, n3, n4, nMag;

    cout << "Inserire 4 numeri" << endl;
    cin >> n1 >> n2 >> n3 >> n4;

    nMag = n1;
    
    detMag(n2, nMag);
    detMag(n3, nMag);
    detMag(n4, nMag);

    cout << "Il numero maggiore tra quelli inseriti: " << nMag << endl;
    
    system("pause");
    return 0;
}