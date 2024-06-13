/*
Questão 1 P1

Para mais informações leio o arquivo `README.md` na pasta raiz

*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Entre com um inteiro positivo: ";
    cin >> n;

    cout << endl;

    if (n < 100 || n > 999)
    {
        cout << "Valor inválido." << endl;
        return 0;
    }

    int centena, dezena, unidade;

    unidade = n % 10;
    dezena = (n % 100) / 10;
    centena = n / 100;

    if (centena < dezena && dezena < unidade)
    {
        cout << n << " é crescente" << endl;
    }
    else
    {
        cout << n << " não é crescente" << endl;
    }

    return 0;
}
/*by André C. Pozzan
https://www.github.com/andrepozzan
*/