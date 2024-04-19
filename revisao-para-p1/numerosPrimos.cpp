/*Ache os números primos*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int maximo = 100;

    int quantidadeDeDivisores;

    for (int contador = 0; contador < maximo; contador++)
    {
        quantidadeDeDivisores = 0;
        for (int contador2 = contador; contador2 > 0; contador2--)
        {
            if (contador % contador2 == 0)
            {
                quantidadeDeDivisores++;
            }
        }

        if (quantidadeDeDivisores == 2)
        {
            cout << "É número primo: " << contador << endl;
        }
    }

    return 0;
}