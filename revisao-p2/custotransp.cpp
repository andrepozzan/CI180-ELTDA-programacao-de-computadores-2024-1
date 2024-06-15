#include <iostream>

using namespace std;

#define N 4

void leiaOVetor(int vetor[], int tamanhoMaximo)
{
    cout << "Entre com os elementos do vetor no R" << tamanhoMaximo << ": ";

    for (int i = 0; i < tamanhoMaximo; i++)
        cin >> vetor[i];
}

void leMatriz(int m[N][N])
{
    cout << "Entre com uma matriz " << N << "x" << N << " de inteiros:" << endl;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> m[i][j];
}

void escreveMatriz(int m[N][N])
{
    cout << "Matriz:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << m[i][j] << " ";

        cout << endl;
    }
}

int calculaCustoItinerario(int m[N][N], int itineriario[], int k)
{
    int custoDoItinerario = 0;
    for (int i = 0; i < k - 1; i++)
    {

        custoDoItinerario += m[itineriario[i] - 1][itineriario[i + 1] - 1];
    }

    return custoDoItinerario;
}

int main()
{
    int m[N][N];
    leMatriz(m);

    int k = 0;

    cout << "Entre com a quantidade k de cidades: ";
    cin >> k;

    int itinerario[k];

    leiaOVetor(itinerario, k);

    cout << "O custo do itinerário é: " << calculaCustoItinerario(m, itinerario, k) << endl;
}