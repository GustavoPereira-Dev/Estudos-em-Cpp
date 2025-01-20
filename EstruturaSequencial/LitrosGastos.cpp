#include <iostream>

int main(){
    int tempP;
    float velMed, lGast;

    std::cout << "Digite o tempo de percurso: ";
    std::cin >> tempP;

    std::cout << "Digite a velocidade média: ";
    std::cin >> lGast;

    lGast = (tempP * velMed) / 12;

    std::cout << "A quantidade de combustível gasto em litros é de " << lGast;

    return 0;
}