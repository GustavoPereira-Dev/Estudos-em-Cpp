#include <iostream>

void adicionarValores(int mat[][4], int linhas, int colunas) {
    int exp = 1;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (i != j) {
                std::cout << "Digite o " << (i + 1) << "º valor na linha e " << (j + 1) << "º na coluna: ";
                std::cin >> mat[i][j];
            } else {
                exp *= 4;
                mat[i][j] = exp;
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
    const int linhas = 4;
    const int colunas = 4;
    int mat[linhas][colunas];

    adicionarValores(mat, linhas, colunas);

    return 0;
}
