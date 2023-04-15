<h1 align="center"> allen </h1>

---

#### As funções do tipo ` allen `, servem para realizar algumas funções aleatórias e específicas, comumente para vetores. 

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
