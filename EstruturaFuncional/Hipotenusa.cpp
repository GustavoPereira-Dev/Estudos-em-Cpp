#include <iostream>


float cat1, cat2, hip;

void calcularHipotenusa();

int main(){
    

    std::cout << "Digite o valor do primeiro cateto: ";
    std::cin >> cat1;

    std::cout << "Digite o valor do segundo cateto: ";
    std::cin >> cat2;

    calcularHipotenusa();

    std::cout << "O resultado da hipotenusa é: " << hip;

    return 0;
}

void calcularHipotenusa(){
    hip = Math.sqrt((cat1 * cat1) + (cat2 * cat2));
}