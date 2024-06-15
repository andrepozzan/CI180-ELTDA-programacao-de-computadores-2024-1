#include <iostream>

using namespace std;

#define N 4

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

int verificaSeEPermutacao(int m[N][N])
{
    int qtdElementosNulosNaLinha;
    int qtdNumerosUmNaLinha;

    for (int i = 0; i < N; i++)
    {
        qtdElementosNulosNaLinha = 0;
        qtdNumerosUmNaLinha = 0;

        for (int j = 0; j < N; j++)
        {
            if (m[i][j] == 0)
                qtdElementosNulosNaLinha++;
            else if (m[i][j] == 1)
                qtdNumerosUmNaLinha++;
            else
                return 0;
        }

        if (qtdElementosNulosNaLinha != N - 1 || qtdNumerosUmNaLinha > 1)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int m[N][N];

    leMatriz(m);

    cout << "Resultado da verificação: " << verificaSeEPermutacao(m) << endl;

    return 0;
}