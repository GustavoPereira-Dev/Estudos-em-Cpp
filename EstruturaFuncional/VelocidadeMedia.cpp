#include <iostream>

float velocidadeMedia(int numVoltas, int tempDur, float extCirc);

int main(){
    int numVoltas, tempDur;
    float extCirc;

    std::cout << "Digite a quantidade de voltas do circuito: ";
    std::cin >> numVoltas;

    std::cout << "Digite o tempo de duração no circuito: ";
    std::cin >> tempDur;

    std::cout << "Digite a distância do circuito: ";
    std::cin >> extCirc;

    std::cout << "A quilometragem média feita no circuito foi de " << velocidadeMedia(numVoltas, tempDur, extCirc) << " km/h";
    
    return 0;
}

float velocidadeMedia(int numVoltas, int tempDur, float extCirc){
	float distTotal;
    distTotal = (extCirc * numVoltas) / 1000;
	return distTotal / tempDur;
}
