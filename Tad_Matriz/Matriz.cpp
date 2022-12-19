// Arquivo de Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"
using namespace std;

// Aloca espaco dinamicamente para matriz com m linhas e n colunas
Matriz::Matriz(int m, int n) {
    lin = m;
	col = n;
    mat = new (std::nothrow) int *[lin];

	if(mat == nullptr) {
		cout << "nao foi possivel alocar a matriz" << endl;
	}

	for(int i = 0; i < lin; i++) {
		mat[i] = new int[col];
		for(int j = 0; j < col; j++) {
			mat[i][j] = 0;
		}
	}
}   

// Destrutor: Libera a memoria que foi alocada dinamicamente no construtor
Matriz::~Matriz() {
	for(int i = 0; i < linhas(); i++) {
		delete[] mat[i];
		mat[i] = nullptr;
	}

    delete mat;
	mat = nullptr;

	cout << "matriz liberada" << endl;
}   

// Retorna o numero de linhas da matriz
int Matriz::linhas() {
	return this->lin;
} 

// Retorna o numero de colunas da matriz
int Matriz::colunas() { 
	return this->col;
}

// Retorna o valor da celula [i][j] da matriz
int Matriz::getValor(int i, int j) {
	return mat[i][j];
} 

// Atribui valor a celula [i][j] da matriz
void Matriz::setValor(int valor, int i, int j) {
	mat[i][j] = valor;
}

// Imprimir a matriz 
void Matriz::print() {
    for(int i = 0; i < linhas(); ++i) {
		for(int j = 0; j < colunas(); ++j) {
			cout << setw(7) << mat[i][j];
		}
		
		cout << "\n";
	}
} 

// Soma matrizes
Matriz *Matriz::soma(Matriz& B) {
 if (B.linhas() != linhas() || B.colunas() != colunas()) {
		return nullptr;

	} else {
		Matriz *C = new Matriz(linhas(), colunas());

		for(int i = 0; i < linhas(); i++) {
			for(int j = 0; j < colunas(); j++) {
				int soma = mat[i][j] + B.getValor(i,j);
				C->setValor(soma, i, j);
			}
		}

		return C;
	}
}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz& B) {
	if(colunas() != B.linhas()) {
		return nullptr;

	} else {
		Matriz *C = new Matriz(linhas(), B.colunas());

		for(int i = 0; i < linhas(); i++) {
			for(int j = 0; j < B.colunas(); j++) {
				int mul = 0;
				for(int aux = 0; aux < B.colunas(); aux++) {
					mul += mat[i][aux] * B.getValor(aux,j);
				}

				C->setValor(mul, i ,j);
			}
		}

		return C;
	}
}