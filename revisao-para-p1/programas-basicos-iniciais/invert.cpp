#include <iostream>

using namespace std;

int main()
{
    /*
    int array[6];
    int n = 123456;
    for (int i = 5; i >= 0; i--)
    {
        array[i] = n % 10;
        n /= 10;
    }

    cout << array[0] <<endl;*/

    int num, numInv, cent, dez, uni;

    cout << "Entre com um inteiro de 3 digitos: ";
    cin >> num;

    cent = num / 100;
    dez = num / 10 % 10;
    uni = num % 10;
    numInv = uni * 100 + dez * 10 + cent;

    cout << "Número invertido = " << numInv << endl;

    /*Retorno o endereço da memória em que variável esta alocada*/
    cout << &numInv << endl;
}