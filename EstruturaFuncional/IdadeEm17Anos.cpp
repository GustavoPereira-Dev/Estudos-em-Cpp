#include <iostream>

int resltd;

void imprimirIdade();

int main(){
    int anoAtual, anoNasc;

    std::cout << "Digite o ano atual: ";
    std::cin >> anoAtual;

    std::cout << "Digite o seu ano de nascimento";
    std::cin >> anoNasc;

    resltd = (anoAtual - anoNasc) + 17;

    imprimirIdade();

    return 0;
}

void imprimirIdade(){
    std::cout << "Você terá " << resltd << " daqui a 17 anos";
}