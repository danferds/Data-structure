#include <iostream>
#include <string>

using namespace std;

int contar_ocorrencias(string frase, char letra) {
    if(frase[0] == '\0') {
        return 0;
    } else  {
        return(letra == frase[0]) + contar_ocorrencias((&frase[1]), letra);
    }
}

int main(int argc, char const *argv[]) {
    string frase;
    //cout << "Digite a frase";
    getline(cin,frase);
    
    //cout << "Digite a letra"
    char letra; cin >> letra;

    int numero_vezes = contar_ocorrencias(frase, letra);
    
    cout << numero_vezes << endl;
}