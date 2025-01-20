#include <iostream>

int main(){
    float kg;
    int duracaoDias;

    std::cout << "Digite a quantidade de quilos do alimento: ";
    std::cin >> kg;

    duracaoDias = (int) (kg * 1000) / 50;

    std::cout << "O alimento irá durar " << duracaoDias << " dias";
    
    return 0;
}