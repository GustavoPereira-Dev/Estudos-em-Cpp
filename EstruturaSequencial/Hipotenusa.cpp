#include <iostream>

int main(){
    float cat1, cat2, hip;

    std::cout << "Digite o valor do primeiro cateto: ";
    std::cin >> cat1;

    std::cout << "Digite o valor do segundo cateto: ";
    std::cin >> cat2;

    hip = Math.sqrt((cat1 * cat1) + (cat2 * cat2));

    std::cout << "O resultado da hipotenusa é: " << hip;

    return 0;
}