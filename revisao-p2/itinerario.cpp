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

int qtdEstradasSaemDaCidade(int m[N][N], int cidade)
{
    int quantasSaem = 0;

    for (int j = 0; j < N; j++)
    {
        quantasSaem += m[cidade][j];
    }

    return quantasSaem;
}

int qtdEstradasChegamACidade(int m[N][N], int cidade)
{

    int quantasChegam = 0;

    for (int i = 0; i < N; i++)
    {
        quantasChegam += m[i][cidade];
    }

    return quantasChegam;
}

int qualCidadeChegaMaisEstradas(int m[N][N])
{
    int cidade = 0;
    int qtdDeEstrasQueChegam = 0;

    for (int i = 0; i < N; i++)
    {
        if (qtdEstradasChegamACidade(m, i) > qtdDeEstrasQueChegam)
        {
            qtdDeEstrasQueChegam = qtdEstradasChegamACidade(m, i);
            cidade = i;
        }
    }

    return cidade;
}

void todasAsEstradasSaoDeMaoDupla(int m[N][N], int cidade)
{
    if (qtdEstradasChegamACidade(m, cidade) == N && qtdEstradasSaemDaCidade(m, cidade) == N)
    {
        cout << "Todas ";
    }
    else
    {
        cout << "Nem todas ";
    }

    cout << "as estradas são de mão dupla para a cidade " << cidade << endl;
}

void verificaCidadesIsoladas(int m[N][N])
{
    int naoHaSaida, naoHaChegada;

    for (int i = 0; i < N; i++)
    {
        naoHaSaida = qtdEstradasSaemDaCidade(m, i) == 0;
        naoHaChegada = qtdEstradasChegamACidade(m, i) == 0;

        if (naoHaChegada && naoHaSaida)
        {
            cout << "A cidade " << i << " é uma cidade isolada" << endl;
        }
        else if (naoHaSaida)
        {
            cout << "A cidade " << i << " possui entradas mas não possui saídas" << endl;
        }
        else if (naoHaChegada)
        {
            cout << "A cidade " << i << " possui saídas mas não possui entradas" << endl;
        }

        /* code */
    }
}

void possuiSaidaDiretaParaACidade(int m[N][N], int cidade)
{

    for (int i = 0; i < N; i++)
    {
        if (m[i][cidade] == 1)
        {
            cout << "A cidade " << i << " possui saída direta para a cidade " << cidade << endl;
        }
    }
}

void leiaOVetor(int vetor[], int tamanhoMaximo)
{
    cout << "Entre com os elementos do vetor no R" << tamanhoMaximo << ": ";

    for (int i = 0; i < tamanhoMaximo; i++)
        cin >> vetor[i];
}

int verificaViabilidadeRoteiro(int m[N][N], int roteiro[], int tamanhoRoteiro)
{
    for (int i = 0; i < tamanhoRoteiro - 1; i++)
    {
        if (m[roteiro[i] - 1][roteiro[i + 1] - 1] == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int m[N][N], k;

    leMatriz(m);

    cout << "Entre com a cidade k: ";

    cin >> k;

    cout << endl
         << "Saem " << qtdEstradasSaemDaCidade(m, k) << " e chegam " << qtdEstradasChegamACidade(m, k) << " estradas da cidade " << k << endl;

    cout << "A cidade que mais chegam estradas é " << qualCidadeChegaMaisEstradas(m) << endl;

    todasAsEstradasSaoDeMaoDupla(m, k);
    possuiSaidaDiretaParaACidade(m, k);
    verificaCidadesIsoladas(m);

    int tamanhoRoteiro = 0;

    cout << "Entre com o tamanho do roteiro: ";

    cin >> tamanhoRoteiro;

    cout << endl;

    int roteiro[tamanhoRoteiro];

    leiaOVetor(roteiro, tamanhoRoteiro);

    cout << endl
         << "Viabilidade do roteiro: " << verificaViabilidadeRoteiro(m, roteiro, tamanhoRoteiro) << endl;

    return 0;
}