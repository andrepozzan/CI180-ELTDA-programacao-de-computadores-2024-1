/* elemComuns.cpp
Dados dois vetores de inteiros A e B fornecidos
pelos usuário, ambos com tamanho fixo de N ele-
mentos (N indicado via #define). Faça um pro-
grama em C++ que imprima os elementos comuns
de A e B que sejam múltiplos de um número X
maior que 0 (zero), também fornecido pelo usuá-
rio. Considere que não há elementos repetidos em
ambos vetores e que eles não estão ordenados. Não
há uma ordem especificada de impressão dos nú-
meros.

Qualquer número é um múltiplo de si mesmo (n x
1 = n), qualquer número é um múltiplo de 1 (1 x n
= n). Zero é um múltiplo de qualquer número (0 x
n = 0).

Exemplo de execução (com N=10):
Digite valor de x: 5
Digite vetor A:
2 13 4 -5 1 8 0 10 15 -19
Digite vetor B:
3 2 -5 -7 8 9 15 20 0 16
Elementos comuns multiplos de 5:
-5 0 15

Outro exemplo de execução (com N=10):
Digite valor de x: 0
Valor para x invalido.
 */
#include <iostream>
using namespace std;

#define N 10
#define ACHOU 1
#define NAO_ACHOU 0

int busca(int val, int v[], int tam);
void leVetor(int v[], int tam);

int main()
{
  int A[N], B[N], x, i;

  cout << "Digite valor de x: ";
  cin >> x;
  if (x <= 0)
  {
    cout << "Valor para x invalido.\n";
    return 0;
  }
  cout << "Digite vetor A:\n";
  leVetor(A, N);
  cout << "Digite vetor B:\n";
  leVetor(B, N);
  cout << "Elementos comuns multiplos de " << x << ":\n";

  for (i = 0; i < N; i++)
  {
    if (A[i] % x == 0)
      if (busca(A[i], B, N) == ACHOU)
        cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}

void leVetor(int v[], int tam)
{
  int i;

  for (i = 0; i < tam; i++)
    cin >> v[i];
  return;
}

int busca(int val, int v[], int tam)
{
  int i;

  for (i = 0; i < tam; i++)
    if (v[i] == val)
      return ACHOU;
  return NAO_ACHOU;
}
