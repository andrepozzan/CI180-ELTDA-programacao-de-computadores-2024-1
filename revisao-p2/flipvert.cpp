#include <iostream>

using namespace std;

#define N 5
#define M 5

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

void troca(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void inverteColunasMatriz(int m[N][M])
{

    for (int j = 0; j < M; j++)
    {
        for (int i = 0; i < N / 2; i++)
        {
            troca(m[i][j], m[N - 1 - i][j]);
        }
    }
}

int main()
{
    int m[N][M];
    leMatriz(m);

    inverteColunasMatriz(m);
    escreveMatriz(m);

    return 0;
}