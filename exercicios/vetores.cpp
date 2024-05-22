/*
Calculadora para vetores:

Produto Escalar,
Produto Vetorial(apenas no R3)

Norma

*/

#include <iostream>
#include <cmath>

using namespace std;

void leiaOVetor(int vetor[], int tamanhoMaximo)
{
    cout << "Entre com os elementos do vetor no R" << tamanhoMaximo << ": ";

    for (int i = 0; i < tamanhoMaximo; i++)
        cin >> vetor[i];
}

void imprimeOVetor(int vetor[], int tamanhoMaximo)
{

    cout << endl
         << "Vetor = [ ";

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        cout << vetor[i];

        /*Apenas para ajustar a visualização no terminal*/
        if (i + 1 == tamanhoMaximo)
            cout << " ";
        else
            cout << ", ";
    }

    cout << "]" << endl
         << endl;
}

void produtoEscalar(int vetor1[], int vetor2[], int tamanhoMaximo)
{
    int produtoEscalar = 0;

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        produtoEscalar = produtoEscalar + vetor1[i] * vetor2[i];
    }

    cout << "O produto escalar é: " << produtoEscalar << endl
         << endl;
}

void produtoVetorial(int vetor1[], int vetor2[], int tamanhoMaximo)
{
    if (tamanhoMaximo != 3)
    {
        cout << "Calcula só no R3" << endl;
        return;
    }

    int produtoVetorial[tamanhoMaximo];

    produtoVetorial[0] = vetor1[1] * vetor2[2] - (vetor1[2] * vetor2[1]);

    produtoVetorial[1] = vetor1[2] * vetor2[0] - (vetor1[0] * vetor2[2]);

    produtoVetorial[2] = vetor1[0] * vetor2[1] - (vetor1[1] * vetor2[0]);

    cout << "O produto vetorial é: " << endl;

    imprimeOVetor(produtoVetorial, tamanhoMaximo);
}

void somaVetores(int vetor1[], int vetor2[], int tamanhoMaximo, int operacao)
{
    int vetorSoma[tamanhoMaximo];

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        vetorSoma[i] = vetor1[i] + vetor2[i] * operacao;
    }
    cout << "Operação " << operacao << " o vetor é :" << endl;

    imprimeOVetor(vetorSoma, tamanhoMaximo);
}

void normaDoVetor(int vetor[], int tamanhoMaximo)
{

    int somaDosQuadrados = 0;

    for (int i = 0; i < tamanhoMaximo; i++)
    {
        somaDosQuadrados = somaDosQuadrados + pow(vetor[i], 2);
    }

    float normaDoVetor = sqrt(somaDosQuadrados);

    cout << "A norma do vetor é: " << "sqrt de " << somaDosQuadrados << " = " << normaDoVetor << endl
         << endl;
}

int main()
{
    int espacoVetorial = 3;

    // Caso queira fazer alocação dinâmica:

    // cout << "Entre em qual espaço vetorial está trabalhando: ";

    // cin >> espacoVetorial;

    int vetor1[espacoVetorial];
    int vetor2[espacoVetorial];

    leiaOVetor(vetor1, espacoVetorial);

    imprimeOVetor(vetor1, espacoVetorial);

    normaDoVetor(vetor1, espacoVetorial);

    leiaOVetor(vetor2, espacoVetorial);

    imprimeOVetor(vetor2, espacoVetorial);

    normaDoVetor(vetor2, espacoVetorial);

    cout
        << "-----------" << endl
        << endl;

    produtoEscalar(vetor1, vetor2, espacoVetorial);

    produtoVetorial(vetor1, vetor2, espacoVetorial);

    int operacao = -1;

    // cout << "Entre com a operação (1 = soma)(-1 = subtração): " << endl;

    // cin >> operacao;

    somaVetores(vetor1, vetor2, espacoVetorial, operacao);
}
