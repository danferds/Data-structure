#include <iostream>
using namespace std;

struct Aluno {
    char nome[80];
    int matricula = 0;
    char diciplina[120];
    double nota = 0;
};

Aluno cadastrar_aluno(Aluno alu) {
    //cout << "Iforme o nome do aluno: ";
    cin >> alu.nome;

    //cout << "Iforme o  número de matrícula do aluno: ";
    cin >> alu.matricula;
    cin.ignore();

    //cout << "Iforme a diciplina: ";
    cin >> alu.diciplina;

    //cout << "Informe a nota na diciplina: ";
    cin >> alu.nota;
    cin.ignore();

    return alu; 
}

void imprimir_maior_nota(Aluno alu_a, Aluno alu_b) {

    if(alu_a.nota > alu_b.nota) {
        std:: cout.precision(1);
        std:: cout <<  std::fixed << alu_a.nome << " , " << alu_a.nota << endl;
    } else if(alu_a.nota == alu_b.nota) {
        std:: cout.precision(1);
        std:: cout <<  std::fixed << alu_a.nome << " e " << alu_b.nome << " , " << alu_a.nota << endl;
    } else {
        std:: cout.precision(1);
        std:: cout <<  std::fixed << alu_b.nome << " , " << alu_b.nota << endl;
    }
}

int main(int argc, char const *argv[]) {
    
    Aluno alu_a, alu_b;

    alu_a = cadastrar_aluno(alu_a);
    alu_b = cadastrar_aluno(alu_b);
    imprimir_maior_nota(alu_a, alu_b);

    return 0;
}

