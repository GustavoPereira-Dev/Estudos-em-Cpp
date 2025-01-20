#include <iostream>

int main(){
    int casa;
    long graos;

	for(casa = 1; casa < 64; casa++) {
		graos = graos.multiply(new BigInteger("2"));
	}

    std::cout << "A quantidade de grãos em " << casa << " casas é de " << graos;
    
    return 0;
}