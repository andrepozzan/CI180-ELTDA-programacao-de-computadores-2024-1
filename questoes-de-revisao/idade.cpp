#include <iostream>
using namespace std;

int main()
{
    int anoNasc, idade;

    cout << "Entre com o seu ano de nascimento: ";

    cin >> anoNasc;

    idade = 2024 - anoNasc;

    cout << "Em 31/12/2024 você terá " << idade << endl;
}