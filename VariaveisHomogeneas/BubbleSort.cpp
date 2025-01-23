#include <iostream>

void adicionarValores(int vt[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
    }
}

void bubbleSort(int vt[], int tamanho) {
    int aux;
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (vt[i] > vt[j]) {
                aux = vt[i];
                vt[i] = vt[j];
                vt[j] = aux;
            }
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        std::cout << (i + 1) << "º índice: " << vt[i] << std::endl;
    }
}

int main() {
    const int tamanho = 20;
    int vt[tamanho];
    
    adicionarValores(vt, tamanho);
    bubbleSort(vt, tamanho);

    return 0;
}
