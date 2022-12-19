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

int main(int argc, char const *argv[]) {
    aluno a;
    
    for (int i = 0; i < 3; i++) {
        cout << "Digite a nota: ";
        cin >> a.nota[i];
    }
    
    calcula_media(&a);
    
    std::cout << std::fixed;
    std::cout << std::setprecision(1) << a.media;
    
    return 0;
}