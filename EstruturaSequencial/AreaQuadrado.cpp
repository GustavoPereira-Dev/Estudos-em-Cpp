#include <iostream>

int main(){
    float lado, area;

    std::cout << "Digite o valor do lado" << "\n";
    std::cin >> lado;

    area = lado * lado;

    std::cout << "Area é igual a: " << area;

    return 0;
}