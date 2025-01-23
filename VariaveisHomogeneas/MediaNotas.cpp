#include <iostream>

int somaNotas();

int main(){
    std::cout << "Média: " << somaNotas();
}

int somaNotas(){
	int vet[4];
	int i, soma = 0;
	
	for(i = 0; i < 4; i++) {
		std::cout << "Digite o valor da " << (i + 1) << "º nota: ";
        std::cin >> vet[i];
		soma += vet[i];
	}

	return soma / 4;
}