#include <iostream>

void calcRendimento(float dep);

int main(){
    float deposito;

    std::cout << "Digite o valor do depósito: ";
    std::cin >> deposito;

    calcRendimento(deposito);

    return 0;
}

void calcRendimento(float dep){
    std::cout << "O valor de rendimento após 1 mês é de: " << (dep * 0.013) << " reais";
}