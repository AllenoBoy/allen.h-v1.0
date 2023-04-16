<h1 align="center"> FLEE </h1>

---

#### As funções do tipo ` FLEE `, servem para realizar as mais diversas coisas em arquivos e pastas, de forma extremamente simplificada, as mensagens de erro sobre arquivo foram totalmente removidas para evitar problemas com a padronização do seu programa. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---

> OBSERVAÇÃO: Enquanto você estiver programando, as funções irão funcionar dentro da pasta onde se encontram os arquivos de código, mas caso você exporte seu programa ( o executável ) ele irá levar em conta o local desse executável para realizar as funções! ! NÃO ME RESPONSABILIZO POR NADA QUE FOR PRODUZIDO USANDO AS FUNÇÕES, ESSAS FUNÇÕES FORAM FEITAS SOMENTE COMO UMA FORMA DE ESTUDO E APERFEIÇOAMENTO PESSOAL ! 

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













<br>

<h3 align="center"> void FLEE_DELETEAFILE ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para deletar um arquivo especifico`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Removendo o arquivo chamado arq.txt
    FLEE_DELETEAFILE ( "arq.txt" );

    // Observação: Essa função não deleta pastas
}

```

<br>

#### SAÍDA:

```txt

O ARQUIVO arq.txt FOI DELETADO!

```














<br>

<h3 align="center"> void FLEE_DELETEAFOLDER ( const char * FOLDER_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para deletar uma pasta vazia ou com conteúdo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Deletando uma pasta chamada simple que possui arquivos
    FLEE_DELETEAFOLDER ( "simple" );

    // Observação: Essa função também remove pastas vazias
    // mas não remove arquivos
}

```

<br>

#### SAÍDA:

```txt

A PASTA simple QUE POSSUI ALGUNS ARQUIVOS FOI DELETADA!

```
















<br>

<h3 align="center"> void FLEE_MOVEAFOLDER ( const char *FOLDER_NAME , const char *NEW_PATH ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para mover uma pasta para outro lugar, mesmo que essa pasta esteja repleta de conteúdo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Movendo a pasta allen_stuff para a pasta lixeira
    FLEE_MOVEAFOLDER ( "allen_stuff" , "lixeira" );

    // Observação: Essa função copia tanto uma pasta com conteúdo como uma preenchida
}

```

<br>

#### SAÍDA:

```txt

A PASTA allen_stuff FOI MOVIDA DIRETAMENTE PARA DENTRO DA PASTA lixeira

```















<br>

<h3 align="center"> void FLEE_COPYAFOLDER ( const char * FOLDER_NAME, const char* SAVE_PATH, const char* NEW_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para copiar uma pasta para outro lugar com um novo nome`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Movendo a pasta allen_stuff para a pasta lixeira com o nome de copied_stuff
    FLEE_COPYAFOLDER ( "allen_stuff" , "lixeira" , "copied_stuff" );
}

```

<br>

#### SAÍDA:

```txt

A PASTA allen_stuff FOI COPIADA DIRETAMENTE PARA DENTRO DA PASTA lixeira COM O NOVO NOME copied_stuff

```






















<br>

<h3 align="center"> void FLEE_SYSTEMFOLDER ( const char * SYSTEM_FOLDER_NAME , char * FOLDER , char * SAVE_PATH ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar o caminho completo de uma pasta específica do sistema`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    char system_path [50];

    // Pegando o endereço da pasta APPDATA
    FLEE_SYSTEMFOLDER ( "APPDATA" , "" , system_path );

    // Observação: Caso queira criar uma pasta específica, o 2 parâmetro é o nome da pasta
    // Qual o uso dessa função? Padronizar o salvamento de dados, em locais que o
    // usuário normalmente não irá ter acesso ( não irá ver )
    
    // Printando o caminho
    PR (system_path);
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
C:\Users\...\AppData\Roaming
```












<br>

<h3 align="center"> void FLEE_Sint ( int VALUE , const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para printar em um arquivo um valor do tipo int, substituindo o arquivo toda vez`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando no arquivo oloi.txt o valor 202200132
    FLEE_Sint ( 202200132 , "oloi.txt" );

    // Observação: Essa função não é recomendada pois seu uso é simples
    // toda vez que for chamada ela simplesmente substitui todo o conteúdo
    // do arquivo pela int informada, enfim seu uso deve ser feito para programas simples
}

```

<br>

#### | oloi.txt

```txt

**Esse conteúdo será removido 

```

<br>

#### SAÍDA:

```txt
202200132
```

















<br>

<h3 align="center"> int FLEE_Lint ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar de um arquivo um valor do tipo inteiro sem definição alguma`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando no arquivo oloi.txt o valor 202200132
    int x = FLEE_Lint ( "oloi.txt" );

    PR_INT ( x );
}

```

<br>

#### | oloi.txt

```txt

202200132

```

<br>

#### SAÍDA DO CONSOLE:

```txt
202200132
```
























<br>

<h3 align="center"> void FLEE_Schar ( char CHARACTER , const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para printar em um arquivo o char sem definição alguma, ou seja, ele substitui se o arquivo estiver preenchido`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando no arquivo oloi.txt o valor 202200132
    FLEE_Schar ('*', "arq.txt");
}

```

<br>

#### | arq.txt

```txt
TINHA UM TEXTO AQUI
OLHA QUE LEGAL
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
*
```

















<br>

<h3 align="center"> char FLEE_Lchar ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar um char de um arquivo, sem predefinição alguma`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando no arquivo oloi.txt o valor 202200132
    char cach = FLEE_Lchar ( "arq.txt" );

    // Printando o char
    printf ("%c", cach);
}

```

<br>

#### | arq.txt

```txt
#
```

<br>

#### SAÍDA DO CONSOLE:

```txt
#
```
















