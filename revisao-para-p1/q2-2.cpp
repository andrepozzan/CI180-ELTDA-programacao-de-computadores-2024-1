/* Q.2 
Escreva um programa C++ para gerar estatisticas de um treino com drones.  Seu programa deve ler a velocidade media em km/h de um numero indeterminado de voltas, até que o valor informado seja -1.  Ao final seu programa deve informar o valor total de voltas, a volta mais rapida e a menor velocidade seguida de sua respectiva volta, conforme exemplos de execução abaixo.

Digite a velocidade para cada volta:
40 22 15 78 35.5 50 70.3 -1
Total de voltas: 7
Volta mais rapida: 4
Menor velocidade: 15 km/h (volta 3)
*/
#include <iostream>
using namespace std;

int main(){
  int numVoltas;
  float veloc, maiorVeloc, maiorNum, menorVeloc, menorNum;
  
  cout << "Digite a velocidade para cada volta:\n";
  cin >> veloc;
  numVoltas= 0;
  maiorVeloc= veloc;
  maiorNum = 1;
  menorVeloc = veloc;
  menorNum = 1;
  while( veloc != -1 ){
    numVoltas= numVoltas + 1;
    if( veloc < menorVeloc ){
      menorVeloc= veloc;
      menorNum= numVoltas;
    }
    if( veloc > maiorVeloc ){
      maiorVeloc= veloc;
      maiorNum= numVoltas;
    }
    cin >> veloc;
  }
  if( numVoltas == 0 )
    cout << "Nao tem nenhuma volta\n";
  else{
    cout << "Total de voltas: " << numVoltas << endl;
    cout << "Volta mais rapida: " << maiorNum << endl;
    cout << "Menor velocidade: " << menorVeloc << " km/h (volta " << menorNum << ")\n";
  }
  return 0;
}

