#include <iostream>

void adicionarValores(int mat[][8], int linhas, int colunas) {
    int quantPec[7] = {0};

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << "Digite o " << (i + 1) << "º valor na linha e " << (j + 1) << "º na coluna para o tabuleiro: ";
            std::cin >> mat[i][j];
            int pec = mat[i][j] - 1;
            if (pec >= 0 && pec < 7) {
                quantPec[pec] += 1;
            }
        }
    }

    for (int i = 0; i < 7; ++i) {
        std::cout << "O valor de peças da seção " << (i + 1) << " é: " << quantPec[i] << std::endl;
    }
}

int main() {
    const int linhas = 8;
    const int colunas = 8;
    int mat[linhas][colunas];

    adicionarValores(mat, linhas, colunas);

    return 0;
}
