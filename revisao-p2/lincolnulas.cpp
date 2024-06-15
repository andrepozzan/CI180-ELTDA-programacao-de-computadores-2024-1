#include <iostream>

using namespace std;

#define N 4
#define M 4

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

int verificaQuantidadeDeLinhasNulas(int m[N][M])
{

    int qtdDeElementosNulosNaLinha, qtdLinhasNulas;

    qtdLinhasNulas = 0;

    for (int i = 0; i < N; i++)
    {
        qtdDeElementosNulosNaLinha = 0;
        for (int j = 0; j < M; j++)
        {
            if (m[i][j] == 0)
            {
                qtdDeElementosNulosNaLinha++;
            }
        }

        if (qtdDeElementosNulosNaLinha == M)
        {
            qtdLinhasNulas++;
        }
    }

    return qtdLinhasNulas;
}

int verificaQuantidadeDeColunasNulas(int m[N][M])
{

    int qtdDeElementosNulosNaColuna, qtdColunasNulas;

    qtdColunasNulas = 0;

    for (int j = 0; j < M; j++)
    {
        qtdDeElementosNulosNaColuna = 0;
        for (int i = 0; i < N; i++)
        {
            if (m[i][j] == 0)
                qtdDeElementosNulosNaColuna++;
        }

        if (qtdDeElementosNulosNaColuna == N)
        {
            qtdColunasNulas++;
        }
    }

    return qtdColunasNulas;
}

int main()
{
    int m[N][M];
    leMatriz(m);

    cout << "A matriz tem " << verificaQuantidadeDeLinhasNulas(m) << " linhas nulas e " << verificaQuantidadeDeColunasNulas(m) << " colunas nulas";

    return 0;
}