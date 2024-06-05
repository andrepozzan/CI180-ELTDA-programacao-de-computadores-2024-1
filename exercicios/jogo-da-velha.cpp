/* Em desenvolvimento, o programa ainda apresenta erros!*/

#include <iostream>

using namespace std;

#define TAMANHO_DO_TABULEIRO 3

void zeraOTabuleiro(char tabuleiro[][TAMANHO_DO_TABULEIRO]);
void exibeTabuleiro(char tabuleiro[][TAMANHO_DO_TABULEIRO]);
void pedeAJogada(char tabuleiro[][TAMANHO_DO_TABULEIRO], char jogadores[], int quantidadeDeJogadores, int &vezDeJogar);
void insereAJogada(char tabuleiro[][TAMANHO_DO_TABULEIRO], int coordX, int coordY, char jogador, int &vezDeJogar);
bool verificaSeAlguemGanhou(char tabuleiro[][TAMANHO_DO_TABULEIRO]);

int main()
{
    char tabuleiro[TAMANHO_DO_TABULEIRO][TAMANHO_DO_TABULEIRO];

    zeraOTabuleiro(tabuleiro);

    cout << "Jogo da Velha: " << TAMANHO_DO_TABULEIRO << "x" << TAMANHO_DO_TABULEIRO << endl;
    exibeTabuleiro(tabuleiro);

    int quantidadeDeJogadores = 2;
    char jogadores[quantidadeDeJogadores] = {'A', 'B'};

    int vezDeJogar = 0;

    while (!verificaSeAlguemGanhou(tabuleiro))
    {
        pedeAJogada(tabuleiro, jogadores, quantidadeDeJogadores, vezDeJogar);
    }

    return 0;
}

void zeraOTabuleiro(char tabuleiro[][TAMANHO_DO_TABULEIRO])
{
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibeTabuleiro(char tabuleiro[][TAMANHO_DO_TABULEIRO])
{
    cout << endl;
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++)
    {

        for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
        {
            cout << " " << tabuleiro[i][j];

            if (j + 1 < TAMANHO_DO_TABULEIRO)
                cout << " |";
        }
        cout << endl;

        if (i + 1 < TAMANHO_DO_TABULEIRO)
        {

            for (int contador = 0; contador < TAMANHO_DO_TABULEIRO; contador++)
            {
                cout << "----";
            }

            cout << endl;
        }
    }
    cout << endl;
}

void pedeAJogada(char tabuleiro[][TAMANHO_DO_TABULEIRO], char jogadores[], int quantidadeDeJogadores, int &vezDeJogar)
{
    if (vezDeJogar == quantidadeDeJogadores)
    {
        vezDeJogar = 0;
    }

    char jogador = jogadores[vezDeJogar];

    int x, y;

    cout
        << "Insira a coordenada da jogada do Jogador " << jogador << ": " << endl;

    cin >> x >> y;

    if (x < TAMANHO_DO_TABULEIRO && x >= 0 && y < TAMANHO_DO_TABULEIRO && y >= 0)
    {
        insereAJogada(tabuleiro, x, y, jogador, vezDeJogar);

        exibeTabuleiro(tabuleiro);
    }
    else
    {
        cout << "Coordenada inválida" << endl;
        return;
    }
}

void insereAJogada(char tabuleiro[][TAMANHO_DO_TABULEIRO], int coordX, int coordY, char jogador, int &vezDeJogar)
{
    if (tabuleiro[coordX][coordY] == ' ')
    {
        tabuleiro[coordX][coordY] = jogador;
        vezDeJogar++;
    }
    else
    {
        cout << "Coordenada já ocupada!" << endl;
        return;
    }
}

void verificaAsDiagonais(char tabuleiro[][TAMANHO_DO_TABULEIRO], int x, int y)
{

    int xPositiva = x;
    int yPositiva = y;
    cout << "Diagonal positiva: ";

    int pontuacaoPositiva = 1;
    while (xPositiva < TAMANHO_DO_TABULEIRO && yPositiva < TAMANHO_DO_TABULEIRO)

    {
        cout << tabuleiro[xPositiva][yPositiva];
        if (tabuleiro[xPositiva][yPositiva] == tabuleiro[xPositiva + 1][yPositiva + 1] && tabuleiro[xPositiva][yPositiva] != ' ')
            pontuacaoPositiva++;

        xPositiva++;
        yPositiva++;
    }
    cout << endl
         << "Pontuação: " << pontuacaoPositiva << " ";

    int xNegativa = x;
    int yNegativa = y;

    cout << endl;

    int pontuacaoNegativa = 1;

    cout << "Diagonal negativa: ";
    while (xNegativa < TAMANHO_DO_TABULEIRO && yNegativa >= 0)
    {
        cout << tabuleiro[xNegativa][yNegativa];

        if (tabuleiro[xNegativa][yNegativa] == tabuleiro[xNegativa + 1][yNegativa - 1] && tabuleiro[xNegativa][yNegativa] != ' ')
            pontuacaoNegativa++;

        xNegativa++;
        yNegativa--;
    }

    cout << endl
         << "Pontuação: " << pontuacaoNegativa << " ";

    cout << endl;

    if (pontuacaoPositiva == 3 || pontuacaoNegativa > 3)
    {
        cout << "Alguém ganhou!" << endl;
    }
}

bool verificaSeAlguemGanhou(char tabuleiro[][TAMANHO_DO_TABULEIRO])
{

    /*Linhas*/
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
        {
            verificaAsDiagonais(tabuleiro, i, j);

            if (tabuleiro[i][j] == tabuleiro[i][j + 1] && tabuleiro[i][j] == tabuleiro[i][j - 1] && tabuleiro[i][j] != ' ')
            {
                cout << "O jogardor " << tabuleiro[i][j] << " venceu!" << endl;
                return true;
            }

            if (tabuleiro[i][j] == tabuleiro[i + 1][j] && tabuleiro[i][j] == tabuleiro[i - 1][j] && tabuleiro[i][j] != ' ')
            {
                cout << "O jogardor " << tabuleiro[i][j] << " venceu!" << endl;
                return true;
            }
        }
    }
}
