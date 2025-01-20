#include <iostream>

int main(){
    int num, indx;
    float seq;

    std::cout << "Digite o número da sequência: ";
    std::cin >> num;

	while(indx < num) {
		indx++;
		seq = seq + (1 / indx);
	}

    std::cout << "O resultado da sequência de " << num << " é " << seq;
    return 0;
}