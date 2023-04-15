<h1 align="center"> allen </h1>

---

#### As funções do tipo ` allen `, servem para realizar algumas funções aleatórias e específicas, comumente para vetores, basicamente são funções adicionais que achei interessantes de adicionar. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---













<br>

<h3 align="center"> int allen_GETDIGITS ( int VARIABLE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função retorna quantas casas existem no inteiro definido em VARIABLE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Salvando em quant a quantidade de casas
    int quant = allen_GETDIGITS (123456);
    
    // Printando a quantidade
    PR_INT (quant);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
6
```






















<br>

<h3 align="center"> void gotoxy ( int X , int Y ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função função semelhantemente a função de tipo props "PROP_MOVECURSOR" , só que essa não necessita de inicialização ("ENABLE PROPS"), pois funciona utilizando a biblioteca windows.h, onde quando chamada define a posição do cursor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Predefinição de texto
    echo ("Olha, um ser vivo!");
    echo ("Qual seria o nome dele: ");

    getch ();
    
    // Após a execução irá preencher na posição específicada
    gotoxy ( 24 , 1 );
    PR ("ROBERTO\n");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Olha, um ser vivo!
Qual seria o nome dele:
_ <- Getch aqui
```

- Depois da função: 

```txt
Olha, um ser vivo!
Qual seria o nome dele: ROBERTO
```





















<br>

<h3 align="center"> void allen_TESTCODEPAGE ( int CODE_PAGE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função função faz uma listagem de todos os ASCII CODES da página especificada por CODE_PAGE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Página Cirilico
    allen_TESTCODEPAGE ( CIRILICO );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Caractere 0 -> // esse é um caractere de ação por isso não é printado
Caractere 1 -> // esse é um caractere de ação por isso não é printado
Caractere 2 -> // esse é um caractere de ação por isso não é printado
Caractere 3 -> // esse é um caractere de ação por isso não é printado
[...] continua até 300
```






















<br>

<h3 align="center"> void allen_CLEARSTRING ( char * string ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função limpa o conteúdo de uma string já preenchida`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Antes de limpar
    char USERNAME [] = "allen walker";
    PR (USERNAME);

    PRL (1);

    // Depois de limpar
    allen_CLEARSTRING ( USERNAME );
    PR (USERNAME);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
allen walker
      <- aqui está vazio pq a string não possui nada para printar
```


















<br>

<h3 align="center"> int allen_HIGHERARRAYint ( int SIZE , int ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função retorna o maior valor presente em um vetor do tipo int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    int array [] = { 1 , 2 , 9 , 4 , 5 , 6 };

    // Pegando o maior valor desse array
    int higher = allen_HIGHERARRAYint ( 6 , array );

    PR_INT (higher);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
9
```

















<br>

<h3 align="center"> int allen_HIGHERBARRAYint ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função retorna o maior valor presente em uma matriz do tipo int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    int array [2] [3] = { { 1 , 2 , 3 } , { 9 , 5 , 7 } };

    // Salvando o maior valor da matriz
    int higher = allen_HIGHERBARRAYint ( 2 , 3 , array );

    PR_INT ( higher );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
9
```

























<br>

<h3 align="center"> int allen_LOWERARRAYint ( int SIZE , int ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função retorna o menor valor presente em um vetor do tipo int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    int array [] = { 9 , 3 , 2 , 1 , 8  , 5 , 3 };
    
    // Pegando o menor valor
    int lower = allen_LOWERARRAYint ( 7 , array );

    PR_INT ( lower );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1
```














<br>

<h3 align="center"> int allen_LOWERBARRAYint ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função retorna o menor valor presente em uma matriz do tipo int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    int b_array [2] [3] = { { 1 , 2 , 3 } , { 0 , 5 , 7 } };

    // Pegando o menor valor
    int lower = allen_LOWERBARRAYint ( 2 , 3 , b_array );

    PR_INT ( lower );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0
```




















<br>

<h3 align="center"> int allen_SUBSINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função substitui em um vetor valores que atendem aos requisitos do parametro CONDITION. Os parâmetros são os seguintes: SIZE define o tamanho do vetor, ARRAY define o vetor que será atualizado, CONDITION recebe um dos macros "OPERADORES" ( HT , LT , EQ , DF , HE , LE , PAR , IMPAR , MULTIPLO , NOTMULTIPLO , QUADRADO_X_EQ_Y , QUADRADO_X_DF_Y , INVERSO , CRESCENTE , DECRESCENTE ) inclusive as alterações feitas no vetor são contabilizadas ou seja você pode adicionar uma variável que irá retornar quantas substituições foram feitas, COMPARATOR é o valor que será usado para essas comparações e por fim TOKEN nada mais é do que pelo o que você irá mudar os valores que atenderem os requisitos`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    int array [] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };

    // Printando o vetor antes da substituição
    PR ("Antes: ");
    PR_intVETOR ( 10 , array );

    PRL (2);
    allen_SUBSINTARRAY ( 10 , array , PAR , 0 , 0 );

    // Printando o vetor após a substituição
    PR ("Depois: ");
    PR_intVETOR ( 10 , array );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes: 0 1 2 3 4 5 6 7 8 9 

Depois: 0 1 0 3 0 5 0 7 0 9
```


















<br>

<h3 align="center"> int allen_COPYINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int NEW_ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função copia de um vetor para outro os valores que atenderem os requisitos de CONDITION ( HT , LT , EQ , DF , HE , LE , PAR , IMPAR , MULTIPLO , NOTMULTIPLO , QUADRADO_X_EQ_Y , QUADRADO_X_DF_Y , INVERSO , CRESCENTE , DECRESCENTE ). Os parâmetros são os seguintes: SIZE define o tamanho do vetor, ARRAY é o vetor que será utilizado para coletar os valores, CONDITION é o macro, COMPARATOR é o valor que serve de comparação quando necessário, NEW_ARRAY é o vetor que irá salvar os valores que atenderem os requisitos`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    int array [] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    int new_array [10];

    // Printando o vetor antes da copia
    PR ("Antes: ");
    PR_intVETOR ( 10 , array );

    PRL (2);
    int size = allen_COPYINTARRAY ( 10 , array , PAR , 0 , new_array );

    // Printando o vetor após a copia
    PR ("Depois: ");
    PR_intVETOR ( size , new_array );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes: 0 1 2 3 4 5 6 7 8 9 

Depois: 0 2 4 6 8
```


























<br>

<h3 align="center"> void allen_CLEARINTARRAY ( int SIZE , int ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente limpa todo o int array removendo todos os valores existentes `;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    int array [] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };

    // Printando o vetor antes da limpeza
    PR ("Antes: ");
    PR_intVETOR ( 10 , array );

    PRL (2);
    allen_CLEARINTARRAY ( 10 , array );

    // Printando o vetor após a limpeza
    PR ("Depois: ");
    PR_intVETOR ( 10 , array );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes: 0 1 2 3 4 5 6 7 8 9 

