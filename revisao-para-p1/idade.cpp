#include <iostream>

using namespace std;

int main()
{

    int diaNasc, mesNasc, anoNasc, diaIdade, mesIdade, anoIdade, idade;

    diaIdade = 15;
    mesIdade = 4;
    anoIdade = 2021;

    cout << "Entre com dia mes e ano de nascimento: " << endl;

    cin >> diaNasc >> mesNasc >> anoNasc;

    bool estaDeAniversario = diaIdade == diaNasc && mesIdade == mesNasc;

    if ((mesNasc > mesIdade) || (mesNasc == mesIdade && diaNasc > diaIdade) || estaDeAniversario)
    {
        if (estaDeAniversario)
        {
            cout << "Feliz aniversário!!" << endl;
        }
        idade = anoIdade - anoNasc;
    }
    else
    {
        idade = anoIdade - anoNasc - 1;
    }

    cout << "Sua idade do dia " << diaIdade << "/" << mesIdade << "/" << anoIdade << " é " << idade << " anos" << endl;

    return 0;
}