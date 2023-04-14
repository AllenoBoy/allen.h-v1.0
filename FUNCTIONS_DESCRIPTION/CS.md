<h1 align="center"> CS </h1>

---

#### As funções do tipo ` CS `, servem para permitir que em seu programa, haja um "total" controle do console, permitindo a alteração de elementos do console, como botões de maximizar, posição, tamanho, caption entre outras coisas, que serão mostradas nesse documento . 

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
