#include <iostream>

int main(){
    float base, altura, area;

    std::cout << "Digite o valor da Base: ";
    std::cin >> base;

    std::cout << "Digite o valor da Área: ";
    std::cin >> altura;

    area = base * altura;

    std::cout << "A área é: " << area;

    return 0;
}