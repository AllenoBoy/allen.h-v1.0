<h1 align="center"> G </h1>

---

#### As funções do tipo ` G `, servem para receber valores, ou seja, receber a entrada de dados fornecidos pelo usuário, com ou sem limitações e variações. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---
















<br>

<h3 align="center"> static inline void BUFFER ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função quando chamada limpa o stdin e stdout restante`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // ... Alguma Função que pega um valor
    BUFFER ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: ESSA FUNÇÃO EVITA BUGS DE BUFFER QUANDO SE PEDE VÁRIOS VALORES AO USUÁRIO

```










<br>

<h3 align="center"> int G_INT ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo inteiro`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando um valor do tipo inteiro
    int age;
    printf ("Insira sua idade: ");
    age = G_INT ();
    
    // Printando o valor recebido
    printf ("Ok, sua idade e = %d", age);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt

Insira sua idade: 12
Ok, sua idade e = 12

```







<br>

<h3 align="center"> char G_CHAR ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo char`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando um valor do tipo char
    char age;
    printf ("Insira um caractere: ");
    age = G_CHAR ();

    // Printando o valor recebido
    printf ("Ok, o caractere que voce escolheu e %c", age);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt

Insira um caractere: #
Ok, o caractere que voce escolheu e #

```














<br>

<h3 align="center"> float G_FLOAT ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo float`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando um valor do tipo float
    float grade;
    printf ("Insira sua nota: ");
    grade = G_FLOAT ();

    // Printando o valor recebido
    printf ("Ok, a sua nota foi %.2f", grade);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt

Insira sua nota: 12.33
Ok, a sua nota foi 12.33

```













<br>

<h3 align="center"> double G_DOUBLE ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo double`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando um valor do tipo float
    double grade;
    printf ("Insira sua nota: ");
    grade = G_DOUBLE ();

    // Printando o valor recebido
    printf ("Ok, a sua nota foi %.2lf", grade);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt

Insira sua nota: 12.33
Ok, a sua nota foi 12.33

```










<br>

