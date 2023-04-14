<h1 align="center"> SYS </h1>

---

#### As funções do tipo ` SYS `, servem para controlar algumas propriedades do console, mas seu diferencial é que esse tipo de função usa como base a execução de comandos diretamente no sistema, ou seja, permite que não só propriedades do console sejam alteradas, como também permite a execução de certas ações no próprio sistema operacional. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---











<br>

<h3 align="center"> void SYS_SETREGION ( int REGION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a região do texto, usando os macros de regiões do console para substituir REGION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo o console como português
       SYS_SETREGION (BRAZIL); 
       
       // Teste
       printf ("Acentuação\n\n");
       
       // Definindo o console como a padrão da linguagem c
       SYS_SETREGION (DEFAULT); 
       
       // Teste
       printf ("Acentuação");
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
Acentuação

AcentuaþÒo
```
