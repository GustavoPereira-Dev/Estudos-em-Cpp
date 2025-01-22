#include <iostream>

void sequencia2Numeros();

int num1, num2;

int main(){
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    
    sequencia2Numeros();
    
    return 0;
}

void sequencia2Numeros(){
	if(num1 > num2) {
		std::cout << "A sequência dos menores números é o segundo(" + num2 + ") e o primeiro (" + num1 + ")";
	} else {   
		std::cout << "A sequência dos menores números é o primeiro(" + num1 + ") e o segundo (" + num2 + ")";
	}
}