#include <iostream>

int main(){
    float ana = 1.10, maria = 1.5;
    int anos = 0;

	while(ana <= maria) {
		ana = ana + 0.03;
		maria = maria + 0.02;
		anos++;
	}

    std::cout << "A quantidade de anos necessários para a Ana ser maior que a Maria é de " << anos << " anos";
    return 0;
}