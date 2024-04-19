/*Questão 1 (50 pontos)

Considere que em uma determinada cidade todos
os parques tem o formato de um retângulo. Escreva
um programa em C++ que determine a área
do maior parque da cidade. A entrada para o pro-
grama é composta pelo número de parques (N ), se-
guido da localização de cada parque. A localização
é dada por 4 números (x1, y1, x2, y2), que correspondem
às coordenadas do canto superior esquerdo
e canto inferior direito do retângulo.

Exemplo de execução:
Quantidade de parques: 3
10.0 60.0 40.0 40.0
20.0 20.0 60.0 0
50.0 50.0 70.0 30.0
Area do maior parque: 800 m2*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << "Entre com a quantidade de Parques: ";

    int quantidadeDeParques;
    cin >> quantidadeDeParques;

    cout << endl;

    float areaDoMaiorParque = 0;

    float x1, y1, x2, y2, deltaX, deltaY, areaDoParque;

    int contador = quantidadeDeParques;

    while (contador != 0)
    {
        cout << "Entre com as coordenadas dos pontos do parque " << contador << endl;

        /*Não vou realizar tratamentos na estrada dos dados
        pois não foi requisitado no enunciado e vou assumir
        que o usuário irá entrar com valores válidos*/
        cin >> x1 >> y1 >> x2 >> y2;

        /*
        fabs(float i) calcula o módulo(valor absoluto) de
        um número float.

        Como estamos trabalhando com distâncias fazer
        módulo de (x1 - x2) retorna o tamanho do lado do
        retângulo
        */

        deltaX = fabs(x1 - x2); /*Variação do X*/

        deltaY = fabs(y1 - y2); /*Variação do Y*/

        areaDoParque = deltaX * deltaY; /* Lado x Lado do retângulo*/

        /*
        areaDoMaiorParque inicia com zero,
        logo na primeira execução qualquer área será maior,
        nas próximas vai checar se o a área do novo retângulo é maior,
        se for vai atualizar o valor da variável.
        */
        if (areaDoParque > areaDoMaiorParque)
        {
            areaDoMaiorParque = areaDoParque;
        }

        contador--; /* Isso é semelhante a contador = contador - 1*/
    }

    cout << "Área do maior parque: " << areaDoMaiorParque << " m2" << endl;

    return 0;
}

/* by André C. Pozzan*/