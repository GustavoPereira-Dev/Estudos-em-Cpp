#include <iostream>

float lado, area;

void calcularArea();

int main(){

    std::cout << "Digite o valor do lado: " << "\n";
    std::cin >> lado;

    calcularArea();

    std::cout << "Area é igual a: " << area;

    return 0;
}

void calcularArea(){
    area = lado * lado;
}