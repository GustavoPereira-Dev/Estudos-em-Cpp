#include <iostream>

int calcularPotencia(int base, int exp);

int main(){
    int base, exp, indx, pot;

    std::cout << "Digite o base da potência: ";
    std::cin >> base;

    std::cout << "Digite o expoente da potência: ";
    std::cin >> exp;

    pot = calcularPotencia(base, exp);

    std::cout << "O resultado da potência é " << pot;

    return 0;
}

int calcularPotencia(int base, int exp){
	int indx, pot;

    for(indx = 2; indx <= exp; indx++) {
		pot = pot + (base * base);
	}

    return pot;
}