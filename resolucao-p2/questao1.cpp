#include <iostream>
using namespace std;

#define N 10

void leVetor(float v[N]);

void leSequencia(float &maior, float &segundoMaior);

void alteraVetor(float v[N], float maior, float segundoMaior);

void imprimeVetor(float v[N]);

int main()
{
    float v[N];
    float maior, segundoMaior;
    cout << "Entre com o vetor de " << N << " números" << endl;
    leVetor(v);
    cout << "Entre com uma sequência terminada com zero: " << endl;
    leSequencia(maior, segundoMaior);
    cout << "Maior na sequência = " << maior << endl;
    cout << "Segundo maior na sequência = " << segundoMaior << endl;
    alteraVetor(v, maior, segundoMaior);
    cout << "Vetor resultante: " << endl;
    imprimeVetor(v);

    return 0;
}

void imprimeVetor(float v[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void leVetor(float v[N])
{
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
}

void leSequencia(float &maior, float &segundoMaior)
{
    maior = 0;
    segundoMaior = 0;
    float num = 0;

    cin >> num;

    while (num != 0)
    {
        if (num > maior)
        {
            segundoMaior = maior; // Atualiza segundoMaior antes de mudar maior
            maior = num;
        }
        else if (num > segundoMaior)
        {
            segundoMaior = num;
        }
        cin >> num;
    }
}

void alteraVetor(float v[N], float maior, float segundoMaior)
{
    for (int i = 0; i < N; i++)
    {
        if (v[i] >= maior)
        {
            v[i] = 1;
        }
        else if (v[i] >= segundoMaior)
        {
            v[i] = 2;
        }
        else
        {
            v[i] = 0;
        }
    }
}
