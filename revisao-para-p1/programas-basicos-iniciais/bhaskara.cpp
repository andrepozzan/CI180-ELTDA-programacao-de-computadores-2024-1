#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float delta, raizQuadradaDoDelta, primeiraRaiz, segundaRaiz;

    cout << "Entre com os valores de a,b e c: ";

    cin >> a >> b >> c;

    cout << endl;

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        cout << "Não possui raiz real " << endl;
        return 0;
    }

    cout << "O delta é: " << delta << endl;

    raizQuadradaDoDelta = sqrt(delta);

    primeiraRaiz = (-b - raizQuadradaDoDelta) / (2 * a);

    segundaRaiz = (-b + raizQuadradaDoDelta) / (2 * a);

    cout << "A função possui as raízes: " << primeiraRaiz << " e " << segundaRaiz << endl;

    return 0;
}