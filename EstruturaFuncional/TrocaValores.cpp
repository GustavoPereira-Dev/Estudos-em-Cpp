#include <iostream>

void trocaValores(int x, int y);

int main(){
    int x, y;

    std::cout << "Digite o valor de X:";
    std::cin >> x;

    std::cout << "Digite o valor de Y:";
    std::cin >> y;
    
    trocaValores(x,y);
    
    return 0;
}

void trocaValores(int x, int y){
    int troca;

    troca = x;
	x = y;
	y = troca;

    std::cout << "Valor de X agora é " << x;
    std::cout << "Valor de Y agora é " << x;    
}