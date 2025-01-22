#include <iostream>

int calcularFatorial(int num);

int main(){
    int num;

    std::cont << "Digite a fatorial do número: ";
    std::cin >> num;

    std::cont << "O resultado do fatorial de " << num << " é de " << calcularFatorial(num);

    return 0;
}

int calcularFatorial(int num){
    int fat;

    for(int i = num; i > 1; i--) {
		fat *= (num * (num - 1));
	}

    return fat;   
}