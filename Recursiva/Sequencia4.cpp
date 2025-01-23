#include <iostream>
using namespace std;

float calcSerie(float n1, float n2);

int main() {
    cout << calcSerie(50, 99) << endl;
    return 0;
}

float calcSerie(float n1, float n2) {
    float soma;
    if (n1 == 0) {
        return 0;
    }
    soma = (n1 / n2) + calcSerie(n1 - 1, n2 - 2);
    cout << soma << endl;
    return soma;
}
