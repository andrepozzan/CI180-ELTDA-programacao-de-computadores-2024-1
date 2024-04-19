/* Questao 2 - prova exemplo
Bettina está montando uma poupança para a sua
aposentadoria e você deve fazer um programa em
C++ para auxiliá-la nesta tarefa. Seu programa
deve ler um valor real positivo, que é o aporte ini-
cial do investimento, e, em seguida, uma sequencia
de valores reais positivos que são os aportes men-
sais. Para cada mês deve-se calcular o valor total do
investimento, acrescendo ao valor do mês anterior
uma porcentagem de rendimento, mais o aporte do
mês corrente. A instituição financeira de Bettina
fornece duas opções de rendimentos: 0.39%, se o
aporte do mês corrente for menor que R$ 300,00;
ou 0.41% no caso contrário (uma bonificação para
aportes mensais mais altos). Por exemplo, se o va-
lor do investimento está em R$ 50000,00 e Bet-
tina efetua um aporte de R$ 450,00, o valor total
desse mês passa a ser R$ 50000,00 + (0.41% de
50000,00) + R$ 450,00 = R$ 50655,00. A sequên-
cia de aportes mensais termina com o valor -1, que
não deve ser considerado como um aporte válido.
A cada mês seu programa deve imprimir o valor to-
tal do investimento.
*/
#include <iostream>
using namespace std;

int main(){
  float valor, aporte;

  cout << "Primeiro aporte: ";
  cin >> valor;
  cout << "Aporte mensal: ";
  cin >> aporte;
  while( aporte != -1 ){
    if( aporte < 300 )
      valor= valor * 1.0039 + aporte;
    else
      valor= valor * 1.0041 + aporte;
    cout << "total = " << valor << endl;
    cout << "Aporte mensal: ";
    cin >> aporte;
  }
  cout << "total = " << valor << endl;
  return 0;
}