<h3 align="center"> void G_STRING ( char STRING [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo string`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Variável para salvar a string
    char USERNAME [50];

    // Recebendo a string do usuário
    printf ("Insira seu nome: ");
    G_STRING ( USERNAME );

    // Printando o nome digitado
    printf ("\n O nome registrado e %s", USERNAME );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Insira seu nome: allen
O nome registrado e allen
```










































<br>

<h3 align="center"> int GWC_INT ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo int com condições, onde VALUE será a variável que será salva, CONDITION será um dos macros de "OPERADORES", COMPARATOR é um valor que será usado como base juntamente com VALUE, TEXT é o texto que irá aparecer toda vez que a função pedir o input, LINE define quantas linhas o pedido de input terá e SPACES a quantidade de espaços`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
// Pegando a idade do usuário
    int x;
        
        x = GWC_INT ( x , LT , 18 , "Insira sua idade (precisa ser maior que 18): " , 1 , 10 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira sua idade (precisa ser entre 18 acima): 2 
          Insira sua idade (precisa ser entre 18 acima): 8
          Insira sua idade (precisa ser entre 18 acima): 11
          Insira sua idade (precisa ser entre 18 acima): 12
          Insira sua idade (precisa ser entre 18 acima): 18
```




















<br>

<h3 align="center"> float GWC_FLOAT ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo float com condições, onde VALUE será a variável que será salva, CONDITION será um dos macros de "OPERADORES", COMPARATOR é um valor que será usado como base juntamente com VALUE, TEXT é o texto que irá aparecer toda vez que a função pedir o input, LINE define quantas linhas o pedido de input terá e SPACES a quantidade de espaços`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
       // Pegando uma nota do usuário
       float grade;
        
        // enquanto grade for menor ou igual a 5.99 a função irá executar
        grade = GWC_FLOAT ( grade , LE , 5.99 , "Insira uma nota , valor valido: " , 2 , 10 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira uma nota , valor valido: 1.33
          
          
          Insira uma nota , valor valido: 5.62
          
          
          Insira uma nota , valor valido: 8 
```

































<br>

<h3 align="center"> double GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo double com condições, onde VALUE será a variável que será salva, CONDITION será um dos macros de "OPERADORES", COMPARATOR é um valor que será usado como base juntamente com VALUE, TEXT é o texto que irá aparecer toda vez que a função pedir o input, LINE define quantas linhas o pedido de input terá e SPACES a quantidade de espaços`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
       // Pegando um valor do usuário
       double como_sera;
       
       como_sera = GWC_FLOAT ( como_sera , EQ , 12.3 , "Insira um valor valido = " , 0 , 10 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira um valor valido = 12.3
          Insira um valor valido = 12.30
```


























<br>

<h3 align="center"> char GWC_CHAR ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um valor do tipo char com condições, onde VALUE será a variável que será salva, CONDITION será um dos macros de "OPERADORES" ( onde nessa função só estão disponíveis EQ , DF , NRM ), COMPARATOR  é um valor que será usado como base juntamente com VALUE, TEXT é o texto que irá aparecer toda vez que a função pedir o input, LINE define quantas linhas o pedido de input terá e SPACES a quantidade de espaços`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
       char test;

       // Pegando um char até que seja diferente de #
       test = GWC_CHAR ( test , EQ , '#', "Insira um simbolo: " , 0 , 10  );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira um simbolo: #
          Insira um simbolo: $
```




















<br>

<h3 align="center"> char GWC_STRING ( const char * QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente serve para pegar uma string fornecida pelo usuário, onde, QUESTION é o texto que aparece antes do input, STRING é a string que irá armazenar a entrada do usuário, LINES é a quantidade de linhas printadas antes do input assim como SPACES são a quantidade de espaços, TYPE_OF define que tipo de funcionalidade a função irá executar ( usando os macros de STRING ), se o macro for o de tamanho "stringSZ" o parâmetro SIZE_LIMITER será ativado e aqui será definido o tamanho máximo da string, TEXT_COMPARATOR é para realizar a comparação de texto caso o TYPE_OF permita, e por último o EXIT_TOKEN se refere a uma definição no loop de recebimento de string que permite que encerre a execução sem completar nada`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
       char username [50];

       // Pegando um username, usando o tamanho máximo de 20, e com o exit token -> :q!
       GWC_STRING ( "Insira seu nome: " , username , 0 , 10 , stringSZ , 20 , notext , ":q!" );
       
       PR ( username );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira seu nome: abcdefghijklmnopqrs
          Insira seu nome: allen
allen
```

























<br>

<h3 align="center"> int getI ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função possui um estilo de recebimento de input diferente ( allen style XD ), onde esse estilo basicamente consiste em limitar o input do usuário, nessa função em específico o usuário está limitado a digitar somente números. Os parâmetros são definidos assim, QUESTION_TEXT se refere a informação / texto que será printado toda vez que for requisitado o input, LINES a quantidade de print de quebra de linhas, SPACES a quantidade de prints de ' ' , CONDITION se refere de que forma será feita a validação usando os macros OPERADORES ( HT , LT , EQ , DF , HE , LE , NRM  ) para serem comparados com COMPARATOR`

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{ 
       int random_value;

       // Pegando um int aleatório sem limitações
       random_value = getI ( "Insira algum valor do tipo inteiro: " , 1 , 2 , NRM , 0 );

       // Printando
       PRL (1);
       PR_INT ( random_value );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
  Insira algum valor do tipo inteiro: 12
12
```























<br>

<h3 align="center"> float getF ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Mesma funcionalidade de getI, só que para float. Os parâmetros dessa função são definidos assim, QUESTION_TEXT se refere a informação / texto que será printado toda vez que for requisitado o input, LINES a quantidade de print de quebra de linhas, SPACES a quantidade de prints de ' ' , CONDITION se refere de que forma será feita a validação usando os macros OPERADORES ( HT , LT , EQ , DF , HE , LE , NRM  ) para serem comparados com COMPARATOR`

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{ 
       float grade;

       // Recebendo o input do usuário
       grade = getF ( "Insira sua nota: " , 1 , 10 , NRM , 0 );

       // Printando o valor
       PRL (1);
       PR_FLOAT ( grade , 1 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira sua nota: 12.3
12.3
```
























<br>

<h3 align="center"> float getD ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Mesma funcionalidade de getI, só que para double. Os parâmetros dessa função são definidos assim, QUESTION_TEXT se refere a informação / texto que será printado toda vez que for requisitado o input, LINES a quantidade de print de quebra de linhas, SPACES a quantidade de prints de ' ' , CONDITION se refere de que forma será feita a validação usando os macros OPERADORES ( HT , LT , EQ , DF , HE , LE , NRM  ) para serem comparados com COMPARATOR`

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{ 
       double grade;

       // Recebendo o input do usuário
       grade = getD ( "Insira sua nota: " , 1 , 10 , NRM , 0 );

       // Printando o valor
       PRL (1);
       PR_DOUBLE ( grade , 1 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
          Insira sua nota: 12.3
12.3
```

























<br>

<h3 align="center"> float getS ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ...  ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Segue com a mesma funcionalidade de getI, só que mais sofisticada, essa função permite que atráves dos macros de OPERADORES ( mais específicamente SZE -> funciona como NRM só que para essa função , CRY , PWD , ONS , PWS , ONN , PWN ) receba strings de forma mais dinâmica e interessante. Os parâmetros são, QUESTION_TEXT que é o texto que irá ser printado toda vez quando houver input, LINES e SPACES printam a quantidade respectivamente de '\n' e ' ', CONDITION se refere aos macros de OPERADORES, MAX_SIZE define o tamanho máximo que pode ser digitado pelo usuário, TOKEN é usado na substituição de caracteres específicos quando CONDITION for igual a CRY, e em NUMBER_OF_REPLACEMENTS se CONDITION for igual a CRY se é necessário inserir os chars que serão alterados na string`

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
       char pass [50];

       // Aqui recebemos a string, e posteriormente alteramos quando ela é retornada
       getS ( "Insert a string: " , 1 , 10 , CRY , 20 , pass , '*' , 5 , 'a' , 'e' , 'i' , 'o' , 'u' );

       // Printing the string
       PRL (1);
       PR (pass);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
         Insert a string: a e i o u - removido
* * * * * * - r*m*v*d*
```


















