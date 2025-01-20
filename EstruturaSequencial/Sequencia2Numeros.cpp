#include <iostream>

int main(){
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

	if(num1 > num2) {
		std::cout << "A sequência dos menores números é o segundo(" + num2 + ") e o primeiro (" + num1 + ")";
	} else {
        
		std::cout << "A sequência dos menores números é o primeiro(" + num1 + ") e o segundo (" + num2 + ")";
	}
    
    return 0;
}