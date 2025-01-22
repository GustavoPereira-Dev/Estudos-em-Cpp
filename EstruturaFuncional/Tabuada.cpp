#include <iostream>

void tabuadaDesejada(int num);

int main(){
    int num;

    std::cout << "Digite o número que deseja fazer uma tabuada de 1 até 10: ";
    std::cin >> num;

    tabuadaDesejada(num);

    return 0;
}

void tabuadaDesejada(int num){
    int indx = 0, mult;
    while(indx < 10) {
		indx++;
		mult = (num * indx);
		std::cout << num << " x " << indx << " = " << mult;
	}
}