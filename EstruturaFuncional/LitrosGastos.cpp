#include <iostream>

int tempP;
float velMed, lGast;

void litrosGastos();

int main(){

    std::cout << "Digite o tempo de percurso: ";
    std::cin >> tempP;

    std::cout << "Digite a velocidade média: ";
    std::cin >> lGast;

    std::cout << "A quantidade de combustível gasto em litros é de " << litrosGastos();

    return 0;
}

void litrosGastos(){
    lGast = (tempP * velMed) / 12;
}