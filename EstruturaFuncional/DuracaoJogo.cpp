#include <iostream>

void duracaoJogo(int horaInicio, int horaFim, int minutoInicio, int minutoFim);

int horaInicio, horaFim;
int minInicio, minFim;

int main(){

    std::cout << "Digite a hora de início do jogo: ";
    std::cin >> horaInicio;

    std::cout << "Digite a hora de fim do jogo: ";
    std::cin >> horaFim;

    std::cout << "Digite a minutagem de início do jogo: ";
    std::cin >> minInicio;

    std::cout << "Digite a minutagem de fim do jogo: ";
    std::cin >> minFim;

    return 0;
}

void duracaoJogo(int horaInicio, int horaFim, int minutoInicio, int minutoFim){
    int duracaoHor, duracaoMin;

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

    std::cout << "A duração do jogo foi de " << duracaoHor << " horas e " << duracaoMin << " minutos";
}