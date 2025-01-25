#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>

// Definição da ClasseMetodos
class ClasseMetodos {
private:
    static ClasseMetodos* instancia;
    ClasseMetodos() {}

public:
    static ClasseMetodos* getInstancia() {
        if (instancia == nullptr) {
            instancia = new ClasseMetodos();
        }
        return instancia;
    }

    int* CarregaVetor(int* vt, int tamanho) {
        for (int i = 0; i < tamanho; ++i) {
            std::cout << "Digite um valor inteiro: ";
            std::cin >> vt[i];
        }
        return vt;
    }

    int* ClassificaVetor(int* vt, int tamanho) {
        std::sort(vt, vt + tamanho);
        return vt;
    }

    void MostraVetor(int* vt, int tamanho) {
        for (int i = 0; i < tamanho; ++i) {
            std::cout << "Vet[" << i << "] = " << vt[i] << std::endl;
        }
        std::cout << "******************************" << std::endl;
    }

    int** CarregaMatriz(int** mt, int linhas, int colunas) {
        std::srand(std::time(0));

        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                mt[i][j] = std::rand() % 100;
            }
        }
        return mt;
    }

    int** ClassificaMatriz(int** mt, int linhas, int colunas) {
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

    void MostraMatriz(int** mt, int linhas, int colunas) {
        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                std::cout << "Mt[" << i << "][" << j << "] = " << mt[i][j] << std::endl;
            }
        }
        std::cout << "******************************" << std::endl;
    }
};

// Inicialização do ponteiro estático
ClasseMetodos* ClasseMetodos::instancia = nullptr;

// Função principal
int main() {
    ClasseMetodos* m = ClasseMetodos::getInstancia();
    int opc = 0;
    std::string input;
    std::cout << "Digite o tamanho do Vetor e da Matriz que deseja ter (Ex: 4 de vetor, 3 e 4 de Matriz ou 3 x 4): ";
    std::getline(std::cin, input);
    int tamanho[3];
    sscanf(input.c_str(), "%d %d %d", &tamanho[0], &tamanho[1], &tamanho[2]);

    int* vetor = new int[tamanho[0]];
    int** matriz = new int*[tamanho[1]];
    for (int i = 0; i < tamanho[1]; ++i) {
        matriz[i] = new int[tamanho[2]];
    }

    while (opc != 9) {
        std::cout << "1 - Carrega Vetor\n2 - Classifica Vetor\n3 - Mostra Vetor\n4 - Carrega Matriz\n5 - Classifica Matriz\n6 - Mostra Matriz\n9 - Fim\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opc;
        switch (opc) {
            case 1:
                m->CarregaVetor(vetor, tamanho[0]);
                break;
            case 2:
                m->ClassificaVetor(vetor, tamanho[0]);
                std::cout << "Vetor Classificado" << std::endl;
                break;
            case 3:
                m->MostraVetor(vetor, tamanho[0]);
                break;
            case 4:
                m->CarregaMatriz(matriz, tamanho[1], tamanho[2]);
                break;
            case 5:
                m->ClassificaMatriz(matriz, tamanho[1], tamanho[2]);
                std::cout << "Matriz Classificada" << std::endl;
                break;
            case 6:
                m->MostraMatriz(matriz, tamanho[1], tamanho[2]);
                break;
            case 9:
                std::cout << "FIM" << std::endl;
                break;
            default:
                std::cout << "OPÇÃO INVÁLIDA" << std::endl;
        }
    }

    delete[] vetor;
    for (int i = 0; i < tamanho[1]; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
