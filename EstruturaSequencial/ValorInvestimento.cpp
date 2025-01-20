#include <iostream>

int main(){
    int tipo;
    float valor, investimento;

    std::cout << "Digite o tipo de investimento (1 = poupança e 2 = renda fixa): ";
    std::cin >> tipo;

    std::cout << "Digite o valor de investimento: ";
    std::cin >> valor;

	switch(tipo) {
		case 1:
			investimento = valor + (valor * 0.03);
		case 2:
		    investimento = valor + (valor * 0.05);
	    default:
		    investimento = valor;
	}

    std::cout << "O resultado com investimento é de " << investimento << " reais";
    
    return 0;
}