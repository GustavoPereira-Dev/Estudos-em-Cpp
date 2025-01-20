#include <iostream>

int main(){
    int num, fat;

    std::cont << "Digite a fatorial do número: ";
    std::cin >> num;

	for(int i = num; i > 1; i--) {
		fat *= (num * (num - 1));
	}

    std::cont << "O resultado do fatorial de " << num << " é de " << fat;

    return 0;
}