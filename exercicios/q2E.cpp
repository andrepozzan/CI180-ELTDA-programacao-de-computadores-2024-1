/* cola.cpp
Seu professor está muito preocupado com possíveis
colas nesta prova, e pediu para você escrever um
programa que o ajude a identificar quem está co-
lando.

Escreva em C++ uma função fiscalCola()
que recebe uma matriz de caracteres com N linhas
e M colunas (N e M indicados via #define), re-
presentando a sala de aula. Para cada posição da
matriz, o caracter ’i’ (um I minúsculo) indica um
aluno olhando para sua própria prova, o caracter ’<’
(sinal de menor) indica um aluno olhando para a
esquerda, o caracter ’>’ (sinal de maior) indica um
aluno olhando para a direita, e o caracter ’.’ (ponto)
representa uma posição sem aluno. Um aluno está
colando se ele está olhando para a esquerda e há um
aluno imediatamente a sua esquerda, ou se ele está
olhando para a direita e há um aluno imediatamente
a sua direita.

A função fiscalCola() deve alterar toda posi-
ção da matriz na qual há um aluno colando para ’x’
(um X minusculo) e, além disso, retornar o número
total de alunos colando.
Escreva o programa principal que lê a matriz do
usuário e imprime a matriz resultante e o número
de alunos colando, resultados estes obtidos pelo uso
da função fiscalCola().
OBS.: Para a leitura de uma matriz, considere que
já existe a função void ler_matriz (char
mat[N][M]). Sua solução deve apenas CHA-
MAR esta função.

Exemplo de execução (com N=4 e M=5):
Informe matriz:
. > i . >
> > . . .
i i . > <
. < > . >
Resultados:
. x i . >
x > . . .
i i . x x
. < > . >
Há 4 aluno(s) colando.
 */

#include <iostream>
using namespace std;

#define N 4
#define M 5

void ler_matriz(char mat[N][M]);
void escreve_matriz(char m[N][M]);
int fiscal_cola(char m[N][M]);
int ocupado(char c);

int main()
{
  char m[N][M];
  int qtdCola;

  cout << "Informe matriz:\n";
  ler_matriz(m);
  qtdCola = fiscal_cola(m);
  cout << "Resultados:\n";
  escreve_matriz(m);
  cout << "Ha " << qtdCola << " aluno(s) colando.\n";
  return 0;
}

int fiscal_cola(char m[N][M])
{
  int l, c, cont;

  if (M <= 1)
    return 0;
  cont = 0;
  /* primeira coluna */
  for (l = 0; l < N; l++)
    if (m[l][0] == '>' && ocupado(m[l][1]))
    {
      cont++;
      m[l][0] = 'x';
    }

  /* ultima coluna */
  for (l = 0; l < N; l++)
    if (m[l][M - 1] == '<' && ocupado(m[l][M - 2]))
    {
      cont++;
      m[l][M - 1] = 'x';
    }

  /* restante da matriz */
  for (l = 0; l < N; l++)
    for (c = 1; c < M - 1; c++)
      if (m[l][c] == '>' && ocupado(m[l][c + 1]) ||
          m[l][c] == '<' && ocupado(m[l][c - 1]))
      {
        cont++;
        m[l][c] = 'x';
      }
  return cont;
}

int ocupado(char c)
{
  if (c == '.')
    return 0;
  return 1;
}

void ler_matriz(char mat[N][M])
{
  int l, c;

  for (l = 0; l < N; l++)
    for (c = 0; c < M; c++)
      cin >> mat[l][c];
  return;
}

void escreve_matriz(char m[N][M])
{
  int l, c;

  for (l = 0; l < N; l++)
  {
    for (c = 0; c < M; c++)
      cout << m[l][c] << ' ';
    cout << endl;
  }
}
