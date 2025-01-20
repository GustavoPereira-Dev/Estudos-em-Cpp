#include <iostream>

int main(){
    float comprimento, altura, largura, volume;

    std::cout << "Digite o comprimento do objeto: ";
    std::cin >> comprimento;

    std::cout << "Digite a altura do objeto: ";
    std::cin >> altura;

    std::cout << "Digite a largura do objeto: ";
    std::cin >> largura;

    volume = (comprimento * altura * largura);

    std::cout << "O volume do objeto é: " << volume;
    
    return 0;
}