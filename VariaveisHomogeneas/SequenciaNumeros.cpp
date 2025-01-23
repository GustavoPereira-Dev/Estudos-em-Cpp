#include <iostream>

void adicionarValores(int mat[][8], int linhas, int colunas) {
    for (int z = 1; z < 5; ++z) {
        for (int i = (z - 1); i <= (linhas - z); ++i) {
            for (int j = (z - 1); j <= (colunas - z); ++j) {
                mat[i][j] = z;
            }
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << "O valor da " << (i + 1) << "º linha e da " << (j + 1) << "º coluna é: " << mat[i][j] << std::endl;
        }
    }
}

int main() {
    const int linhas = 8;
    const int colunas = 8;
    int mat[linhas][colunas] = {0};

    adicionarValores(mat, linhas, colunas);

    return 0;
}
