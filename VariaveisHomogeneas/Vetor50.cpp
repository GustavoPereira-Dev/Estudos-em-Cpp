#include <iostream>

float adicionarValores(int vt[], int tamanho);

int main() {
    const int tamanho = 50;
    int vt[tamanho];
    float media;
    
    media = adicionarValores(vt, tamanho);
    
    std::cout << "A média dos valores entre 10 e 200 é: " << media << std::endl;
    
    return 0;
}

float adicionarValores(int vt[], int tamanho) {
    int cMed = 0, sImp = 0;
    float med = 0;
    
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o valor do " << (i + 1) << "º índice: ";
        std::cin >> vt[i];
        if (vt[i] > 9 && vt[i] < 201) {
            cMed++;
            med += vt[i];
        }
        if (vt[i] % 2 == 1) {
            sImp += vt[i];
        }
    }
    
    std::cout << "Soma dos ímpares: " << sImp << std::endl;
    
    if (cMed == 0) return 0;
    return med / cMed;
}
