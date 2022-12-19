#include <iostream>
using namespace std;

struct Aluno {
    char nome[80];
    int matricula = 0;
    char diciplina[120];
    double nota = 0;
};

Aluno cadastrar_aluno(Aluno alu) {
    cout << "Iforme o nome do aluno: ";
    cin >> alu.nome;

    cout << "Iforme o  número de matrícula do aluno: ";
    cin >> alu.matricula;
    cin.ignore();

    cout << "Iforme a diciplina: ";
    cin >> alu.diciplina;

    cout << "Informe a nota na diciplina: ";
    cin >> alu.nota;
    cin.ignore();

    return alu; 
}

void imprimir_situacao_aluno(Aluno alu) {

    if(alu.nota >= 7) 
        cout << alu.nome << " aprovado(a) em " << alu.diciplina << endl;
    else
        cout << alu.nome << " reprovado(a) em " << alu.diciplina << endl;

}

int main(int argc, char const *argv[]) {
    
    Aluno alu;

    alu = cadastrar_aluno(alu);
    imprimir_situacao_aluno(alu);
    return 0;
}

