<h1 align="center"> FLEE </h1>

---

#### As funções do tipo ` FLEE `, servem para realizar as mais diversas coisas em arquivos e pastas, de forma extremamente simplificada, as mensagens de erro sobre arquivo foram totalmente removidas para evitar problemas com a padronização do seu programa. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---

> OBSERVAÇÃO: Enquanto você estiver programando, as funções irão funcionar dentro da pasta onde se encontram os arquivos de código, mas caso você exporte seu programa ( o executável ) ele irá levar em conta o local desse executável para realizar as funções! 

---
































<br>

<h3 align="center"> void FLEE_PUTS ( const char * FILE_NAME, bool ADD , const char * TEXT , ... ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função funciona como um printf só que para arquivos, onde FILE_NAME define o path do arquivo, ADD define se esse print no arquivo será substituindo todo o conteúdo novo pelo digitado ou se só vai adicionar ( isso caso ADD seja igual a true ), TEXT define o que será printado, por exemplo: "a nota dela = %d", 12`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Adicionando ao arquivo arq.txt
    FLEE_PUTS ("arq.txt" , yes , "allen %d" , 12 );
    
    // Outro detalhe, caso o segundo parametro seja falso, então ele sobreescreve todo o arquivo e aí coloca o texto
    
    // caso o arquivo estivesse em uma pasta a chamada seria assim -> "nome_da_pasta/arq.txt"
    
}

```

<br>

#### | arq.txt

```txt

NAME = 

```

<br>

#### SAÍDA DO ARQUIVO APÓS A EXECUÇÃO DA FUNÇÃO:

```txt

NAME = allen 12

```



















<br>

<h3 align="center"> void FLEE_CREATEAFILE ( const char* FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para criar um arquivo com o nome e tipo definido por FILE_NAME`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Criando um arquivo chamado arq.txt
    FLEE_CREATEAFILE ("arq.txt");
    
    // Observação: caso queira criar em uma pasta específica -> "nome_da_pasta/arq.txt"
    // mas leve em consideração que essa função em específico não cria a pasta definida não existir
    // o programa simplesmente não irá criar o arquivo,
    
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO FOI CRIADO!

```
