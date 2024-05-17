#include <iostream>

using namespace std;

int main()
{
    int valorDeEntrada, quantidadeDeNumeros, quantidadeDeDivisores;

    quantidadeDeNumeros = 4;
    
    for (int contador = 0; contador < quantidadeDeNumeros; contador++)
    {
        cout << endl
             << "Entre com um valor: ";
        cin >> valorDeEntrada;

        quantidadeDeDivisores = 0;

        for (int contador2 = valorDeEntrada - 1; contador2 > 0; contador2 = contador2 - 1)
        {

            if (contador2 % 5 == 0 && contador2 % 7 == 0 && valorDeEntrada % contador2 == 0)
            {
                cout << contador2 << " ";
                quantidadeDeDivisores++;
            }

        }
        cout << endl;

        cout  << "Qtd. de divisores: " << quantidadeDeDivisores << endl;
    }

    return 0;
}