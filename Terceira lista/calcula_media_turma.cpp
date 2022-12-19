#include <iostream>
#include <iomanip> 
using namespace std;

struct aluno {
   float nota[3];
   float media = 0;
};

void calcula_media(aluno *a) {
   a->media = (a->nota[0] + a->nota[1] + a->nota[2]) / 3;
}

void calcula_media_turma(aluno turma[], int quantidade_alunos) {

    turma[quantidade_alunos];

    for(int i = 0; i < quantidade_alunos; i++) {
        calcula_media(&turma[i]);
    }
}

int main(int argc, char const *argv[]) {
   
   cout << "Digite a quantidade de alunos da turma: ";
   int quantidade_alunos; cin >> quantidade_alunos;
   
   aluno turma[quantidade_alunos];
   
    for (int j = 0; j < quantidade_alunos; j++) {
      for (int i = 0; i < 3; i++) {
        cout << "Digite a nota: ";
        cin >> turma[j].nota[i];
      }
    }
      
    calcula_media_turma(turma, quantidade_alunos);

    for (int j = 0; j < quantidade_alunos; j++) {
      std::cout << std::fixed;
      std::cout << std::setprecision(1) << turma[j].media << " ";
    }
    
    return 0;
}