#include <iostream>

int main(){
    int x, y, troca;

    std::cout << "Digite o valor de X:";
    std::cin >> x;

    std::cout << "Digite o valor de Y:";
    std::cin >> y;

    troca = x;
	x = y;
	y = troca;

    std::cout << "Valor de X agora é " << x;
    std::cout << "Valor de Y agora é " << x;
    
    return 0;
}