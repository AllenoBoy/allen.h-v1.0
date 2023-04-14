<h1 align="center"> CS </h1>

---

#### As funções do tipo ` CS `, servem para permitir que em seu programa, haja um "total" controle do console, permitindo a alteração de elementos do console, como botões de maximizar, posição, tamanho, caption entre outras coisas, que serão mostradas nesse documento . 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---








<br>

<h3 align="center"> void CS_SETREGION ( int REGION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a região do texto, usando os macros de regiões do console.`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo o console como português
       CS_SETREGION (BRAZIL); 
       
       // Teste
       printf ("Acentuação\n\n");
       
       // Definindo o console como a padrão da linguagem c
       CS_SETREGION (DEFAULT); 
       
       // Teste
       printf ("Acentuação");
}

```

<br>

#### SAÍDA DO CONSOLE:

```ssh
Acentuação
AcentuaþÒo
```
