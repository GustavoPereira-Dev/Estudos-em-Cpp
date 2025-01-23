#include <iostream>
using namespace std;

void carregarLinhaMatriz(long mt[][8], int i);
void carregarColunaMatriz(long mt[][8], int i, int j);

int main() {
    long mt[8][8] = {0};
    carregarLinhaMatriz(mt, 7);
    cout << mt[6][7] << endl;
    return 0;
}

void carregarLinhaMatriz(long mt[][8], int i) {
    if (i < 0) {
        return;
    }
    
    carregarLinhaMatriz(mt, i - 2);
    carregarColunaMatriz(mt, i - 1, 7);
}

void carregarColunaMatriz(long mt[][8], int i, int j) {
    if (j < 0) {
        return;
    }

    carregarColunaMatriz(mt, i, j - 1);

    if (i == 0 && j == 0) {
        mt[i][j] = 1;
        mt[i + 1][j] = 1;
    } else if (j != 0) {
        mt[i + 1][j] = mt[i + 1][j - 1] * 2;
        mt[i][j] = mt[i][j - 1] + mt[i + 1][j];
    }

    if (i != 6) {
        mt[i + 3][0] = mt[i + 1][j] * 2;
        mt[i + 2][0] = mt[i + 3][0];
    }
}
