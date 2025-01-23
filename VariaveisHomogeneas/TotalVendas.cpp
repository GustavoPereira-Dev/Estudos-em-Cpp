#include <iostream>

double calcularVendas();

int main() {
    double comissao = calcularVendas() * 0.25;
    
    std::cout << "O resultado da comissão é: " << comissao << std::endl; 
    
    return 0;
}

double calcularVendas() {
    const int tamanho = 5;
    int qtd[tamanho], preco[tamanho];
    double totVend, totGeral = 0.0;
    
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite a quantidade vendida do " << (i + 1) << "º produto: ";
        std::cin >> qtd[i];
        std::cout << "Digite o preço do " << (i + 1) << "º produto: ";
        std::cin >> preco[i];
    }
    
    for (int i = 0; i < tamanho; ++i) {
        totVend = qtd[i] * preco[i];
        totGeral += totVend;
        std::cout << "A venda total do produto " << (i + 1) << " é: " << totVend << std::endl;
    }
    
    std::cout << "A venda total dos produtos é: " << totGeral << std::endl;
    return totGeral;
}
