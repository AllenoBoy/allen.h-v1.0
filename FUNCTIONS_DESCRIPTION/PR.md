<h1 align="center"> PR </h1>

---

#### As funções do tipo `PR`, servem para printar conteúdo de formas diversas, com suas variações, especificações, estilizações, limitações entre outros, que serão abordadas nesse documento.

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


