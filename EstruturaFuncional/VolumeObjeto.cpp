#include <iostream>

float calcularVolume(float comp, float alt, float lrg);

int main(){
    float comprimento, altura, largura, volume;

    std::cout << "Digite o comprimento do objeto: ";
    std::cin >> comprimento;

    std::cout << "Digite a altura do objeto: ";
    std::cin >> altura;

    std::cout << "Digite a largura do objeto: ";
    std::cin >> largura;

    std::cout << "O volume do objeto é: " << calcularVolume(comprimento, altura, largura);
    
    return 0;
}

float calcularVolume(float comp, float alt, float lrg){
    return (comp * alt * lrg);
}