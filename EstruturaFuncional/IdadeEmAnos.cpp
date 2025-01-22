#include <iostream>

int diaAt, mesAt, anoAt;
int diaNasc, mesNasc, anoNasc;

void calcularIdadeCompleta();

int main(){
    std::cout << "Digite o dia de hoje: ";
    std::cin >> diaAt;

    std::cout << "Digite o mês de hoje: ";
    std::cin >> mesAt;

    std::cout << "Digite o ano de hoje: ";
    std::cin >> anoNasc;    


    std::cout << "Digite o dia de nascimento: ";
    std::cin >> diaNasc;

    std::cout << "Digite o mês de nascimento: ";
    std::cin >> mesNasc;

    std::cout << "Digite o ano de nascimento: ";
    std::cin >> anoNasc;

	calcularIdadeCompleta();

    return 0;
}

void calcularIdadeCompleta(){
	int anoRes, mesRes, diaRes;	

	if(mesAt - mesNasc < 0) {
		mesRes = (mesAt - mesNasc) + 12;
		anoRes = (anoAt - anoNasc) - 1;
	} else {
		mesRes = (mesAt - mesNasc);
		anoRes = (anoAt - anoNasc);
	}
		
	if(diaAt - diaNasc < 0) {
		if(anoAt % 4 == 0 && anoAt % 100 != 0 && mesAt - 1 == 2 || anoAt % 400 == 0 && anoAt % 100 == 0 && mesAt - 1 == 2) {
			diaRes = (diaAt - diaNasc) + 29;
		} else if(anoAt % 4 == 0 && anoAt % 100 == 0 && mesAt - 1 == 2 || anoAt % 400 != 0 && anoAt % 100 != 0 && mesAt - 1 == 2) {
			diaRes = (diaAt - diaNasc) + 28;
		} else if(mesAt % 2 == 1 && mesAt < 8 || mesAt % 2 == 0 && mesAt > 7) {
			diaRes = (diaAt - diaNasc) + 30;
		} else {
			diaRes = (diaAt - diaNasc) + 31;
		}
	} else {
		diaRes = diaAt - diaNasc;
	}

    std::cout << "A sua idade é de: " << anoRes << " anos " << mesRes << " mes(es) " << " e " << diaRes << " dia(s)"; 
}