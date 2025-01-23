#include <iostream>

int somaVetores();

int main(){
    std::cout << "Soma: " << somaVetores();
}


int somaVetores(){
	int vet[5];
	int i, soma = 0;
	
	for(i = 0; i <= 4; i++) {
		std::cout << "Digite o valor do índice " << (i + 1) << ": ";
        std::cin >> vet[i]; 
		soma += vet[i];
	}
	return soma;
}