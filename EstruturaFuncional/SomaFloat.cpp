#include <iostream>

float somaFlutuante(float num1, float num2);

int main(){
    float n1, n2, soma;

    std::cout << "Digite a primeiro número: ";
    std::cin >> n1;

    std::cout << "Digite a segundo número: ";
    std::cin >> n2;

    std::cout << "O resultado da soma de " << n1 << " + " << n2 << " flutuantes é " << somaFlutuante(n1,n2);
    
    return 0;
}

float somaFlutuante(float num1, float num2){
    return num1 + num2;
}