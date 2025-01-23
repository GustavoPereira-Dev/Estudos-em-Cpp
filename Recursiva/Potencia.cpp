#include <iostream>
using namespace std;

int calcPot(int base, int exp);

int main() {
    cout << calcPot(3, 2) << endl;
    return 0;
}

int calcPot(int base, int exp) {
    if (exp == 1) {
        return 0;
    }

    int pot = (base * base) + calcPot(base, exp - 1);
    return pot;
}
