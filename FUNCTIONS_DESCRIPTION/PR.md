<h1 align="center"> PR </h1>

---

#### As funções do tipo `PR`, servem para printar conteúdo de formas diversas, com suas variações, especificações, estilizações, limitações entre outros, que serão mostradas nesse documento.

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---










<br>

<h3 align="center"> void PR ( const char * TEXT ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um texto definido por "" ou uma string`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       char *USERNAME = "allen";

       // Print sem uso de variável
       PR ("GOSTO DE COMER CHOCOLATE! ");
       
       // Print com uso de variável
       PR (USERNAME);
       
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
GOSTO DE COMER CHOCOLATE! allen
```











<br>

<h3 align="center"> void PRL ( int TIMES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma quantidade de vezes '\n', definida pelo parâmetro TIMES `;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       printf ("Arroz e bom!");
       
       // Pula uma linha
       PRL (1);
       
       printf ("Feijao e bom tambem!");
       
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
Arroz e bom!
Feijao e bom tambem!
```












<br>

<h3 align="center"> void PRS ( int TIMES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma quantidade de vezes ' ', definida pelo parâmetro TIMES `;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
         
       // Irá printar 10 espaços em branco
       PRS (10);
       
       printf ("Arroz e bom!");
       
       // Irá printar 2 espaços em branco
       PRS (2);
       
       printf ("Feijao e bom tambem!");
       
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
          Arroz e bom!  Feijao e bom tambem!
```






















<br>

<h3 align="center"> void PR_INT ( int VARIABLE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um valor do tipo inteiro, definido pelo parâmetro VARIABLE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       int age = 18;

       printf ("Sua idade antiga = ");
       
       // printando sem usar variável
       PR_INT (12);
       
       printf ("\n\nSua idade nova = ");
       
       // printando usando uma variável
       PR_INT (age);
       
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
Sua idade antiga = 12
Sua idade nova = 18
```


























<br>

<h3 align="center"> void PR_CHAR ( char VARIABLE , int TIMES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um valor do tipo char, definido pelo parâmetro VARIABLE uma quantidade de vezes definida por TIMES`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       char c = '+';

       // Printando sem variável
       PR_CHAR ( '=' , 10 );

       printf ("\n");

       // Printando com variável
       PR_CHAR ( c , 10 );       
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
==========
++++++++++
```



















<br>

<h3 align="center"> void PR_FLOAT ( float VARIABLE , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um valor do tipo float, definido pelo parâmetro VARIABLE e quantas casas decimais irá possuir, definido por COMMAS`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    float grade = 91.12344;

    // Sem variável
    PR_FLOAT ( 12.323213 , 2 );

    printf ("\n");

    // Com variável
    PR_FLOAT ( grade , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
12.32
91.12
```













<br>

<h3 align="center"> void PR_DOUBLE ( double VARIABLE , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um valor do tipo double, definido pelo parâmetro VARIABLE e quantas casas decimais irá possuir, definido por COMMAS`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    double grade = 91.12344;

    // Sem variável
    PR_DOUBLE ( 12.323213 , 2 );

    printf ("\n");

    // Com variável
    PR_DOUBLE ( grade , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
12.32
91.12
```




















<br>

<h3 align="center"> void PR_STRING ( char STRING [ ] , int HOW_TO_PRINT , char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ... ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma string com formatação \ modificação ( necessário o uso dos macros de strings ), onde: STRING define o texto ou string que será printada no console, HOW_TO_PRINT define o modo de print que será utilizado [ stringNR , stringIV , stringHB , stringLB , stringCY ], REPLACEMENT_CHAR define qual o caractere de substituição na função, caso o HOW_TO_PRINT seja igual o macro stringCY onde também se for verdadeiro se torna necessário dizer quantos valores serão substituidos em NUMBER_OF_REPLACEMENTS, exemplo: desejo substituir 'a' , '*' , '_', então NUMBER_OF_REPLACEMENTS seria = 3, concluindo ... será onde os chars que serão usados para substituição serão colocados, assim como em printf`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    char USERNAME [] = "allen walker";
    char variable = 'e';

    // Printando usando stringNR: NORMAL
    PR_STRING ( USERNAME , stringNR , norchar , nosubs );
    printf ("\n");

    // Printando usando stringIV: INVERSO
    PR_STRING ( USERNAME , stringIV , norchar , nosubs );
    printf ("\n");

    // Printando usando stringHB: CAIXA ALTA -> AVISO: ACENTUAÇÃO NÃO FUNCIONA, POIS NÃO É RECONHECIDO
    PR_STRING ( USERNAME , stringHB , norchar , nosubs );
    printf ("\n");

    // Printando usando stringLB: CAIXA BAIXA -> AVISO: ACENTUAÇÃO NÃO FUNCIONA, POIS NÃO É RECONHECIDO
    PR_STRING ( "ALLEN WALKER" , stringLB , norchar , nosubs );
    printf ("\n");

    // Printando usando stringCY: CRIPTOGRAFADO / SUBSTITUIDO -> AVISO: ACENTUAÇÃO NÃO FUNCIONA, POIS NÃO É RECONHECIDO
    PR_STRING ( USERNAME , stringCY , '*' , 2 , 'a' , variable );
    printf ("\n");
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
allen walker
reklaw nella
ALLEN WALKER
allen walker
*ll*n w*lk*r
```






























<br>

<h3 align="center"> void PRV_INT ( int REVERSE , int SIZE , int TYPE , int SPACE , const char * ANY_TEXT , const char * ANY_TEXT2 , int ARRAY [ ] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um vetor do tipo int de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, SIZE define o tamanho do vetor que será utilizado, TYPE a variação de print que vai de 1 até 6 , SPACE que define a quantidade de espaços que serão printados depois do valor, ANY_TEXT define o que será escrito antes do valor e ANY_TEXT2 define o que será escrito após o print do valor e por fim ARRAY recebe o vetor que será utilizado na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    int allen_ARRAY [5] = { 1 , 2 , 3 , 4 , 5 };

    printf ("SEM REVERSE:\n");

    // Sem Reverse ativado no estilo 1
    PRV_INT ( no , 5 , 1 , 1 , notext , notext , allen_ARRAY );

    printf ("\n");

    // Sem Reverse ativado no estilo 2
    PRV_INT ( no , 5 , 2 , 1 , "<" , ">" , allen_ARRAY );




    printf ("\n\nCOM REVERSE:\n");

    // Sem Reverse ativado no estilo 1
    PRV_INT ( yes , 5 , 1 , 1 , notext , notext , allen_ARRAY );

    printf ("\n");

    // Sem Reverse ativado no estilo 2
    PRV_INT ( YES , 5 , 2 , 1 , "<" , ">" , allen_ARRAY );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
SEM REVERSE:
1 2 3 4 5
<1 <2 <3 <4 <5

COM REVERSE:
5 4 3 2 1
<5 <4 <3 <2 <1
```




























<br>

<h3 align="center"> void PRV_FLOAT ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um vetor do tipo float de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, SIZE define o tamanho do vetor que será utilizado, TYPE a variação de print que vai de 1 até 6 , SPACE que define a quantidade de espaços que serão printados depois do valor, COMMA define quantas casas decimais serão printadas com o valor, ANY_TEXT define o que será escrito antes do valor e ANY_TEXT2 define o que será escrito após o print do valor e por fim ARRAY recebe o vetor que será utilizado na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    float eovetor [] = { 1.44 , 2.02 , 3.11 , 43.22 , 5.33 };

    // Printando sem inverter
    printf ("\n Sem inverter: ");
    PRV_FLOAT ( no , 5 , 3 , 1 , 1 , "< " , " >" , eovetor );

    // Printando invertendo
    printf ("\n Invertendo:   ");
    PRV_FLOAT ( YES , 5 , 3 , 1 , 1 , "< " , " >" , eovetor );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
 Sem inverter: < 1.4 > < 2.0 > < 3.1 > < 43.2 > < 5.3 >
 Invertendo:   < 5.3 > < 43.2 > < 3.1 > < 2.0 > < 1.4 >
```






























<br>

<h3 align="center"> void PRV_DOUBLE ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console um vetor do tipo double de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, SIZE define o tamanho do vetor que será utilizado, TYPE a variação de print que vai de 1 até 6 , SPACE que define a quantidade de espaços que serão printados depois do valor, COMMA define quantas casas decimais serão printadas com o valor, ANY_TEXT define o que será escrito antes do valor e ANY_TEXT2 define o que será escrito após o print do valor e por fim ARRAY recebe o vetor que será utilizado na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    double eovetor [] = { 1.44 , 2.02 , 3.11 , 43.22 , 5.33 };

    // Printando sem inverter
    printf ("\n Sem inverter: ");
    PRV_DOUBLE ( no , 5 , 3 , 1 , 1 , "< " , " >" , eovetor );

    // Printando invertendo
    printf ("\n Invertendo:   ");
    PRV_DOUBLE ( YES , 5 , 3 , 1 , 1 , "< " , " >" , eovetor );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
 Sem inverter: < 1.4 > < 2.0 > < 3.1 > < 43.2 > < 5.3 >
 Invertendo:   < 5.3 > < 43.2 > < 3.1 > < 2.0 > < 1.4 >
```






















<br>

<h3 align="center"> void PRM_INT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [ ] , const char RIGHT_TEXT [ ] ,  int B_ARRAY [ LINES ] [ COLS ] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma matriz do tipo int de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, STYLE a variação de print que vai de 1 até 4 , LINES define a quantidade de linhas da matriz, COLS define a quantidade de colunas da matriz, SPACE define a quantidade de espaços que serão printados depois do valor, LEFT_TEXT define o que será escrito antes do valor e RIGHT_TEXT define o que será escrito após o print do valor e por fim B_ARRAY recebe a matriz que será utilizada na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    // Matriz de teste
    int dorime [] [3] = { { 1 , 2 , 3 } , { 4 , 5 , 6 } , { 7 , 8 , 9 } };

    // Printando a matriz sem inverter no estilo 1
    printf ("Matriz no estilo 01: ");
    PRM_INT ( 0 , 1 , 3 , 3 , 1 , "{ " , " }" , dorime );
    printf ("\n");

    // Printando a matriz invertida no estilo 1
    printf ("Matriz no estilo 01: ");
    PRM_INT ( YES , 1 , 3 , 3 , 1 , "{ " , " }" , dorime );

    printf ("\n\n");

    // Printando a matriz normalmente no estilo 3
    printf ("Matriz no estilo 02:\n");
    PRM_INT ( 0 , 3 , 3 , 3 , 1 , "{ " , " }" , dorime );

    printf ("\n");
    printf ("Matriz no estilo 02:\n");
    // Printando a matriz invertida no estilo 3
    PRM_INT ( YES , 3 , 3 , 3 , 1 , "{ " , " }" , dorime );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
Matriz no estilo 01: { 1 } { 2 } { 3 } { 4 } { 5 } { 6 } { 7 } { 8 } { 9 }
Matriz no estilo 01: { 9 } { 8 } { 7 } { 6 } { 5 } { 4 } { 3 } { 2 } { 1 }

Matriz no estilo 02:
{ 1 } { 2 } { 3 }
{ 4 } { 5 } { 6 }
{ 7 } { 8 } { 9 }

Matriz no estilo 02:
{ 9 } { 8 } { 7 }
{ 6 } { 5 } { 4 }
{ 3 } { 2 } { 1 }
```














<br>

<h3 align="center"> void PRM_FLOAT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [ LINES ] [ COLS ] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma matriz do tipo float de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, STYLE a variação de print que vai de 1 até 4 , LINES define a quantidade de linhas da matriz, COLS define a quantidade de colunas da matriz, SPACE define a quantidade de espaços que serão printados depois do valor, COMMA define a quantidade de casas decimais a serem printadas, LEFT_TEXT define o que será escrito antes do valor e RIGHT_TEXT define o que será escrito após o print do valor e por fim B_ARRAY recebe a matriz que será utilizada na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    // Matriz de teste
    float dorime [] [3] = { { 1.3343 , 2.1312 , 3.993 } , { 4.235 , 5.123 , 6.477 } , { 7.1233 , 8.8832 , 9.1255 } };

    // Printando a matriz no estilo 3 normalmente
    printf ("Matriz no estilo 03 - normalmente:\n");
    PRM_FLOAT ( no , 3 , 3 , 3 , 1 , 2 , "< " , " >" , dorime );

    printf ("\n");

    // Printando a matriz no estilo 3 invertida
    printf ("Matriz no estilo 03 - invertida:\n");
    PRM_FLOAT ( yes , 3 , 3 , 3 , 1 , 2 , "{ " , " }" , dorime );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
Matriz no estilo 03 - normalmente:
< 1.33 > < 2.13 > < 3.99 >
< 4.24 > < 5.12 > < 6.48 >
< 7.12 > < 8.88 > < 9.13 >

Matriz no estilo 03 - invertida:
{ 9.13 } { 8.88 } { 7.12 }
{ 6.48 } { 5.12 } { 4.24 }
{ 3.99 } { 2.13 } { 1.33 }
```



































<br>

<h3 align="center"> void PRM_DOUBLE ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [ LINES ] [ COLS ] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma matriz do tipo double de forma formatada, onde, REVERSE define se a função irá printar o vetor de forma invertida, STYLE a variação de print que vai de 1 até 4 , LINES define a quantidade de linhas da matriz, COLS define a quantidade de colunas da matriz, SPACE define a quantidade de espaços que serão printados depois do valor, COMMA define a quantidade de casas decimais a serem printadas, LEFT_TEXT define o que será escrito antes do valor e RIGHT_TEXT define o que será escrito após o print do valor e por fim B_ARRAY recebe a matriz que será utilizada na função`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    // Matriz de teste
    double SHAKA [] [3] = { { 1.3343 , 2.1312 , 3.993 }
                                           ,
                             { 4.235 , 5.123 , 6.477 }
                                           ,
                             { 7.1233 , 8.8832 , 9.1255 } };

    // Printando NORMALMENTE
    printf ("[NORMAL] Matriz no estilo 03: \n");
    PRM_DOUBLE ( no , 3 , 3 , 3 , 1 , 2 , "< " , " >" , SHAKA );

    printf ("\n");

    // Printando INVERTIDO
    printf ("[INVERTIDA] Matriz no estilo 03: \n");
    PRM_DOUBLE ( yes , 3 , 3 , 3 , 1 , 2 , "{ " , " }" , SHAKA );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
[NORMAL] Matriz no estilo 03:
< 1.33 > < 2.13 > < 3.99 >
< 4.24 > < 5.12 > < 6.48 >
< 7.12 > < 8.88 > < 9.13 >

[INVERTIDA] Matriz no estilo 03:
{ 9.13 } { 8.88 } { 7.12 }
{ 6.48 } { 5.12 } { 4.24 }
{ 3.99 } { 2.13 } { 1.33 }
```


























<br>

<h3 align="center"> void PRL_INT ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Escreve no console uma lista formatada do tipo int / char * ( ou seja antes da string será printado um valor de um vetor ) de forma formatada, onde, REVERSE define se a função printará de forma invertida as informações, HOW_MANY_STRINGS define quantas palavras diferentes existem (no caso o vetor de strings), SPACE define quantos espaços serão printados antes da string ser inserida, TEXT1 se refere ao texto que será printado antes do valor do ARRAY, TEXT2 se refere ao texto que será printado depois do valor do ARRAy, ARRAY define o vetor que será utilizado para preencher a lista ( "1 - nome" ), string define o vetor de strings que será utilizado e por fim o MORE_SPACE define se em vez de uma simples quebra de linha tenhamos duas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
      // Lista de nomes
      char list [] [50] = { "Allen" , "Diana" , "Robson" , "Salvatore" , "Beneviento" , "Chris" };
      // Valor que fica antes
      int   num [] = { 1 , 2 , 3 , 4 , 5 , 6 };

      // Printando o vetor de string 'list'
      PRL_INT ( no , 6 , 50 , 0 , "< " , "> " , num , list , no );
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
<1> Allen
<2> Diana
<3> Robson
<4> Salvatore
<5> Beneviento
<6> Chris
```
