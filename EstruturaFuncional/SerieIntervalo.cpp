#include <iostream>

float serieIntervalo();

int main(){


    std::cout << "O resultado do intervalo de sequência até 50 é de " << serieIntervalo();
    return 0;
}

float serieIntervalo(){
    int num1 = 0, num2 = 1;
    float res = 0.0;

	for(num1 = 1; num1 <= 50; num1++) {
		res = res + (float) (num1 / num2);
		num2 = num2 + 2;
	}

    return res;
}