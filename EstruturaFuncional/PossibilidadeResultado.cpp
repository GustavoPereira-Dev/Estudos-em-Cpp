#include <iostream>

int calcularPossibilidadesSoma();

int num1, num2;

int main(){
	int pos;

	pos = calcularPossibilidadesSoma();

    std::cout << "A possibilidade da soma de " << num1 << " e " << num2 << " retorna 7 é de " << pos << " vezes";

    return 0;
}

int calcularPossibilidadesSoma(){
	int p;
	
	for(num1 = 0; num1 <= 7; num1++) {
		for(num2 = 0; num2 <= 7; num2++) {
			if(num1 + num2 == 7) {
				p++;
			}
		}
	}

	return p;
}