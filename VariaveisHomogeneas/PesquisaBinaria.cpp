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
}

int main() {
    const int tamanho = 20;
    int vt[tamanho];
    int inicio = 0, fim = tamanho - 1, meio, vProc;
    bool encontrado = false;

    adicionarValores(vt, tamanho);
    bubbleSort(vt, tamanho);

    std::cout << "Digite o valor procurado: ";
    std::cin >> vProc;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vt[meio] == vProc) {
            std::cout << "O valor " << vProc << " foi encontrado no índice " << meio << std::endl;
            encontrado = true;
            break;
        } else if (vt[meio] < vProc) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (!encontrado) {
        std::cout << "O valor não foi encontrado no vetor" << std::endl;
    }

    return 0;
}
