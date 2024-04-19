#include <iostream>

using namespace std;

int main () {
    int num, primDig, ultDig;

    cout << "Entre com um inteiro de 4 dígitos: ";

    cin >> num;

    primDig = num / 1000;
    ultDig = num % 10;

    cout << "Primeiro dígito = " << primDig << " Último dígito = " << ultDig<< endl;
}