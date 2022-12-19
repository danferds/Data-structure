#include <iostream>
using namespace std;

struct Aluno {
    int matricula = 0;
    char nome[100];
    double media = 0;
};

int main(int argc, char const *argv[]) {
    cout << "Digite a quantidade de alunos: ";
    int quantidade_alunos; cin >> quantidade_alunos;

    Aluno alunos[quantidade_alunos];
    
    for(int i = 0; i < quantidade_alunos; i++) {
        cout << "Digite a matrícula do aluno: ";
        cin >> alunos[i].matricula;
        cin.ignore();

        cout << "Digite o nome do aluno: ";
        cin.get(alunos[i].nome, 100);

        cout << "Digite a média do aluno: ";
        cin >> alunos[i].media;
    }

    cout << "Digite a matrícula que deseja localizar: ";
    int localizar_matricula; cin >> localizar_matricula;

    bool encontrou = false;
    for(int i = 0; i < quantidade_alunos; i++) {
        if(alunos[i].matricula == localizar_matricula) {
            cout << alunos[i].nome << endl;
            std:: cout.precision(1);
            std:: cout <<  std::fixed << alunos[i].media;
            encontrou = true;
            break;
        } else {
            encontrou = false;
        }
    }
    
    if(encontrou == false) 
        cout << "NAO ENCONTRADA";

    return 0;
}