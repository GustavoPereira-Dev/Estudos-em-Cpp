#include <iostream>

int calcularQuantAnos();

float ana = 1.10, maria = 1.5;

int main(){
    std::cout << "A quantidade de anos necessários para a Ana ser maior que a Maria é de " << calcularQuantAnos() << " anos";
    return 0;
}

int calcularQuantAnos(){
	int cont;
	while(ana <= maria) {
		ana = ana + 0.03;
		maria = maria + 0.02;
		cont++;
	}
}