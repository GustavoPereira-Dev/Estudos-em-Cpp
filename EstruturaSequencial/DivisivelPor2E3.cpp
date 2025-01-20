#include <iostream>

int main(){
    int num;

    std::cout << "Digite o número: ";
    std::cin >> num1;

	if(num % 2 == 0 && num % 3 == 0) {
		std::cout << "O valor é divisível por 2 e 3: ";
	} else {
		std::cout << "O valor não é divisível por 2 e 3: ";
	}

    return 0;
}