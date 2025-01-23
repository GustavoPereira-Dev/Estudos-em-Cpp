#include <iostream>

void adicionarValores(int vt[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
    }
}

void calculaVetor(int vt[], int tamanho) {
    int teste2[10];
    
    for (int i = 0; i < tamanho; ++i) {
        if (vt[i] % 2 == 0) {
            teste2[i] = vt[i] * 5;
        } else {
            teste2[i] = vt[i] + 5;
        }

        std::cout << "Resultado do índice " << (i + 1) << " do vetor 1 e 2 é respectivamente " 
                  << vt[i] << " e " << teste2[i] << std::endl;
    }
}

int main() {
    const int tamanho = 10;
    int teste1[tamanho];
    
    adicionarValores(teste1, tamanho);
    calculaVetor(teste1, tamanho);

    return 0;
}
