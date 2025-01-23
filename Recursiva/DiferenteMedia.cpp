#include <iostream>
#include <string>
using namespace std;

void lerVetor(int vt[], int i);
int somarValores(int vt[], int i);
string* calcDiferencaMedia(double media, int vt[], int i);

int main() {
    int vt[30] = {0};
    lerVetor(vt, 29);

    string* textos = calcDiferencaMedia(somarValores(vt, 29) / 30.0, vt, 29);

    cout << "Valores acima da média: " << textos[0] << "\nValores abaixo da média: " << textos[1] << endl;

    delete[] textos;
    return 0;
}

void lerVetor(int vt[], int i) {
    if (i < 0) {
        return;
    }

    lerVetor(vt, i - 1);
    cout << "Digite o valor do " << (i + 1) << "º índice: ";
    cin >> vt[i];
}

int somarValores(int vt[], int i) {
    if (i < 0) {
        return 0;
    }

    return vt[i] + somarValores(vt, i - 1);
}

string* calcDiferencaMedia(double media, int vt[], int i) {
    string* textos = new string[2]{"", ""};

    if (i < 0) {
        return textos;
    }

    string* prevTextos = calcDiferencaMedia(media, vt, i - 1);
    textos[0] = prevTextos[0];
    textos[1] = prevTextos[1];
    delete[] prevTextos;

    if (vt[i] > media) {
        textos[0] += to_string(vt[i]) + " ";
    } else if (vt[i] < media) {
        textos[1] += to_string(vt[i]) + " ";
    }

    return textos;
}
