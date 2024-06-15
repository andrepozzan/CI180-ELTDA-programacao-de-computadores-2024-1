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

int main()
{
    int m[N][N];

    leMatriz(m);

    

    return 0;
}