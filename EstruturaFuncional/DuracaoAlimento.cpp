#include <iostream>

int duracaoDias;

void duracaoAlimento(float kg);

int main(){
    float kg;
    
    std::cout << "Digite a quantidade de quilos do alimento: ";
    std::cin >> kg;

    duracaoAlimento(kg);

    std::cout << "O alimento irá durar " << duracaoDias << " dias";
    
    return 0;
}

void duracaoAlimento(float kg){
    duracaoDias = (int) (kg * 1000) / 50;
}