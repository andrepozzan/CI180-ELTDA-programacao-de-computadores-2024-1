<h1 id="top"> CI180-ELTDA: Programação de Computadores Primeiro Semestre de 2024</h1>

Meus contatos:

<a href="https://www.instagram.com/andrepozzan.eng/" target="_blank"><img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" target="_blank"></a>
<a href="https://www.linkedin.com/in/andrepozzan/" target="_blank"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a>

<h3 align="center" >
Menu:<br>
| <a href="#p1">Prova 1</a>
| <a href="#p2">Prova 2</a>
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

<h1 align="center" id="p2">Prova 2</h1>
Contém as questões e exemplos de soluções da segunda prova da disciplina

#### Questão 1

Faça um programa em C++ que solicite ao usuário a entrada de um vetor com 10 números reais. Após a entrada desse vetor, o programa deve obter do usuário uma sequência de números reais, que será processada para identificar o maior e o segundo maior número dessa sequência.

Em seguida, o programa deve alterar o vetor da seguinte maneira:

- Substitua cada elemento do vetor por `1` se ele for maior ou igual ao maior número da sequência.
- Substitua cada elemento do vetor por `2` se ele for menor que o maior número e maior ou igual ao segundo maior número da sequência.
- Substitua cada elemento do vetor por `0` se ele for menor que o segundo maior número da sequência.

Por fim, o programa deve exibir o vetor resultante após as alterações. O programa deve terminar após a exibição do vetor.

**DICA:** A sequência de números reais informada pelo usuário deve ser finalizada com o número `0`.

##### Exemplo de Execução:

```shell
    Entre com o vetor de 10 números:
    5.4 3.2 8.1 6.5 9.3 2.1 7.4 3.8 4.5 6.2

    Entre com uma sequência terminada com zero:
    10 5 7 2 0

    Maior na sequência = 10
    Segundo maior na sequência = 7

    Vetor resultante:
    0 0 2 0 2 0 2 0 0 0
```

Resolução disponível no arquivo `resolucao-p2/questao1.cpp`

#### Questão 2

Faça um programa em C++ que solicite ao usuário a entrada de uma matriz de dimensões 5x6 de números reais. O programa deve, então, calcular uma nova matriz resultante em que:

- As bordas da matriz resultante serão preenchidas com zeros.
- Os elementos internos (não pertencentes à borda) da matriz resultante serão calculados como a média aritmética dos quatro elementos adjacentes na matriz original (esquerda, direita, acima, abaixo).

Por fim, o programa deve exibir a matriz resultante.

**DICA:** A média aritmética de quatro números \(a\), \(b\), \(c\) e \(d\) é dada por:
$$\text{Média} = \frac{a + b + c + d}{4}$$

##### Exemplo de Execução:

```shell
    Entre com uma matriz 5x6:
    1  2  3  4  5  6
    7  8  9  10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30

    Matriz resultante:
    0  0  0  0  0  0
    0  8  9  10 11 0
    0  14 15 16 17 0
    0  20 21 22 23 0
    0  0  0  0  0  0
```

Resolução disponível no arquivo `resolucao-p2/questao2.cpp`

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

##### `revisao-p2/maxcols`

