/*
Percorrendo vetores com funções

*/

#include <iostream>

using namespace std;

#define TAMANHO_MAXIMO_VETOR 5

void leiaOVetor(int (&vetor)[])
{
    int contador = 0;

    cout << "Entre com um elemento do vetor: ";
    cin >> vetor[contador];

    while (vetor[contador] >= 0 && contador < TAMANHO_MAXIMO_VETOR - 1)
    {
        contador++;

        cout << "Entre com um elemento do vetor: ";
        cin >> vetor[contador];
    }
}

void imprimeOVetor(int vetor[])
{
    int contador = 0;

    while (contador < TAMANHO_MAXIMO_VETOR)
    {
        cout << vetor[contador] << " ";
        contador++;
    }
}

int main()
{
    int meuVetor[TAMANHO_MAXIMO_VETOR + 1];

    leiaOVetor(meuVetor);

    imprimeOVetor(meuVetor);
}
