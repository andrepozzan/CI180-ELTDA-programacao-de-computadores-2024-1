/* (ordena.cpp) 
Escreva um programa que leia uma sequencia de triplas.  O programa deve escrever as triplas ordenadas.  A sequencia termina quando forem digitados os valores 0 0 0.  Para isso, crie uma função nome ordena que recebe 3 números inteiros A, B e C, e ordena os valores de forma que A passe a ter o menor valor e C o maior valor. Use a função troca() definida na vídeo-aula. 

Ex:
4 12 1
1 4 12
9 34 12
9 12 34
0 0 0
*/
#include <iostream>
using namespace std;

void ordena3( float &n1, float &n2, float &n3 );
void troca( float &, float & );

int main(){
  float n1, n2, n3;

  cin >> n1 >> n2 >> n3;
  while( n1!=0 || n2!=0 || n3!=0 ){
    ordena3( n1, n2, n3 );
    cout << n1 << " " << n2 << " " << n3 << endl;
    cin >> n1 >> n2 >> n3;
  }
  return 0;
}


/* ----------------------------------
ordena3: coloca os parâmetros em ordem crescente
Entrada: float n1, n2, n3
Saida: conteúdo dos parâmetros trocados para que n1<=n2<=n3
*/
void ordena3( float &n1, float &n2, float &n3 ){
  if( n1 > n2 )
    troca( n1, n2 );
  if( n2 > n3 )
    troca( n2, n3 );
  if( n1 > n2 )
    troca( n1, n2 );
}  

/* ----------------------------------
troca: troca o conteúdo dos parâmetros n1 e n2
Entrada: inteiros n1 e n2
Saida: valores de n1 e n2 trocados 
*/
void troca( float &a, float &b ){
    float aux;
    
    aux= a;
    a= b;
    b= aux;
    return;
}

