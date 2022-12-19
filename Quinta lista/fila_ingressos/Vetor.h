#include <iostream>

class Vetor {
private:
    int capacidade, tamanho;
    int *ptr;

public:
    Vetor(int capacidade) {
        this->capacidade = capacidade;
        this->tamanho = 0;
        ptr = new (std::nothrow) int [this->capacidade];
    }

    ~Vetor() {
        delete[] ptr;
        ptr = nullptr;
    }

    void checar_tamanho(int elemento) const {
        if(elemento < 0 || elemento >= tamanho) {
            throw new std::runtime_error("fail: índice fora do intervalo");
        }
    }

    void inserir_elemento(int elemento) {
        if (capacidade > tamanho) {
            ptr[tamanho] = elemento;
            tamanho++;
        }
    }

    bool testar_elemenento(int elemento) {
        for (int i = 0; i < tamanho; i++) {
            if(elemento == ptr[i]) {
                return true;
            }
        }

        return false;  
    }

    int indice(int elemento) {
        for(int i = 0; i < tamanho; i++) {
            if (ptr[i] == elemento){
                return i;
            }
        }

        return 0;
    }

    void remover(int elemento) {
        if(testar_elemenento(elemento)) {
            for(int i = indice(elemento); i < tamanho - 1; i++) {
                int aux = ptr[i+1];
                ptr[i] = aux;
            }

            tamanho--;
        }
    }

    void rotacionar(int num) {
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < tamanho; j++) {
                int aux;
                if(j == 0) {
                    aux = ptr[tamanho - 1];
                    ptr[tamanho - 1] = ptr[j];
                } else if (j == tamanho - 1) {
                    ptr[j - 1] = aux;
                } else {
                    ptr[j - 1] = ptr[j];
                }
            }
        }
    }

    friend std::ostream& operator<<(std::ostream &fila, const Vetor& vetor) {
        for(int i = 0; i < vetor.tamanho; i++) {
            fila << vetor.ptr[i] << " ";
        }

        return fila;
    }

    int& operator[](int indice) {
        checar_tamanho(indice);
        return ptr[indice];
    }
};