#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    //cout << "Digite a frase: ";
    char frase[100]; cin.get(frase, 100);

    for (int i = 1; frase[i]; i++) {
        while(frase[i] == ' ' && frase[i - 1] == frase[i + 1] && (frase[i - 1] == 'a' || 
        frase[i - 1] == 'e' || frase[i - 1] == 'i' || frase[i - 1] == 'o' || frase[i - 1] == 'u')) {
            i += 2;
        }
        cout << frase[i];
    }

    return 0;
}
