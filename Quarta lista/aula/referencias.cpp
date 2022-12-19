//                                  Referência de variáveis

/*
    - Uma referência não é uma variável;

    -
*/

int main(int argc, char const *argv[]) {
    int x = 87;

    // Referência por ponteiro.
    int *ptr = &x;

    // Outra maneira de refênciar a variável x.
    // referencia e x são a mesma coisa.
    int &referecncia = x;
    // referencia está apontando para x.

    return 0;
}
