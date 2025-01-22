#include <iostream>

float calcularPrecoNovo(float venda, float preco);

int main(){
    float vendMen, prAtual, prNovo;

    std::cout << "Digite a venda mensal do produto: ";
    std::cin >> vendMen;

    std::cout << "Digite o preço atual do produto: ";
    std::cin >> prAtual;

    prNovo = calcularPrecoNovo(vendMen, prAtual);
    
    std::cout << "O novo preço do produto será de " << prNovo << " reais";
    
    return 0;
}

float calcularPrecoNovo(float venda, float preco){
    if(venda < 500 && preco < 30) {
		return preco + (preco * 0.10);
	} else if(venda >= 500 && venda < 1000 && preco > 30 && preco < 80) {
		 return preco * 0.15;
	} else if(venda >= 1000 && preco >= 80) {
		 return preco * 0.05;
	} else {
		return preco;
	}
}