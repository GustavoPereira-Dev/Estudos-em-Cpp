#include <iostream>

void imprimirResultado(float val);

float comprimento;
int main(){
    float raio;

    std::cont << "Digite o valor do raio da circunferência: ";
    std::cin >> comprimento;

    comprimento = (2 * raio) * 3.14;

    imprimirResultado();
    
    return 0;
}

void imprimirResultado(){
    std::cout << "O resultado do comprimento da circunferência é: " << comprimento;
}