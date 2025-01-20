#include <iostream>

int main(){
    float salario, novoSalario;

    std::cout << "Digite o valor do Salário: ";
    std::cin >> salario;

    novoSalario = salario + (salario * 0.15);
    
    std::cout << "O novo salário é: " << novoSalario;

    return 0;
}