#include <iostream>
#include <sstream>
#include "Vetor.h"
using namespace std;

int main(int argc, char const *argv[]) {   
    int tamanho; cin >> tamanho;

    Vetor fila(tamanho);
    int elemento;

    for(int i = 0; i < tamanho; i++) {
        cin >> elemento;

        fila.inserir_elemento(elemento);
    }

    int tam;
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cin >> elemento;

        fila.remover(elemento);
    }

    cout << fila << endl;
    return 0;
}