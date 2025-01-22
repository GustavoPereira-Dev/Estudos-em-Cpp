#include <iostream>

void calcularAreaTriangulo();

int main(){
    calcularAreaTriangulo();

    return 0;
}


void calcularAreaTriangulo(){
    float base, altura, area;

    std::cout << "Digite o valor da Base: ";
    std::cin >> base;

    std::cout << "Digite o valor da Altura: ";
    std::cin >> altura;

    area = base * altura;

    std::cout << "A área é: " << area;
}