#include <sstream>
#include <iostream>

class Vetor {
private:
    int capacidade, tamanho;
    int *match;
    std::string *ptr;

public:
    Vetor(int capacidade) {
        this->capacidade = capacidade;
        tamanho = 0;
        ptr = new (std::nothrow) std::string [this->capacidade];
        match = new (std::nothrow) int [this->capacidade];

        for(int i = 0; i < this->capacidade; i++) {
            match[i] = 0;
        }
    }

    ~Vetor() {
        delete[] ptr;
        ptr = nullptr;
        delete[] match;
        match = nullptr;
    }

    void inserir(std::string linha) {
        ptr[tamanho] = linha;
        tamanho++;
    }

    void operator==(const Vetor& vet) {
        for(int i = 0; i < tamanho; i++) {
            for(int j = 0; j < vet.tamanho; j++) {
                if(ptr[i] == vet.ptr[j]) {
                    match[i]++;
                }
            }
        }
    }

    friend std::ostream& operator<<(std::ostream &out, const Vetor& vet) {
        for (int i = 0; i < vet.tamanho; i++) {
            out << vet.match[i];
            if(i < vet.tamanho - 1)
                out << " " ;
        }
        
        return out;
    }

    std::string& operator[](int index) {
        return ptr[index];
    }
};