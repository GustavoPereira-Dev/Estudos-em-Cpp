#include <iostream>

float calcSalarioLiquido();

int qntH, perc, dep;
float vPHr;

int main(){
    
    std::cout << "Digite a quantidade de horas: ";
    std::cin >> qntH;

    std::cout << "Digite o valor por hora: ";
    std::cin >> vPHr;

    std::cout << "Digite o percentual: ";
    std::cin >> perc;

    std::cout << "Digite a quantidade de dependentes: ";
    std::cin >> dep;
    
    std::cout << "O valor de seu Salário Líquido é de " << calcSalarioLiquido() << " reais";
    
    return 0;
}

float calcSalarioLiquido(){
    float saBrut;
    
    saBrut = qntH * vPHr;

    std::cout << "Salário Bruto: " << saBrut << "\n";

	return (saBrut - (saBrut * (perc / 100))) + (dep * 100);
}