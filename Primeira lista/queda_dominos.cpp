#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    
    int quantidadeDominos = 0;
    //cout << "Digite a quantidade de dominós: " << endl;
    cin >> quantidadeDominos;

    int dominos[quantidadeDominos];

    for(int i = 0; i < quantidadeDominos; i++) {
        //cout << "Digite o tamanho do dominó: " << endl;
        cin >> dominos[i];
    }

    bool ordem =  true;
    for (int i = 1; i < quantidadeDominos; i++) {
        if(dominos[i - 1] > dominos[i]) {
            ordem = false;
            break;
        } else {
            ordem = true;
        }
    }
    

    if (ordem == true) {
        cout << "ok";
    } else {
        cout << "precisa de ajuste";
    }

    
    return 0;
}
