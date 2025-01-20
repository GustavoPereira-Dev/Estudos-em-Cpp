#include <iostream>

int main(){
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

	if(num1 > num2 && num1 % num2 == 0 || num2 > num1 && num2 % num1 == 0) {
		std::cout << "O maior número é múltiplo do menor";
	} else {
		std::cout << "O maior número não é múltiplo do menor: ";
	}

    return 0;
}