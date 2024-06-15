#include <iostream>

using namespace std;

#define N 3

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

int verificaSomaDasLinhas(int m[N][N], int &somaDasLinhas)
{
    int somaDeUmaLinha = 0;

    for (int i = 0; i < N; i++)
    {
        somaDeUmaLinha = 0;

        for (int j = 0; j < N; j++)
            somaDeUmaLinha += m[i][j];

        if (i == 0)
            somaDasLinhas = somaDeUmaLinha;
        else if (somaDeUmaLinha != somaDasLinhas)
            return 0;
    }

    return 1;
}

int verificaSomaDasColunas(int m[N][N], int &somaDasColunas)
{
    int somaDeUmaColuna = 0;

    for (int j = 0; j < N; j++)
    {
        somaDeUmaColuna = 0;

        for (int i = 0; i < N; i++)
            somaDeUmaColuna += m[i][j];

        if (j == 0)
            somaDasColunas = somaDeUmaColuna;
        else if (somaDeUmaColuna != somaDasColunas)
            return 0;
    }
    return 1;
}

int verificaSomaDasDiagonais(int m[N][N], int &somaDasDiagonais)
{

    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    for (int i = 0; i < N; i++)
    {
        somaDiagonalPrincipal += m[i][i];
    }

    for (int i = 0; i < N; i++)
    {

        somaDiagonalSecundaria += m[i][N - 1 - i];
    }

    if (somaDiagonalPrincipal != somaDiagonalSecundaria)
    {
        return 0;
    }
    else
    {
        somaDasDiagonais = somaDiagonalPrincipal;
        return 1;
    }
}

int verificaSeEQuadradoMagico(int m[N][N])
{
    int somaDasLinhas = 0;
    int somaDasColunas = 0;
    int somaDasDiagonais = 0;

    cout << "Linhas: " << verificaSomaDasLinhas(m, somaDasLinhas) << " --> " << somaDasLinhas << endl;
    cout << "Colunas: " << verificaSomaDasColunas(m, somaDasColunas) << " --> " << somaDasColunas << endl;
    cout << "Diagonais: " << verificaSomaDasDiagonais(m, somaDasDiagonais) << " --> " << somaDasDiagonais << endl;

    if (verificaSomaDasLinhas(m, somaDasLinhas) && verificaSomaDasColunas(m, somaDasColunas) && verificaSomaDasDiagonais(m, somaDasDiagonais) && somaDasLinhas == somaDasColunas && somaDasLinhas == somaDasColunas)
        cout << "A matriz é quadrado mágico!" << endl;
}

int main()
{
    int m[N][N];

    leMatriz(m);
    verificaSeEQuadradoMagico(m);
}