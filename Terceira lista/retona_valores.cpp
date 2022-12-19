#include <iostream>
using namespace std;

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos = 0, int *horPtr = 0, int *minPtr = 0, int *segPtr = 0) {
    *horPtr = segundos / 3600;
    *minPtr = segundos % 3600 / 60;
    *segPtr = (segundos % 3600) % 60;
}

int main(int argc, char const *argv[]) {
    int segundos = 0, h = 0, m = 0, s = 0;
    cout << "Digite o tempo em segundos: ";
    cin >> segundos;

    converte_tempo(segundos, &h, &m, &s);

    cout << h << ":" << m << ":" << s;

    return 0;
}