Depois: 0 0 0 0 0 0 0 0 0 0
```















<br>

<h3 align="center"> int allen_SUBSINTBARRAY ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int TOKEN , int B_ARRAY [LINES] [COLUNS] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente substitui em uma matriz valores que atendam os requsitos definidos por CONDITION ( HT , LT , EQ , DF , HE , LE , PAR , IMPAR , MULTIPLO , NOTMULTIPLO , QUADRADO_X_EQ_Y , QUADRADO_X_DF_Y , INVERSO , CRESCENTE , DECRESCENTE ). Os parâmetros são os seguintes: LINES a qunatidade de linhas da matriz, COLUNS a quantidade de colunas na matriz, CONDITION um dos macros, COMPARATOR valor para servir como comparador seguindo o macro utilizado anteriormente, TOKEN é pelo que os números que atendam as condições serão alterados e por fim B_ARRAY é nome da matriz que será utilizada`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    int jill_valentine [] [3] = { { 1 , 2 , 3 } , { 6 , 7 , 8 } };

    // Printando antes das substituições
    PR ("Antes de substituir: ");
    PR_intMATRIZ ( 2 , 3 , jill_valentine );
    PRL (2);

    allen_SUBSINTBARRAY ( 2 , 3 , DECRESCENTE , no , no , jill_valentine );

    // Printando após as substituições
    PR ("Apos a substituicao: ");
    PR_intMATRIZ ( 2 , 3 , jill_valentine );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes de substituir: 1 2 3 6 7 8

