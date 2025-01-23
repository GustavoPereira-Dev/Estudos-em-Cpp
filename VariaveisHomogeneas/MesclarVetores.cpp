#include <iostream>

// Função para adicionar valores aos vetores
void adicionarValores(int vt[], int tamanho) {
    int vt2[3], vt3[3];
    for (int i = 0; i < tamanho; ++i) {
        if (i < 3) {
            std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
            std::cin >> vt2[i];
        } else {
            std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
            std::cin >> vt3[i - 3];
        }
    }

    for (int i = 0; i < 3; ++i) {
        vt[i] = vt2[i];
        vt[i + 3] = vt3[i];
    }
}

// Função principal
int main() {
    const int tamanho = 6;
    int vt[tamanho];

    adicionarValores(vt, tamanho);

    for (int i = 0; i < tamanho; ++i) {
        std::cout << (i + 1) << "º posição: " << vt[i] << std::endl;
    }

    return 0;
}
