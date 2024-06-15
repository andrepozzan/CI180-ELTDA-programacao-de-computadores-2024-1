#include <iostream>

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

int ehSegmento(int a[], int n, int b[], int m, int p)
{
    int ehIgual = 1;

    for (int i = 0; i < m; i++)
    {
        if (a[p + i] != b[i])
        {
            ehIgual = 0;
        }
    }

    return ehIgual;
}

int main()
{
    int n, m, p;

    cout << "Entre com o valor de n, m e p: ";
    cin >> n >> m >> p;

    int a[n], b[m];

    leiaOVetor(a, n);

    leiaOVetor(b, m);

    cout << "Retorno da função: ";
    cout << endl
         << ehSegmento(a, n, b, m, p) << endl;

    return 0;
}