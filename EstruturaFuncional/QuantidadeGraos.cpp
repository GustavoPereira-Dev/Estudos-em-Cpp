#include <iostream>

long calcularQuantGraos();

int casa;

int main(){

    std::cout << "A quantidade de grãos em " << casa << " casas é de " << calcularQuantGraos();
    
    return 0;
}

long calcularQuantGraos(){
    long graos;

	for(casa = 1; casa < 64; casa++) {
		graos *= 2;
	}
}