/* pares.cpp
Escrever um programa que leia uma sequência de N valores  inteiros (N definido via #define).
Em seguida o programa deve escrever todos os valores pares e os elementos que formam sequencias metade-valor
ou seja, valores consecutivos (n1,n2), onde n2 é o dobro de n1.

Ex: N=6
5 3 6 12 7 5
Pares:
6 12
Metade-valor:
3 6
6 12
*/

#include <iostream>
using namespace std;

#define N 6

int main()
{
  int v[N], i;

  cout << "Entre com " << N << " valores inteiros:\n";

  for (i = 0; i < N; i++)
    cin >> v[i];

  cout << "Pares:\n";

  for (i = 0; i < N; i++) /*Percorrendo o vetor*/
    if (v[i] % 2 == 0)    /*Se o resto da divisão por dois for zero significa que é par*/
      cout << v[i] << " ";

  cout << endl;

  cout << "Metade-Valor\n";

  for (i = 1; i < N; i++) /*Percorrendo o vetor começando na posição 1*/
    if (v[i] == 2 * v[i - 1])
      cout << v[i - 1] << " " << v[i] << endl;
  return 0;
}
