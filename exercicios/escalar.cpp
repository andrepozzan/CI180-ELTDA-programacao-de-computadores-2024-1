/* escalar.cpp
Faça um programa que preencha dois vetores A e B de N posições com números reais (N definido via #define) e em seguida calcule e exiba na tela o produto escalar entre os dois vetores. O produto escalar entre dois vetores (x, y) é dado por:
  x0 y0 + x1 y1 + x2 y2 + x3 y3 + x4 y4 + x5 y5 + · · ·
*/
#include <iostream>
using namespace std;

#define N 3

int main(){
  float prodEscalar, A[N], B[N];
  int i;

  cout << "Entre com " << N << " elementos do primeiro vetor:\n";
  for( i=0; i<N; i++ )
    cin >> A[i];
  cout << "Entre com " << N << " elementos do segundo vetor:\n";
  for( i=0; i<N; i++ )
    cin >> B[i];
  prodEscalar= 0;
  for( i=0; i<N; i++ )
    prodEscalar= prodEscalar + A[i]*B[i];
  cout << "Produto Escalar = " << prodEscalar << endl;
  return 0;
}


