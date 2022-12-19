#include <iostream>

using namespace std;

void torre_hanoi(int numero_discos, char torre_inicial, char torre_final, char torre_auxiliar) {
   if(numero_discos == 0) {
        return;
   } else {
        torre_hanoi(numero_discos - 1, torre_inicial, torre_auxiliar, torre_final);
        cout << torre_inicial << " -> " << torre_final << endl;
        torre_hanoi(numero_discos - 1, torre_auxiliar, torre_final, torre_inicial);
   }
} 

int main(int argc, char const *argv[]) {
    //cout << "Digite o número de discos: ";
    int numero_discos; cin >> numero_discos;

    torre_hanoi(numero_discos, 'A', 'C', 'B');

    return 0;
}