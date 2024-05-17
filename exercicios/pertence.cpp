/* pertence.cpp
Faça um programa que preencha um vetor A de no máximo MAX posições com números inteiros positivos (MAX definido via #define). O programa deve solicitar números até que seja digitado um valor negativo, que não deve ser colocado no vetor A, contabilizando quantos inteiros positivos foram colocados no vetor.
Em seguida o programa deve ler números do teclado e para cada número lido indicar ao usuário se ele está ou não no vetor A. Em caso afirmativo, a posição no vetor onde ele se encontra deve ser impresso. Nesse ponto, a digitação de um número negativo deve causar o término do programa.

Exemplo:
Entre com a sequencia de inteiros:
10 20 3 4 78 7 -1
Entre com o valor: 3
posicao 2
Entre com o valor: 78
posicao 4
Entre com o valor: 5
nao encontrado
Entre com o valor: -1
*/
#include <iostream>
using namespace std;

#define MAX 100

int main()
{
  int A[MAX + 1], tamA, i, valor; /* +1 para ter espaço para a sentinela*/

  cout << "Entre com a sequencia de inteiros:\n";
  i = 0;
  cin >> A[i];
  while (A[i] >= 0 && i < MAX - 1)
  {
    i = i + 1;
    cin >> A[i];
  }

  if (A[i] == -1)
    tamA = i;
  else
    tamA = MAX;

  cout << "Entre com o valor: ";
  cin >> valor;

  while (valor >= 0)
  {
    A[tamA] = valor;
    i = 0;
    while (A[i] != valor)
      i++;
    if (i < tamA)
      cout << "posicao " << i << endl;
    else
      cout << "nao encontrado\n";
    cout << "Entre com o valor: ";
    cin >> valor;
  }
  return 0;
}
