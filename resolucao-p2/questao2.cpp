#include <iostream>
using namespace std;

#define N 5
#define M 6

void fazerBorda(float r[N][M]);
float calcMedia(float m[N][M], int i, int j);
void alteraMatriz(float m[N][M], float r[N][M]);
void imprimeMatriz(float r[N][M]);
void ler_matriz(float m[N][M]);

int main()
{
    float m[N][M];
    float r[N][M];

    cout << "Entre com uma matriz " << N << "x" << M << ": " << endl;
    ler_matriz(m);
    alteraMatriz(m, r);
    cout << "Matriz resultante: " << endl;
    imprimeMatriz(r);
    return 0;
}

void fazerBorda(float r[N][M])
{
    for (int i = 0; i < N; i++)
    {
        r[i][0] = 0;
        r[i][M - 1] = 0;
    }

    for (int i = 0; i < M; i++)
    {
        r[0][i] = 0;
        r[N - 1][i] = 0;
    }
}

float calcMedia(float m[N][M], int i, int j)
{
    float soma = m[i][j + 1] + m[i + 1][j] + m[i][j - 1] + m[i - 1][j];
    float media = soma / 4;
    return media;
}

void alteraMatriz(float m[N][M], float r[N][M])
{
    fazerBorda(r);

    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 1; j < M - 1; j++)
        {
            r[i][j] = calcMedia(m, i, j);
        }
    }
}

void imprimeMatriz(float r[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
}

void ler_matriz(float m[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> m[i][j];
        }
    }
}
