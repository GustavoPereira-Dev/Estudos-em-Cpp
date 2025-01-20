#include <iostream>

int main(){
    int horaInicio, horaFim, duracaoHor;
    int minInicio, minFim, duracaoMin;

    std::cout << "Digite a hora de início do jogo: ";
    std::cin >> horaInicio;

    std::cout << "Digite a hora de fim do jogo: ";
    std::cin >> horaFim;

    std::cout << "Digite a minutagem de início do jogo: ";
    std::cin >> minInicio;

    std::cout << "Digite a minutagem de fim do jogo: ";
    std::cin >> minFim;

	if(horaFim - horaInicio < 0) {
		duracaoHor = (horaFim - horaInicio) + 24;
	} else {
		duracaoHor = (horaFim - horaInicio);
	}
		
	if(minFim - minInicio < 0) {
		duracaoMin = (minFim - minInicio) + 60;
	} else {
		duracaoMin = (minFim - minInicio);
	}

    std::cout << "A duraçã do jogo foi de " << duracaoHor << " horas e " << duracaoMin << " minutos";
    return 0;
}