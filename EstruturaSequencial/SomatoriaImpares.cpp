#include <iostream>

int main(){
    int num1, num2, indx, res;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

	if(num2 > num1) {
		indx = num2;
	} else {
		indx = num1;
	}
		
	while(indx >= num1 || indx >= num2) {
		if(indx % 2 == 1) {
			res = res + indx;
		}
		indx--;
	}

    std::cout << "A somatória de números ímpares entre os dois números é de " << res;

    return 0;
}