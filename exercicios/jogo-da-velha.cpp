/*Em desenvolvimento, pode apresentar erros*/
#include <iostream>

using namespace std;

/*Para tabuleiros maiores que 14, atualizar os caracteres dos jogadores*/
#define TAMANHO_DO_TABULEIRO 4

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

    int quantidadeDeJogadores = TAMANHO_DO_TABULEIRO - 1;
    char jogadores[quantidadeDeJogadores] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

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

    cout << "     ";
    for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
    {
        cout << "[" << j << "] ";
    }

    cout << endl;
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++)
    {
        cout << "[" << i << "]  ";

        for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
        {
            cout << " " << tabuleiro[i][j];

            if (j + 1 < TAMANHO_DO_TABULEIRO)
                cout << " |";
        }
        cout << endl;

        if (i + 1 < TAMANHO_DO_TABULEIRO)
        {
            cout << "     ";
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

    cout << endl;
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

bool verificaSeAlguemGanhou(char tabuleiro[][TAMANHO_DO_TABULEIRO])
{

    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_DO_TABULEIRO; j++)
        {

            if (tabuleiro[i][j] != ' ' &&
                ((tabuleiro[i][j] == tabuleiro[i + 1][j + 1] && tabuleiro[i][j] == tabuleiro[i + 2][j + 2]) ||
                 (tabuleiro[i][j] == tabuleiro[i + 1][j - 1] && tabuleiro[i][j] == tabuleiro[i + 2][j - 2]) ||
                 (tabuleiro[i][j] == tabuleiro[i][j + 1] && tabuleiro[i][j] == tabuleiro[i][j - 1]) ||
                 (tabuleiro[i][j] == tabuleiro[i + 1][j] && tabuleiro[i][j] == tabuleiro[i - 1][j])))
            {
                cout << "O jogardor " << tabuleiro[i][j] << " venceu!" << endl;

                return true;
            }
        }
    }

    return false;
}
