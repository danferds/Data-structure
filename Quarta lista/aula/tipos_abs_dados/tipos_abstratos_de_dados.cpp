/*  Tipo abstrados de dados é uma especificação de um conjunto de dados de operações que podem 
    ser executadas sobre esses dados, TAD == dados + operações;

    A ideia com isso é encapsular de quem usa um determinado tipo de dado a forma concreta que ele foi 
    implementado;


    Usuários do TAD tem acesso a operações, mas não tem acesso a detalhes da implementação;

    Tem duas partes principais: 
        Interface -> Define o comportamento do TAD, como as operações do tipo podem ser executadas, 
        mas não como essas operações são implementdas. Impacta do desenvolvimento do programa.

        Representação concreta -> É a implementação em si, que nos diz:
            - como um tda foi implementado;


    Uma classe tem dados e operações, um struct tem apenas dados.
*/

// criando uma classe, tem que ter o ponto e vírgula.

#include <iostream>
using namespace std;

class Pessoa {
private: // declara a visibilidade assim. tudo dpois de privato não é visivel ate aparecer um pubblic 
    int idade; 
    string nome;

public:
    Pessoa() { } // construtor. Caso crie um com parâmetro, o c++ não cria um vázio de forma automática
    // Construtor vázio também pode ser criado assim:
    //Pessoa() = default;

    Pessoa(int i, string n) {
        idade = i;
        nome = n;

    }

    void imprimir() {
        cout << idade << ", " << nome << endl;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    int getIdade() {
        return idade;
    }

    string getNome() {
        return this->nome;
    }
};

int main(int argc, char const *argv[]) {
    Pessoa p(23, "Daniel");

    // Alocando dinâmicamente.
    Pessoa *q = new Pessoa(19, "pessoa");

    p.imprimir();
    //q->imprimir();

    p.setIdade(24);
    p.imprimir();

}