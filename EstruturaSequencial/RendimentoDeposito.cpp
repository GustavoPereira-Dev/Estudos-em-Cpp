#include <iostream>

int main(){
    float valor, deposito;

    std::cout << "Digite o valor do depósito: ";
    std::cin >> deposito;

    valor = deposito * 0.013;

    std::cout << "O valor de rendimento após 1 mês é de: " << valor << " reais";

    return 0;
}