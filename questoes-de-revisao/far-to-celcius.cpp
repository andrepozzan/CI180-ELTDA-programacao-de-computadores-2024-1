#include <iostream>

using namespace std;

int main () {
    float c, f;

    cout << "Entre com a temperatura em Farenheit: ";
    cin >> f;
    c = 5.0 / 9 * (f - 32);
    cout << "Em celsius = " << c << endl;
}