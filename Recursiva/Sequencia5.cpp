#include <iostream>
#include <cmath>
using namespace std;

double calcSeq(double n);

int main() {
    cout << "O resultado é: " << calcSeq(15) << endl;
    return 0;
}

double calcSeq(double n) {
    if (n > 1) {
        return exp(((n + 1) / pow(n + 1, 2)) * log(n / pow(n, 2))) + calcSeq(n - 1);
    }
    return 1;
}
