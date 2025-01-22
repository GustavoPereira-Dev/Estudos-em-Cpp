#include <iostream>

double sequenciaFatorial(int n);
int calcularFatorial(int n);

int main(){
    int num;

    std::cout << "Digite o número da sequência de fatorial: ";
    std::cin >> num;
        
    std::cout << "O resultado da sequência de fatorial é " << sequenciaFatorial(num);

    return 0;
}

double sequenciaFatorial(int n){
    double seq = 0;
    int indx = 0;

    while(indx < n) {
        indx++;
        seq += (double) 1 / calcularFatorial(indx);
    }

    return seq;
}

int calcularFatorial(int n){
    int fat = 1;

    for(int indxFat = n; indxFat > 1; indxFat--) {
        fat *= indxFat;
    }

    return fat;
}
