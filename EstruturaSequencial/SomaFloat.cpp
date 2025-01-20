#include <iostream>

int main(){
    float n1, n2, soma;

    std::cout << "Digite a primeiro número: ";
    std::cin >> n1;

    std::cout << "Digite a segundo número: ";
    std::cin >> n2;

    soma = n1 + n2;

    std::cout << "O resultado da soma de " << n1 << " + " << n2 << " flutuantes é " << soma;
    
    return 0;
}