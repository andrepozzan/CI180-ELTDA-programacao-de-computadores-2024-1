# CI180-ELTDA: Programação de Computadores Primeiro Semestre de 2024

<h3 align="center">
Menu:<br>
| <a href="#p1">Prova 1</a>
| <a href="#exercicios">Exercícios</a>
|
</h3>

---

Estes são os arquivos utilizados por mim para cursar a disciplina de programação de computadores para o curso de Engenharia elétrica na UFPR

A disciplina contém duas provas e um exame final

As resoluções dos exercícios estão nas pastas das respectivas provas

Mais informações sobre a disciplina estão disponíveis em:  

https://www.inf.ufpr.br/ci208/

https://www.inf.ufpr.br/carmem/ci208/



<br><br><br>


---


<h1 align="center" id="p1">Prova 1</h1>
Contém as questões e exemplos de soluções da primeira prova da disciplina

#### Questão 1

Vamos chamar de crescente um número natural $n = d_1 d_2 ... d_k$ cujos dígitos $d_i$ estão em ordem crescente, isto é, tal que $d_1 < d_2 < ... < d_k$. Faça um programa em C++ que leia um número inteiro e positivo $n$ de 3 dígitos e verifique se $n$ é crescente. Seu programa deve também verificar se $n$ possui exatamente 3 dígitos e imprimir mensagens adequadas em cada caso.

##### Exemplos de execuções:

```shell
    Entre com um inteiro positivo:
    3416
    valor inválido.
```

```shell
    Entre com um inteiro positivo:
    152
    152 não é crescente.
```

```shell
    Entre com um inteiro positivo:
    378
    378 é crescente.
```

Resolução disponível no arquivo `resolucao-p1/questao1.cpp`

---

#### Questão 2

Faça um programa em C++ que peça ao usuário um par de coordenadas cartesianas $(x,y)$. Após esta entrada o programa deve obter do usuário uma sequência de pares de coordenadas, mostrando na tela a distância entre cada par e o par inicial de coordenadas.  
O programa deve terminar quando o usuário informar a coordenada $(0,0)$.  
**DICA:** A distância entre dois pontos $(x_1,y_1)$ e $(x_2,y_2)$ é dada por: $$D=\sqrt{(x_1-x_2)² + (y_1-y_2)²}$$

##### Exemplos de execuções:

```shell
    Coordenadas inicias: 0 0
    Coordenadas: 2 3
    Distância: 3.60555

    Coordenadas: 5 4
    Distância: 6.40312

    Coordenadas: 11 20
    Distância: 22.8254

    Coordenadas: 0 4
    Distância: 4

    Coordenadas: 0 0
```

Resolução disponível no arquivo `resolucao-p1/questao2.cpp`



<br><br><br>

--- 

<h1 align="center" id="exercicios">Exercícios</h1>
Contém os exercícios realizados para revisar os conceitos das aulas

#### Descrição dos arquivos:

##### `exercicios/vetores.cpp`

- Programa para manipulação de vetores como: soma, produto escalar, produto vetorial, utilizado como auxilio na resolução de exercícios de geometria analítica.

##### `exercicios/ordena.cpp`
- Escreva um programa que leia uma sequencia de triplas. O programa deve escrever as triplas ordenadas. A sequencia termina quando forem digitados os valores 0 0 0. Para isso, crie uma função nome ordena que recebe 3 números inteiros A, B e C, e ordena os valores de forma que A passe a ter o menor valor e C o maior valor. Use a função troca() definida na vídeo-aula.

##### `exercicios/escalar.cpp`
- Faça um programa que preencha dois vetores A e B de N posições com números reais (N definido via #define) e em seguida calcule e exiba na tela o produto escalar entre os dois vetores. O produto escalar entre dois vetores $(x, y)$ é dado por:
$x0 y0 + x1 y1 + x2 y2 + x3 y3 + x4 y4 + x5 y5 + · · ·$

##### `exercicios/aula-18-pares.cpp`
- Escrever um programa que leia uma sequência de N valores inteiros (N definido via #define).
Em seguida o programa deve escrever todos os valores pares e os elementos que formam sequencias metade-valor
ou seja, valores consecutivos (n1,n2), onde n2 é o dobro de n1.
    <br><br>Ex: N=6
    5 3 6 12 7 5  
    Pares:  
    6 12  
    Metade-valor:  
    3 6  
    6 12

##### `exercicios/jogo-da-velha.cpp`
- Implementação do jogo da velha com a adição de conseguir jogar com tabuleiros maiores e com mais jogadores, para alterar o tamanho do tabuleiro modifique o valor da constante `TAMANHO_DO_TABULEIRO`
---

*by: André Corso Pozzan*