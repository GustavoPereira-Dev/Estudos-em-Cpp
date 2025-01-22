#include <iostream>

float sequencia(int num);

int main(){
    int num, indx;
    float seq;

    std::cout << "Digite o número da sequência: ";
    std::cin >> num;


    std::cout << "O resultado da sequência de " << num << " é " << sequencia(num);
    return 0;
}

float sequencia(int num){
	float seq = 0.0;
    int indx = 0;
    while(indx < num) {
		indx++;
		seq = seq + (float) (1 / indx);
	}

    return seq;
}