#include <iostream>

int main(){
    int anoAtual, anoNasc, resltd;

    std::cout << "Digite o ano atual: ";
    std::cin >> anoAtual;

    std::cout << "Digite o seu ano de nascimento";
    std::cin >> anoNasc;

    resltd = (anoAtual - anoNasc) + 17;

    std::cout << "Você terá " << resltd << " daqui a 17 anos"
    return 0;
}