- Faça um programa que leia do usuário uma matriz $N × M$ ($N$ e $M$ definidos via
  diretiva `#define` e preencha um vetor de $M$ elementos, tal que a posição $i$ do vetor contenha o maior valor da coluna $i$ da matriz. Ao final, o programa deve imprimir o vetor

##### `revisao-p2/flipvert`

- Faça um programa que leia do usuário uma matriz $N × M$ ($N$ e $M$ definidos via diretiva
  `#define`), e altere a matriz lida invertendo a ordem dos elementos de cada coluna, imprimindo a
  matriz resultante na tela. A inversão deve ser feita na própria matriz lida, sem auxílio de matrizes
  auxiliares.

##### `revisao-p2/segmento`

- Crie uma função chamada `ehSegmento` que recebe como parâmetros os seguintes
  itens: <br>um vetor de inteiros $a$, um vetor de inteiros $b$, um valor inteiro $n$ que representa o tamanho do
  vetor $a$, um valor inteiro $m$ que representa o tamanho do vetor $b$, e um inteiro $p$ que representa uma
  1
  posição do vetor a. <br>A função deve retornar $1$ caso o vetor $b$ seja um segmento do vetor $a$ iniciado na
  posição $p$ de $a$, ou retornar $0$ caso contrário.<br> Por exemplo, considere $p = 2$, e o vetor $a$ (com $n = 6$)<br>
  6 5 4 3 8 9<br>
  Se o vetor b (com m = 3) for<br>
  4 3 8<br>
  o retorno da função deve ser 1.<br>
  Por outro lado, se o vetor b (com m = 3) for<br>
  4 8 3<br>
  o retorno da função deve ser 0.

##### `revisao-p2/matpermuta`

- Dizemos que uma matriz inteira $A(n × n)$ é uma matriz de permutação se em cada
  linha e em cada coluna houver $n − 1$ elementos nulos e um único elemento igual a $1$. Dada uma
  matriz inteira $A(n × n)$ verificar se $A$ é de permutação. Exemplos:
  <br>

  0 1 0 0<br>
  0 0 1 0<br>
  1 0 0 0<br>
  0 0 0 1<br>
  é de permutação, enquanto que:
  0 1 0 0<br>
  0 0 1 0<br>
  1 0 0 0<br>
  0 0 0 2<br>
  não é.

##### `revisao-p2/lincolunas`

- Dada uma matriz $A(n × m)$ imprimir o número de linhas e o número de colunas
  nulas da matriz. Exemplo:<br>

  0 0 0 0<br>
  1 0 2 2<br>
  4 0 5 6<br>
  0 0 0 0<br>
  tem duas linhas nulas e uma coluna nulas.

##### `revisao-p2/quadradomagico`

- Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma
  dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das
  diagonais principal e secundária são todos iguais. Exemplo:<br>

  8 0 7<br>
  4 5 6<br>
  3 10 2<br>

  é um quadrado mágico pois

  $8 + 0 + 7 = 4 + 5 + 6 = 3 + 10 + 2 = 8 + 4 + 3 = 0 + 5 + 10 = 7 + 6 + 2 = 8 + 5 + 2 = 3 + 5 + 7$
  <br>

  Dada uma matriz quadrada $A(n × n)$, verificar se A é um quadrado mágico

##### `revisao-p2/custotransp`

- Os elementos $M [i, j]$ de uma matriz $M (n×n)$ representam os custos de transporte
  da cidade $i$ para a cidade $j$. Dados $n$ itinerários, cada um com $k$ cidades, calcular o custo total para
  cada itinerário. Exemplo:

  4 1 2 3<br>
  5 2 1 400<br>
  2 1 3 8<br>
  7 1 2 5<br>

  O custo do itinerário 1 4 2 4 4 3 2 1 é:
  $M [1, 4]+M [4, 2]+M [2, 4]+M [4, 4]+M [4, 3]+M [3, 2]+M [2, 1] = 3+1+400+5+2+1+5 =
417$.

##### `revisao-p2/itinerario`

- Considere $N$ cidades numeradas de $1$ a $n$ que estão interligadas por uma série de es-
  tradas de mão única.<br> As ligações entre as cidades são representadas pelos elementos de uma matriz
  quadrada $L(n × n)$ cujos elementos $L_{ij}$ assumem o valor $1$ ou $0$ conforme exista ou não estrada
  direta que saia da cidade $i$ e chegue na cidade $j$.<br> Assim, os elementos da i-ésima linha indicam as
  estradas que saem da cidade $i$ e os elementos da j-ésima coluna indicam as estradas que chegam à
  cidade $j$.
  Por convenção, $L_{ii} = 1$. A figura abaixo ilustra um exemplo para $n = 4$:<br><br>
  1 1 1 0<br>
  0 1 1 0<br>
  1 0 1 1<br>
  0 0 1 1<br><br>
  a) Dado k, determinar quantas estradas saem e quantas chegam à cidade k.<br>
  b) A qual das cidades chega o maior número de estradas?<br><br>
  c) Dado k, verificar se todas as ligações diretas entre a cidade k e outras são de mão dupla.<br><br>
  d) Relacionar as cidades que possuem saídas diretas para a cidade k<br><br>
  e) Relacionar, se existirem:<br>
  • As cidades isoladas, isto é, as que não têm ligação com nenhuma outra<br>
  • As cidades das quais não há saída, apesar de haver entrada<br>
  • As cidades das quais há saída sem haver entrada<br><br>
  f) Dada uma sequência de m inteiros cujos valores representam cidades e estão entre 1 e n, veri-
  ficar se é possível realizar o roteiro correspondente. No exemplo dado, o roteiro representado
  pela sequência 3 4 3 2 1 (m = 5) é impossível

---

<h4 align="center">
<a href="#top">Retornar ao topo</a>
</h4>

---

_by: André Corso Pozzan_
