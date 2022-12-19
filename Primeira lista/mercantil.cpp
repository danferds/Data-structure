#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    //cout << "Digite a quantidade de produtos: ";
    int quantidade_produtos;
    cin >> quantidade_produtos;

    double valor_produtos[quantidade_produtos];

    for(int i = 0; i < quantidade_produtos; i++) {
        //cout << "Digite o valor do produto: " << endl;
        cin >> valor_produtos[i];
    } 
    
    double chutes_jogador_1[quantidade_produtos];

    for(int i = 0; i < quantidade_produtos; i++) {
        //cout << "Digite seu palpite" << endl;
        cin >> chutes_jogador_1[i];
    }

    cin.ignore();
   
    string escolha_jogador_2[quantidade_produtos];

    for(int i = 0; i < quantidade_produtos; i++) {
        //cout << "Digite sua escolha: " << endl;
        cin >> escolha_jogador_2[i];
    }

    int jogador_1 = 0, jogador_2 = 0;

    for( int i = 0; i < quantidade_produtos; i++) {

        if(valor_produtos[i] == chutes_jogador_1[i]) {
            jogador_1++;
        } else if(valor_produtos[i] > chutes_jogador_1[i] && escolha_jogador_2[i] == "m" ) { 
            jogador_1++;
        } else if(valor_produtos[i] < chutes_jogador_1[i] && escolha_jogador_2[i] == "M") {
            jogador_1++;
        } else if(valor_produtos[i] > chutes_jogador_1[i] && escolha_jogador_2[i] == "M") {
            jogador_2++;
        } else if(valor_produtos[i] < chutes_jogador_1[i] && escolha_jogador_2[i] == "m") {
            jogador_2++;
        }
    }

    if (jogador_1 > jogador_2) {
        cout << "primeiro";
    } else if(jogador_2 > jogador_1) {
        cout << "segundo" << endl;
    } else {
        cout << "empate" << endl;
    }

    return 0;
}