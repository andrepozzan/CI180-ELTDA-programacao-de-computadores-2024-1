/*
Calcule a distância entre uma coordenada
inicial e as demais que o usuário irá digitar
pare quando ele entrar com a coordenada 0,0
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Coordenadas iniciais: ";
    int xInicial, yInicial;
    cin >> xInicial >> yInicial;

    cout << "Coordenadas: ";
    int xFinal, yFinal;
    cin >> xFinal >> yFinal;

    while (xFinal != 0 && yFinal != 0)
    {
        float distancia;

        distancia = sqrt(pow((xInicial - xFinal), 2) + pow((yInicial - yFinal), 2));

        cout << "Distância: " << distancia << endl;

        cout << "Coordenadas: ";
        cin >> xFinal >> yFinal;
    }

    return 0;
}