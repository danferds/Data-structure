
#include <iostream>
using namespace std;

void troca(int *aPtr = 0, int *bPtr = 0) {
    int aux = *aPtr;
    *aPtr = *bPtr;
    *bPtr = aux;
}

int main(int argc, char const *argv[]) {
    
    //cout << "Digite o número x: ";
    int x; cin >> x;

    //cout << "Digite o número y: ";
    int y; cin >> y;

    troca(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}