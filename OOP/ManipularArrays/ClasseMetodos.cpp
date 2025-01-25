#include "ClasseMetodos.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

ClasseMetodos* ClasseMetodos::instancia = nullptr;

ClasseMetodos::ClasseMetodos() {}

ClasseMetodos* ClasseMetodos::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ClasseMetodos();
    }
    return instancia;
}

int* ClasseMetodos::CarregaVetor(int* vt, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite um valor inteiro: ";
        std::cin >> vt[i];
    }
    return vt;
}

int* ClasseMetodos::ClassificaVetor(int* vt, int tamanho) {
    std::sort(vt, vt + tamanho);
    return vt;
}

void ClasseMetodos::MostraVetor(int* vt, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Vet[" << i << "] = " << vt[i] << std::endl;
    }
    std::cout << "******************************" << std::endl;
}

int** ClasseMetodos::CarregaMatriz(int** mt, int linhas, int colunas) {
    std::srand(std::time(0));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            mt[i][j] = std::rand() % 100;
        }
    }
    return mt;
}

int** ClasseMetodos::ClassificaMatriz(int** mt, int linhas, int colunas) {
    int tamanho = linhas * colunas;
    int* vt = new int[tamanho];
    int cont = 0;

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            vt[cont++] = mt[i][j];
        }
    }

    std::sort(vt, vt + tamanho);

    cont = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            mt[i][j] = vt[cont++];
        }
    }

    delete[] vt;
    return mt;
}

void ClasseMetodos::MostraMatriz(int** mt, int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << "Mt[" << i << "][" << j << "] = " << mt[i][j] << std::endl;
        }
    }
    std::cout << "******************************" << std::endl;
}
