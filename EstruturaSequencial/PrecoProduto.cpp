#include <iostream>

int main(){
    float vendMen, prAtual, prNovo;

    std::cout << "Digite a venda mensal do produto: ";
    std::cin >> vendMen;

    std::cout << "Digite o preço atual do produto: ";
    std::cin >> prAtual;
	
    if(vendMen < 500 && prAtual < 30) {
		prNovo = prAtual + (prAtual * 0.10);
	} else if(vendMen >= 500 && vendMen < 1000 && prAtual > 30 && prAtual < 80) {
		prNovo = prAtual + (prAtual * 0.15);
	} else if(vendMen >= 1000 && prAtual >= 80) {
		prNovo = prAtual - (prAtual * 0.05);
	} else {
		prNovo = prAtual;
	}

    std::cout << "O novo preço do produto será de " << prNovo << " reais";
    
    return 0;
}