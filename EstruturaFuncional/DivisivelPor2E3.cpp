#include <iostream>

std::string imprimirResultado(int n);

int main(){
    int num;
	std::string resultado;

    std::cout << "Digite o número: ";
    std::cin >> num;

	std::cout << imprimirResultado(num);

    return 0;
}

std::string imprimirResultado(int n){
	if(n % 2 == 0 && n % 3 == 0) {
		return "O valor é divisível por 2 e 3";
	} else {
		return "O valor não é divisível por 2 e 3";
	}
}