#include <iostream>
#include <climits>
using namespace std;

const int LIMITE_VETOR = 5;

float calcMaior(float vt[], int i);
float calcMenor(float vt[], int i);

int main() {
    int indx = 0;
    float vt[LIMITE_VETOR];

    while (indx < LIMITE_VETOR) {
        cout << "Digite o número: ";
        cin >> vt[indx];
        indx++;
    }

    cout << "Maior: " << calcMaior(vt, LIMITE_VETOR - 1) << endl;
    cout << "Menor: " << calcMenor(vt, LIMITE_VETOR - 1) << endl;

    return 0;
}

float calcMaior(float vt[], int i) {
    if (i < 0) {
        return INT_MIN;
    }

    float n = calcMaior(vt, i - 1);
    if (i == 0 || vt[i] > n) {
        n = vt[i];
    }

    return n;
}

float calcMenor(float vt[], int i) {
    if (i < 0) {
        return INT_MAX;
    }

    float n = calcMenor(vt, i - 1);
    if (i == 0 || vt[i] < n) {
        n = vt[i];
    }

    return n;
}
