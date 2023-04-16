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
    // mas leve em consideração que essa função em específico não cria o arquivo se a pasta não existir
    // o programa simplesmente não irá criar o arquivo,
    
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO FOI CRIADO!

```





















<br>

<h3 align="center"> void FLEE_RENAMEAFILE ( const char* FILE_NAME , const char * NEW_FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para renomear um arquivo definido por FILE_NAME por NEW_FILE_NAME`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Renomeando o arquivo arq.txt para allen.txt
    FLEE_RENAMEAFILE ( "arq.txt" , "allen.txt" );

    // Caso precise alterar em uma pasta ficará assim: nome_da_pasta/arq.txt
    // Essa função renomeia qualquer arquivo inclusive pastas
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO QUE SE CHAMAVA arq.txt SE TORNOU allen.txt

```
























<br>

<h3 align="center"> void FLEE_MOVEAFILE ( const char * FILE_NAME , const char * NEW_DIRECTORY ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para mover um arquivo definido por FILE_NAME para o path definido por NEW_DIRECTORY`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Movendo arq.txt para uma pasta chamada user_data
    FLEE_MOVEAFILE ( "arq.txt" , "user_data" );

    // Observação: Essa função move qualquer arquivo mesmo que esteja dentro de
    // uma sequência de pastas, só que quando copiar uma pasta a mesma precisa
    // estar vazia para ser copiada, caso contrário não será copiada
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO QUE SE CHAMAVA arq.txt FOI MOVIDO PARA user_data

```





















<br>

<h3 align="center"> void FLEE_COPYAFILE ( const char * FILE_NAME , const char * NEW_FOLDER , const char* NEW_FILENAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para copiar um arquivo definido por FILE_NAME para o path definido por NEW_FOLDER com um nome novo definido por NEW_FILENAME`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Copiando um arquivo arq.txt e definindo um novo nome para uma pasta chamada allen_data
    FLEE_COPYAFILE ( "arq.txt" , "allen_data" , "copy.txt" );

    // Observação: Caso o arquivo estivesse em uma pasta específica seria "nome_da_pasta/arq.txt"
    // e não essa função não copia uma pasta e seu conteúdo
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO QUE SE CHAMAVA arq.txt FOI COPIADO PARA allen_data e definido como copy.txt

```




















<br>

<h3 align="center"> void FLEE_CREATEAFILEANDFOLDER ( const char * FOLDER_NAME , const cha r* FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para criar uma pasta e arquivo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Criando uma pasta chamada allen_info e um arquivo arq.txt
    FLEE_CREATEAFILEANDFOLDER ( "allen_info" , "arq.txt" );

    // Observação: Caso só queira criar a pasta a função fica assim ( "nome_da_pasta" , "" )
    // Outra coisa o arquivo não é criado se for definido assim "uma_pasta/arq.txt"
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO CRIOU A PASTA CHAMADA allen_info E CONSEQUENTEMENTE CRIOU O arq.txt

```














<br>

<h3 align="center"> void FLEE_CREATEAFOLDER ( const char * FOLDER_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para criar uma pasta`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Criando uma pasta chamada butcher
    FLEE_CREATEAFOLDER ( "butcher" );

    // Observação: Essa função cria exclusivamente só uma pasta no máximo ele cria em uma pasta
    // específica -> "nome_de_uma_pasta/butcher"
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO CRIOU A PASTA CHAMADA butcher

```

























