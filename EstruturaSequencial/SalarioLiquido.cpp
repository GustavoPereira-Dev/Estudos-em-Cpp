#include <iostream>

int main(){
    int qntH, perc, dep;
    float vPHr, saBrut, saLiq;
    
    std::cout << "Digite a quantidade de horas: ";
    std::cin >> qntH;

    std::cout << "Digite o valor por hora: ";
    std::cin >> vPHr;

    std::cout << "Digite o percentual: ";
    std::cin >> perc;

    std::cout << "Digite a quantidade de dependentes: ";
    std::cin >> dep;

    saBrut = qntH * vPHr;
	saLiq = (saBrut - (saBrut * (perc / 100))) + (dep * 100);

    std::cout << "O valor de seu Salário Líquido é de " << saLiq << " reais";
    
    return 0;
}