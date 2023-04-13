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



