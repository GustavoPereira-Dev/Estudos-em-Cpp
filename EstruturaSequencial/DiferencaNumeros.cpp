#include <iostream>

int main(){
    int num1, num2, dValor;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    if(num1 > num2) {
		dValor = num1 - num2;
	} else {
		dValor = num2 - num1;
    }

    std::cout << "A diferença entre os números é de " << dValor;

    return 0;
}
