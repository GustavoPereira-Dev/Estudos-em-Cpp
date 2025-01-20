#include <iostream>

int main(){
    int base, exp, indx, pot;

    std::cout << "Digite o base da potência: ";
    std::cin >> base;

    std::cout << "Digite o expoente da potência: ";
    std::cin >> exp;

	for(indx = 2; indx <= exp; indx++) {
		pot = pot + (base * base);
	}

    std::cout << "O resultado da potência é " << pot;

    return 0;
}