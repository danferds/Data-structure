#include <iostream>
#include <sstream>
#include <vector>
#include "Vetor.h"
using namespace std;

int main(int argc, char const *argv[]) {
    int tamanho; cin >> tamanho;
    cin.ignore();

    Vetor dados(tamanho);
    string linha;

    for(int i = 0; i < tamanho; i++) {
        cin >> linha; 
        cin.ignore();

        dados.inserir(linha);
    }

    int tam;
    cin >> tam;
    cin.ignore();
    Vetor consulta(tam);

    for(int i = 0; i < tam; i++) {
        cin >> linha;
        cin.ignore();

        consulta.inserir(linha);
    }

    consulta == dados;
    cout << consulta << endl;
    
    return 0;
}