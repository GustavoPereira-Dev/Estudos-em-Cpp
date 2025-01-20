#include <iostream>

int main(){
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    if(num1 > num2) {
		std::cout << "O maior número é o primeiro com " << num1;  
	} else {
		std::cout << "O maior número é o segundo com " << num2;
    }

    return 0;
}