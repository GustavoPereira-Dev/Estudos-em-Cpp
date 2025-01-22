#include <iostream>

int maiorNumero(int n1, int n2);
void numerosPrimos(int n1, int n2, int indx);

int main(){
    int num1, num2, indx, indxMod;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

	indx = maiorNumero(num1, num2)



    return 0;
}

int maiorNumero(int n1, int n2){
	if(n2 > n1) {
		return n2;
	} else {
		return n1;
	}
}

void numerosPrimos(int n1, int n2, int indx){
	while(indx + 1 > num1 || indx + 1 > num2) {
		for(int indxMod = indx - 1;indxMod > 0; indxMod--) {
			if(indxMod == 0) {
				std::cout << indx;
			} else if(indx % indxMod == 0) {
				indxMod = (indx - indx) - 1;
			}
		}
		indx--;
	}
}