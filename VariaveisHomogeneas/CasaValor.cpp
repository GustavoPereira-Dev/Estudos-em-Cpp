#include <iostream>

void adicionarValores(long mat[][8], int linhas, int colunas) {
    long soma = 0;

    for (int i = 0; i < linhas; i += 2) {
        for (int j = 0; j < colunas; ++j) {
            if (i == 0 && j == 0) {
                mat[i][j] = 1;
                mat[i + 1][j] = 1;
                soma = 1;
            } else if (j != 0) {
                mat[i][j] = mat[i][j - 1] + 1;
                mat[i + 1][j] = mat[i + 1][j - 1] * 2;
                soma = soma + mat[i + 1][j];
            }

            if (i != 6) {
                mat[i + 2][0] = mat[i][j] + 1;
                mat[i + 3][0] = mat[i + 1][j] * 2;
            }
        }
    }
    
    std::cout << "O resultado da soma é: " << soma << std::endl;
}

int main() {
    const int linhas = 8;
    const int colunas = 8;
    long mat[linhas][colunas] = {0};

    adicionarValores(mat, linhas, colunas);

    return 0;
}
