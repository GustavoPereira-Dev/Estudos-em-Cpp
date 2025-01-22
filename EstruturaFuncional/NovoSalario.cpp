#include <iostream>

float calcularNovoSalario(float s);

int main(){
    float salario, novoSalario;

    std::cout << "Digite o valor do Salário: ";
    std::cin >> salario;
    
    std::cout << "O novo salário é: " << calcularNovoSalario(salario);

    return 0;
}

float calcularNovoSalario(float s){
    return s + (s * 0.15);
}