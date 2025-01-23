#include <iostream>

float vt[30];

float adicionarValores() {
    float soma = 0;
    for (int i = 0; i < 30; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
        soma += vt[i];
    }
    return soma;
}

int main() {
    float media, acMed = 0;
    
    media = adicionarValores() / 30;
    
    for (int i = 0; i < 30; ++i) { 
        if (vt[i] > media) {
            acMed += 1;
        } else {
            std::cout << "Número abaixo da média na posição " << (i + 1) << ": " << vt[i] << std::endl;
        }
    }
    
    std::cout << "Números acima da média: " << acMed << std::endl;
    
    return 0;
}
