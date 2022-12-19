
bool primo(int numero) {

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0)
            return false;   
    }

    return true;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int numeroA = 0;
    cout << "Digite um número: ";
    cin >> numeroA;
    
    int numeroB;
    cout << "Digite um outro número: ";
    cin >> numeroB;


    while (numeroA <=numeroB) {
        if(primo(numeroA) == true) {
            cout << numeroA << endl;
        }

        numeroA++;
    }

    return 0;
}

