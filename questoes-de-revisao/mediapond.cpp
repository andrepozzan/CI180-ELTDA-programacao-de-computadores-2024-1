#include <iostream>
using namespace std;

int main()
{
    float p1, p2, p3, media;

    cout << "Entre com as notas das 3 provas";

    cin >> p1 >> p2 >> p3;

    media = (p1 * 2 + p2 * 3 + p3 * 5) / 10;

    cout << "A média ponderada é " << media << endl;


    /*Utilizando notação científica*/
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    /* Utilizando tabela ascii para representar caracteres*/
    char a = 65, b = 66, c = 67;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}