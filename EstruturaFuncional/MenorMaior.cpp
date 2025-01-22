#include <iostream>

void maiorMenorNumero();

int main(){
    
	maiorMenorNumero();

    return 0;
}

void maiorMenorNumero(){
	int indx, num, maior, menor;
	
	while(indx < 100) {
		std::cout << "Digite o número: ";
        std::cin >> num;

		if(num >= 0) {
			if(indx == 1) {
				maior = num;
				menor = num;
			} else if(num > maior) {
				maior = num;
			} else if(num < menor) {
				menor = num;
			}
			indx++;

		}		

	}

    std::cout << "Menor número: " << menor;
    std::cout << "Maior número: " << maior;
}