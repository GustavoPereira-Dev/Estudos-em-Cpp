#include <iostream>

void numeroMultiploMenor(int n1, int n2);

int main(){
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    return 0;
}

void numeroMultiploMenor(int n1, int n2){
	if(n1 > n2 && n1 % n2 == 0 || n2 > n1 && n2 % n1 == 0) {
		std::cout << "O maior número é múltiplo do menor";
	} else {
		std::cout << "O maior número não é múltiplo do menor: ";
	}
}