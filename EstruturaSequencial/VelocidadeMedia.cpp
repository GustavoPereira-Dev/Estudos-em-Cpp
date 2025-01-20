#include <iostream>

int main(){
    int numVoltas, tempDur;
    float extCirc, distTotal, velMed;

    std::cout << "Digite a quantidade de voltas do circuito: ";
    std::cin >> numVoltas;

    std::cout << "Digite o tempo de duração no circuito: ";
    std::cin >> tempDur;

    std::cout << "Digite a distância do circuito: ";
    std::cin >> extCirc;

	distTotal = (extCirc * numVoltas) / 1000;
	velMed = distTotal / tempDur;

    std::cout << "A quilometragem média feita no circuito foi de " << velMed << " km/h"
    return 0;
}