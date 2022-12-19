
long double fatorial(double numero) {
    long double fatorial = 1;

    for(int i = 1; i <= numero; i++) {
        fatorial *=  i;
    }

    return fatorial;
}

long double euler(double numero) {
   long double euler = 1.0;

   for(int i = 1; i <= numero; i++) {
        euler = euler + 1.0 / fatorial(i);
   }

   return euler;
}

#include <iostream>

int main(int argc, char const *argv[]) {
    
    long double numero;
    std:: cin >> numero;
    std:: cout.precision(6);
    std:: cout <<  std::fixed << euler(numero);

    return 0; 
}
