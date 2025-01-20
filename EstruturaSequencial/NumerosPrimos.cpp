#include <iostream>

int main(){
    int num1, num2, indx, indxMod;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

	if(num2 > num1) {
		indx = num2;
	} else {
		indx = num1;
	}
		
	while(indx + 1 > num1 || indx + 1 > num2) {
		for(indxMod = indx - 1;indxMod > 0; indxMod--) {
			if(indxMod == 0) {
				std::cout << indx;
			} else if(indx % indxMod == 0) {
				indxMod = (indx - indx) - 1;
			}
		}
		indx--;
	}

    return 0;
}