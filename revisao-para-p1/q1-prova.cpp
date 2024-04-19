/* Questao 1 - prova exemplo:
Um número inteiro n é dito ser especial se: (i) a
sua raiz quadrada (RAIZ N ) é igual a soma de suas
dezenas (Ex.: se n = 2025 as dezenas de n são 20 e
25); e (ii) se a soma dos dígitos da parte inteira de
RAIZ N é igual a soma dos dígitos de n.
Faça um programa em C++ que seja capaz de ler
um número natural n de 4 dígitos e de verificar se a
sua sequência de dígitos torna n um número espe-
cial.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, raizN, primDez, segDez, uni, dez, cent, mil, dezRaiz, uniRaiz;
  float raizNFloat;

  cout << "Digite um numero: ";
  cin >> n;
  if( n < 1000 || n > 9999 ){              
    cout << "Numero nao tem 4 digitos\n";
    return 0;
  }
  raizNFloat= sqrt( n );
  raizN= raizNFloat;
  if( raizNFloat - raizN != 0 ){
    cout << n << " nao eh especial\n";
    return 0;
  }
  
  primDez= n / 100;
  segDez= n % 100;
  if( raizN != primDez+segDez ){
    cout << n << " nao eh especial\n";
    return 0;
  }
  uni= segDez%10;
  dez= segDez/10;
  cent= primDez%10;
  mil= primDez/10;
  dezRaiz= raizN/10;
  uniRaiz= raizN%10;
  if( dezRaiz+uniRaiz == mil+cent+dez+uni )
    cout << n << " eh especial\n";
  else
    cout << n << " nao eh especial\n";
  return 0;
}
