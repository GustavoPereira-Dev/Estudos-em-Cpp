#include <iostream>

int somatoriaImpares(int n1, int n2);

int main(){
    int num1, num2, indx, res;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "A somatória de números ímpares entre os dois números é de " << somatoriaImpares(num1,num2);

    return 0;
}

int somatoriaImpares(int n1, int n2){
	int indx, res = 0;

	if(n2 > n1) {
		indx = n2;
	} else {
		indx = n1;
	}
		
	while(indx >= n1 || indx >= n2) {
		if(indx % 2 == 1) {
			res = res + indx;
		}
		indx--;
	}

	return res;
}