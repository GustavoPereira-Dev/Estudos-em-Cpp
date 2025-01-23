#include <iostream>

void adicionarValores(int mat[][3], int linhas, int colunas) {
    int prodMes, prodSem, prodTot = 0;
    
    for (int i = 0; i < colunas; ++i) {
        prodMes = 0;
        for (int j = 0; j < linhas; ++j) {
            std::cout << "Digite o " << (j + 1) << "º valor na linha e " << (i + 1) << "º na coluna: ";
            std::cin >> mat[j][i];
            prodMes += mat[j][i];
        }
        std::cout << "A quantidade de produtos vendidos no mês é: " << prodMes << std::endl;
        prodTot += prodMes;
    }
    
    for (int i = 0; i < linhas; ++i) {
        prodSem = 0;
        for (int j = 0; j < colunas; ++j) {
            prodSem += mat[j][i];
        }
        std::cout << "A quantidade de produtos vendidos na Semana é: " << prodSem << std::endl;
    }
    
    std::cout << "A quantidade total de produtos vendidos é: " << prodTot << std::endl;
}

int main() {
    const int linhas = 4;
    const int colunas = 3;
    int mat[linhas][colunas];

    adicionarValores(mat, linhas, colunas);
    
    return 0;
}
