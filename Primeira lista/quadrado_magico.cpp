#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int matriz[3][3];

    for(int linha = 0; linha < 3; linha++) {

        for(int coluna = 0; coluna < 3; coluna++) {
            cout << "Digite o elemento da linha " << linha << " e da  coluna " << coluna << endl; 
            cin >> matriz[linha][coluna];
        }
    }

    int soma_linha[3];

    for(int linha = 0; linha < 3; linha++) {
        int soma = 0;

        for(int coluna = 0; coluna < 3; coluna++) {
            soma += matriz[linha][coluna];
        }

        soma_linha[linha] = soma;
    }

    int soma_coluna[3];

    for(int coluna = 0; coluna < 3; coluna++) {
        int soma = 0;

        for(int linha = 0; linha < 3; linha++) {
            soma += matriz[linha][coluna];
        }

        soma_coluna[coluna] = soma;
    }

    int soma_diag_principal =  matriz[0][0] + matriz[1][1] + matriz[2][2];
    int soma_diag_secundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];

    bool resultado = true;

    for(int i = 0; i < 3; i++) {
        
        if(soma_linha[i - 1] == soma_linha[i] && soma_coluna[i - 1] == soma_coluna[i] && 
        soma_diag_principal == soma_diag_secundaria) {
            resultado == true;
        } else {
            resultado = false;
        }
    }

    if (resultado == true) 
        cout << "sim";
    else 
        cout << "nao"; 

    return 0;
}
