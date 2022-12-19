#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void imprimir_vector(vector<int>& vet, vector<int>::const_iterator primeiro_elemento) {
    if (primeiro_elemento == vet.end())
        return;
    else 
        cout << *primeiro_elemento++ << " "; imprimir_vector(vet, primeiro_elemento);
} 

void imprimir_vector_reverso(vector<int>& vet, vector<int>::const_iterator ultimo_elemento) {
    if (ultimo_elemento == vet.begin() - 1)
        return;
    else
        cout << *ultimo_elemento-- << " "; imprimir_vector_reverso(vet, ultimo_elemento);
} 

void reverter_vector(vector<int>& vet, int primeira_posi, int ultima_posi) {
    int auxiliar;
    if(primeira_posi < ultima_posi) {
        auxiliar = vet[primeira_posi];
        vet[primeira_posi] = vet[ultima_posi];
        vet[ultima_posi] = auxiliar;

        reverter_vector(vet, primeira_posi + 1, ultima_posi - 1);
    }
} 

int soma_elementos(vector<int> vet, int tamanho) {
    if(tamanho == 0)
        return 0;
    else    
        return vet[tamanho - 1] + soma_elementos(vet, tamanho - 1);
}

int multiplica_elementos(vector<int> vet, int tamanho) {
    if(tamanho == 0)
        return 1;
    else    
        return vet[tamanho - 1] * multiplica_elementos(vet, tamanho - 1);
}

int menor_elemento(vector<int> vet, int tamanho, int auxiliar) {
    if(tamanho == 0) 
        return vet.at(auxiliar);
    else if(vet[tamanho] < vet[auxiliar])
        return menor_elemento(vet, tamanho - 1, tamanho);
    else
        return menor_elemento(vet, tamanho - 1, auxiliar);
}

int main(int argc, char const *argv[]) { 
    //cout << "Digite os elementos: ";
    string line; getline(cin, line);

    stringstream ss(line);
    vector<int> vet;

    int value;
    while (ss >> value)
        vet.push_back(value);

    cout << "vet : " << "[ "; imprimir_vector(vet, vet.begin()); cout << "]" << endl;
    cout << "rvet: " << "[ "; imprimir_vector_reverso(vet, vet.end() - 1); cout << "]" << endl;

    cout << "sum : " << soma_elementos(vet, vet.size()) << endl;
    cout << "mult: " << multiplica_elementos(vet, vet.size()) << endl;
    cout << "min : " << menor_elemento(vet, vet.size() - 1, 0) << endl;
    
    reverter_vector(vet, 0, vet.size() - 1); 
    cout << "inv : " << "[ "; imprimir_vector(vet, vet.begin()); cout << "]" << endl;

    return 0;
}