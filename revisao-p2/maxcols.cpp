#include <iostream>

using namespace std;

#define N 3
#define M 3

void leMatriz(int m[N][M])
{
    cout << "Entre com uma matriz " << N << "x" << M << " de inteiros:" << endl;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> m[i][j];
}

void escreveMatriz(int m[N][M])
{
    cout << "Matriz:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << m[i][j] << " ";

        cout << endl;
    }
}

void maioresElementosDasColunas(int m[N][M], int vetor[M])
{
    int maiorDaColuna = 0;

    for (int j = 0; j < M; j++)
    {
        maiorDaColuna = m[0][j];

        for (int i = 1; i < N; i++)
        {
            if (m[i][j] > maiorDaColuna)
            {
                maiorDaColuna = m[i][j];
            }
        }

        vetor[j] = maiorDaColuna;
    }
}

void imprimeVetor(int vetor[M])
{

    cout << "Vetor: [ ";

    for (int i = 0; i < M; i++)
    {
        cout << vetor[i];

        if (i < M - 1)
            cout << ", ";
        else
            cout << " ";
    }

    cout << "]" << endl;
}

int main()
{
    int m[N][M];
    int vetor[M];

    leMatriz(m);

    escreveMatriz(m);

    maioresElementosDasColunas(m, vetor);

    imprimeVetor(vetor);

    return 0;
}