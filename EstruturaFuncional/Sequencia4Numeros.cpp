#include <iostream>

void sequencia4Numeros();

int num1, num2, num3, num4;

int main(){
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;

    std::cout << "Digite o quarto número: ";
    std::cin >> num4;

    return 0;
}

void sequencia4Numeros(){
	if(num4 > num3) {
		std::cout << "A sequência dos números é assim: " + num1 + " " + num2 + " " + num3 + " " + num4 + " ";
	} else if(num4 > num2 && num4 < num3) {
		std::cout << "A sequência dos números é assim: " + num1 + " " + num2 + " " + num4 + " " + num3 + " ";
	} else if(num4 > num1 && num4 < num2) {
		std::cout << "A sequência dos números é assim: " + num1 + " " + num4 + " " + num2 + " " + num3 + " ";
	} else {
		std::cout << "A sequência dos números é assim: " + num4 + " " + num1 + " " + num2 + " " + num3 + " ";
	}
}