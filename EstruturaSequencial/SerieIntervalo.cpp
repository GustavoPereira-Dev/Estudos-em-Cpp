#include <iostream>

int main(){
    int num1, num2;
    float res;

	for(num1 = 1; num1 <= 50; num1++) {
		res = res + (num1 / num2);
		num2 = num2 + 2;
	}

    std::cout << "O resultado do intervalo de sequência até 50 é de " << res;
    return 0;
}