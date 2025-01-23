#include <iostream>

// Função para adicionar valores ao vetor e calcular a sequência
int adicionarValores(int vt[], int tamanho) {
    int seq = 0;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
    }

    for (int i = 1; i <= tamanho; ++i) {
        seq += (vt[i - 1] - vt[tamanho - i]);
    }

    return seq;
}

int main() {
    const int tamanho = 20;
    int vt[tamanho];
    int sequencia;

    sequencia = adicionarValores(vt, tamanho);

    std::cout << "O resultado da sequência é: " << sequencia << std::endl;

    return 0;
}
