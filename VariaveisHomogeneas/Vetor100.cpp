#include <iostream>

float adicionarValores(int vt[], int tamanho);

int main() {
    const int tamanho = 100;
    int vt[tamanho];
    float media;
    
    media = adicionarValores(vt, tamanho);
    
    std::cout << "O resultado da média é: " << media << std::endl;
    
    return 0;
}

float adicionarValores(int vt[], int tamanho) {
    int maior = 0, menor = 0;
    float med = 0;
    
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
        if (i == 0) {
            maior = vt[i];
            menor = vt[i];
        } else if (vt[i] < menor) {
            menor = vt[i];
        } else if (vt[i] > maior) {
            maior = vt[i];
        }
        med += vt[i];
    }
    
    std::cout << "Maior: " << maior << " ; Menor: " << menor << std::endl;
    
    return med / tamanho;
}
