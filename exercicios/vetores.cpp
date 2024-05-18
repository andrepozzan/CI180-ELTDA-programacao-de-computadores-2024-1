/*
Percorrendo vetores com funções

*/

#include <iostream>
#include <cmath>

using namespace std;

void leiaOVetor(int (&vetor)[], int tamanhoMaximo)
{
    int contador = 0;

    cout << "Entre com o elemento " << contador << " do vetor: ";
    cin >> vetor[contador];

    while (contador < tamanhoMaximo - 1)
    {
        contador++;

        cout << "Entre com o elemento " << contador << " do vetor: ";
        cin >> vetor[contador];
    }
}

void imprimeOVetor(int vetor[], int tamanhoMaximo)
{
    int contador = 0;

    cout << "Vetor = [ ";
    while (contador < tamanhoMaximo)
    {
        if (contador + 1 == tamanhoMaximo)
            cout << vetor[contador] << " ";
        else
            cout << vetor[contador] << ", ";

        contador++;
    }
    cout << "]" << endl;
}

void produtoEscalar(int vetor1[], int vetor2[], int tamanhoMaximo)
{
    int produtoEscalar = 0;

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        produtoEscalar = produtoEscalar + vetor1[i] * vetor2[i];
    }

    cout << "O produto escalar é: " << produtoEscalar << endl;
}

void produtoVetorial(int vetor1[], int vetor2[], int tamanhoMaximo)
{
    if (tamanhoMaximo != 3)
    {
        cout << "Calcula só no R3" << endl;
        return;
    }

    int i, j, k;

    i = vetor1[1] * vetor2[2] - (vetor1[2] * vetor2[1]);

    j = vetor1[2] * vetor2[0] - (vetor1[0] * vetor2[2]);

    k = vetor1[0] * vetor2[1] - (vetor1[1] * vetor2[0]);

    cout << "O produto vetorial é: [ " << i << ", " << j << ", " << k << " ]" << endl;
}

void somaVetores(int vetor1[], int vetor2[], int tamanhoMaximo, int operacao)
{
    cout << "Operação: " << operacao << " o vetor soma é : [ ";

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        if (i + 1 == tamanhoMaximo)
            cout << vetor1[i] + vetor2[i] * operacao << " ";
        else
            cout << vetor1[i] + vetor2[i] * operacao << ", ";
    }

    cout << "]" << endl;
}

int main()
{
    int espacoVetorial = 0;

    cout << "Entre em qual espaço vetorial está trabalhando: ";

    cin >> espacoVetorial;

    int vetor1[espacoVetorial];
    int vetor2[espacoVetorial];

    leiaOVetor(vetor1, espacoVetorial);

    imprimeOVetor(vetor1, espacoVetorial);

    leiaOVetor(vetor2, espacoVetorial);

    imprimeOVetor(vetor2, espacoVetorial);

    produtoEscalar(vetor1, vetor2, espacoVetorial);

    produtoVetorial(vetor1, vetor2, espacoVetorial);

    int operacao = 1;

    cout << "Entre com a operação (1 = soma)(-1 = subtração): " << endl;

    cin >> operacao;

    somaVetores(vetor1, vetor2, espacoVetorial, operacao);
}
