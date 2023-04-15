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

<h3 align="center"> int G_CHAR ( void ) </h3> 

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

<h3 align="center"> int G_FLOAT ( void ) </h3> 

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

<h3 align="center"> int G_DOUBLE ( void ) </h3> 

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

<h3 align="center"> int G_STRING ( void ) </h3> 

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

















