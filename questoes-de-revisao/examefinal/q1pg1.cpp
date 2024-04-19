#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {

        cout << "Entre com um número: " << endl;

        int numeroDeEntrada;

        cin >> numeroDeEntrada;

        int quantidadeDeDivisores = 0;
        for (int numeroContador = numeroDeEntrada - 1; numeroContador < numeroDeEntrada && numeroContador > 0; numeroContador = numeroContador - 1)
        {

            if (numeroDeEntrada % numeroContador == 0)
            {
                if (numeroContador % 5 == 0 && numeroContador % 7 == 0)
                {
                    cout << numeroContador << endl;
                    quantidadeDeDivisores++;
                }
            }
        }
        cout << "Qtd. de divisores: " << quantidadeDeDivisores << endl;
    }
    return 0;
}