Apos a substituicao: 8 7 6 3 2 1
```




















<br>

<h3 align="center"> int allen_COPYINTBARRAY (  int LINES , int COLUNS , int CONDITION , int COMPARATOR , int B_ARRAY [LINES] [COLUNS] , int NEW_B_ARRAY [LINES] [COLUNS] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente copai de uma matriz valores que atendam os requsitos definidos por CONDITION ( HT , LT , EQ , DF , HE , LE , PAR , IMPAR , MULTIPLO , NOTMULTIPLO , QUADRADO_X_EQ_Y , QUADRADO_X_DF_Y , INVERSO , CRESCENTE , DECRESCENTE ) e o salva em outra matriz. Os parâmetros são os seguintes: LINES a qunatidade de linhas da matriz, COLUNS a quantidade de colunas na matriz, CONDITION um dos macros, COMPARATOR valor para servir como comparador seguindo o macro utilizado anteriormente, B_ARRAY é nome da matriz que será utilizada e por fim NEW_B_ARRAY é a matriz que receberá os valores que atenderam os requisitos`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    int jill_valentine [] [3] = { { 1 , 2 , 3 } , { 6 , 7 , 8 } };
    int leon_kennedy  [2] [3] = { { 0 , 0 , 0 } , { 0 , 0 , 0 } };

    // Printando antes da copia
    PR ("Antes de substituir: ");
    PR_intMATRIZ ( 2 , 3 , jill_valentine );
    PRL (2);

    int x = allen_COPYINTBARRAY ( 2 , 3 , PAR , no , jill_valentine , leon_kennedy );

    // Printando após as substituições
    PR ("Apos a substituicao: ");
    PR_intMATRIZ ( 2 , 3 , leon_kennedy );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes de substituir: 1 2 3 6 7 8

Apos a substituicao: 2 6 8 0 0 0
```














<br>

<h3 align="center"> void allen_CLEARINTBARRAY ( int LINES , int COLUNS , int B_ARRAY [ LINES ] [ COLUNS ] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função limpa todos os valores presente em uma matriz, onde, LINES se refere a quantidade de linhas da matriz, COLUNS se refere a quantidade de colunas presentes na matriz, B_ARRAY é a matriz em si `;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    int jill_valentine [] [3] = { { 1 , 2 , 3 } , { 6 , 7 , 8 } };

    // Printando antes da limpeza
    PR ("Antes de limpar: ");
    PR_intMATRIZ ( 2 , 3 , jill_valentine );
    PRL (2);

    allen_CLEARINTBARRAY ( 2 , 3 , jill_valentine );

    // Printando após as substituições
    PR ("Apos a limpeza: ");
    PR_intMATRIZ ( 2 , 3 , jill_valentine );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Antes de limpar: 1 2 3 6 7 8

Apos a limpeza: 0 0 0 0 0 0
```





















<br>

<h3 align="center"> void allen_ADDTOSTRING ( char STRING [] , char ADD [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função adiciona um texto em uma string já criada usando o parâmetro ADD`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    char RESIDENT [200] = "You rescued me!!! U saved me from a tragic tragedy!";

    // Antes de adicionar
    PR (RESIDENT);

    PRL (2);
    allen_ADDTOSTRING ( RESIDENT , " ( A-TRAIN SONG! )" );

    // Depois de adicionar
    PR (RESIDENT);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
You rescued me!!! U saved me from a tragic tragedy!

You rescued me!!! U saved me from a tragic tragedy! ( A-TRAIN SONG! )
```

















<br>

<h3 align="center"> void allen_REMAKESTRING ( char STRING [] , char REMAKE [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função refaz uma string já criada usando o parâmetro REMAKE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{  
    char user_NAME [50] = "allen.1252";

    // Printando antes de refazer
    PR (user_NAME);

    allen_REMAKESTRING ( user_NAME , "*DELETED_USER*" );

    PRL (2);

    // Printando após refazer
    PR (user_NAME);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
allen.1252

*DELETED_USER*
```














