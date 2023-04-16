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
    // Pegando do arquivo arq.txt o char '#'
    char cach = FLEE_Lchar ( "arq.txt" );
    
    // Observação: Pegar chars ou vetor de chars (strings) que possuam acentuação, não é recomendado
    // pois a linguagem c, tem um problema crônica com acentuação, ou seja, se vc usar essa função para
    // pegar 'ç' tem muita chance desse valor ser pego de forma errada!

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

















<br>

<h3 align="center"> void FLEE_Sfloat ( float VALUE , int COMMAS , const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para salvar em um arquivo um valor do tipo float, substituindo todo o arquivo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando um valor do tipo float em arq.txt
    FLEE_Sfloat ( 12.334412 , 1 , "arq.txt" );
}

```

<br>

#### | arq.txt

```txt

*TEM CONTEÚDO AQUI*

```

<br>

#### SAÍDA DO ARQUIVO:

```txt
12.3
```

















<br>

<h3 align="center"> float FLEE_Lfloat ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar em um arquivo um valor do tipo float, de forma não padronizada`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Pegando um valor do tipo float em arq.txt e printando
    float value = FLEE_Lfloat ( "arq.txt" );

    printf ("%.2f", value );
}

```

<br>

#### | arq.txt

```txt
12.3
```

<br>

#### SAÍDA DO CONSOLE:

```txt
12.30
```

















<br>

<h3 align="center"> void FLEE_Sdouble ( double VALUE , int COMMAS , const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para salvar em um arquivo um valor do tipo double, substituindo todo o arquivo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Printando um valor do tipo double em arq.txt
    FLEE_Sdouble ( 12.334412 , 1 , "arq.txt" );
}

```

<br>

#### | arq.txt

```txt

*TEM CONTEÚDO AQUI*

```

<br>

#### SAÍDA DO ARQUIVO:

```txt
12.3
```





















<br>

<h3 align="center"> float FLEE_Ldouble ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar em um arquivo um valor do tipo double, de forma não padronizada`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Pegando um valor do tipo double em arq.txt e printando
    double value = FLEE_Ldouble ( "arq.txt" );

    printf ("%.2f", value );
}

```

<br>

#### | arq.txt

```txt
12.3
```

<br>

#### SAÍDA DO CONSOLE:

```txt
12.30
```























<br>

<h3 align="center"> void FLEE_Sstring ( const char * FILE_NAME , const char * STRING ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para salvar em um arquivo um vetor de caracteres (string), de forma não padronizada, ou seja, se tiver conteúdo ele apaga e coloca esse novo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Salvando no arquivo a frase "i like u! my litte gamestation!" em arq.txt
    FLEE_Sstring ( "arq.txt" , "i like u! my litte gamestation!" );

    // Observação: Você pode inserir acentuação no texto que será salvo no arquivo
}

```

<br>

#### | arq.txt

```txt
12.3
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
i like u! my litte gamestation!
```
























<br>

<h3 align="center"> void FLEE_Lstring ( const char* FILE_NAME, char* STRING ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para pegar todo o conteúdo de um arquivo, sem predefinição nem nada e salvar-lo em uma variável`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    char obs [ 200 ];

    // Salvando em uma string o conteúdo de arq.txt
    FLEE_Lstring ( "arq.txt" , obs );

    // Printando o a string que foi salva
    SYS_SETREGION ( ISO );
    PR ( obs );
    
    // Voltando o console ao padrão
    SYS_SETREGION ( DEFAULT );
    
    // Observação: Na biblioteca existe um macro chamado ISO, quando vc usar qualquer
    // função que pegue uma string que possua acentuação, você pode usar-ló para printar
    // a string corretamente, e depois retornar para o padrão, caso não tenha acentos
    // não precisa disso
}

```

<br>

#### | arq.txt

```txt
i like u! my litte gamestation!
olha a acentuação!
```

<br>

#### SAÍDA DO CONSOLE:

```txt
i like u! my litte gamestation!
olha a acentuação!
```
















<br>

<h3 align="center"> int FLEE_COUNTLINES ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas linhas existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantas linhas existem no arquivo arq.txt
    int lines = FLEE_COUNTLINES ( "arq.txt" );

    // Printando a quantidade de linhas
    printf ("A quantidade de linhas = %d", lines);
}

```

<br>

#### | arq.txt

```txt
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
```

<br>

#### SAÍDA DO CONSOLE:

```txt
A quantidade de linhas = 15
```




























<br>

<h3 align="center"> int FLEE_COUNTWORDS ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas palavras existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantas palavras existem no arquivo arq.txt
    int words = FLEE_COUNTWORDS ( "arq.txt" );

    // Printando a quantidade de linhas
    printf ("Nesse arquivo existem %d palavras!", words );
}

```

<br>

#### | arq.txt

```txt
Pula, pula pipoquinha
Pula pula sem parar
Pula, pula pipoquinha
Pra crescer e estourar
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Nesse arquivo existem 14 palavras!
```


















<br>

<h3 align="center"> int FLEE_COUNTNUMBERS ( const char * FILE_NAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas números existem em um arquivo, números reais tbm, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantos números existem no arquivo arq.txt
    int nums = FLEE_COUNTNUMBERS ( "arq.txt" );
    
    // Observação: Essa função conta inteiros e números reais
    
    // Printando a quantidade de linhas
    printf ("Nesse arquivo existem %d numeros!", nums );
}

```

<br>

#### | arq.txt

```txt
 1 1,3 1.3 1)2


1 2 3 
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Nesse arquivo existem 8 numeros!
```






















<br>

<h3 align="center"> int FLEE_COUNTint ( const char * FILE_NAME , int VALUE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas números inteiros específicos existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantos números 2 existem no arquivo arq.txt
    int count_int = FLEE_COUNTint ( "arq.txt" , 2 );
    
    // Observação: Essa função não lê números inteiros
    
    // Printando essa quantidade
    printf ("Existem -> %d", count_int );
}

```

<br>

#### | arq.txt

```txt
allen 2
2 i am tall 2 
2,3 1. 3 2.3
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Existem -> 3
```




























<br>

<h3 align="center"> int FLEE_COUNTfloat ( const char * FILE_NAME , float VALUE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas números reais do tipo float específicos existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantos números 1.2 existem no arquivo arq.txt
    int count_float = FLEE_COUNTfloat ( "arq.txt" , 1.2 );
    
    // Observação: Se você definiu 1.2 ele só vai pegar se o número estiver realmente assim 1.2 ou assim 1,2
    // mas se esse valor estiver assim 1.23432 ele ignora, para que pegasse esse valor precisa definir ele completo
    
    // Printando essa quantidade
    printf ("Existem -> %d", count_float );
}

```

<br>

#### | arq.txt

```txt
NOTA 01 = 1.2
NOTA 02 = 1,2
TESTE   = 1.2 1,2 1.23
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Existem -> 4
```





















<br>

<h3 align="center"> int FLEE_COUNTdouble ( const char * FILE_NAME , double VALUE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas números reais do tipo double específicos existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantos números 1.2 existem no arquivo arq.txt
    int count_double = FLEE_COUNTdouble ( "arq.txt" , 1.2 );
        
    // Printando essa quantidade
    printf ("Existem -> %d", count_double );
}

```

<br>

#### | arq.txt

```txt
NOTA 01 = 1.2
NOTA 02 = 1,2
TESTE   = 1.2 1,2 1.23
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Existem -> 4
```































<br>

<h3 align="center"> int FLEE_COUNTchar ( const char * FILE_NAME , char CHAR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantos chars específicos existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantos chars # e @ existem no arquivo arq.txt
    int velha = FLEE_COUNTchar ( "arq.txt" , '#' );
    int arrob = FLEE_COUNTchar ( "arq.txt" , '@' );

    // Printando essa quantidade
    printf ("Existem %d -> @\n", velha );
    printf ("Existem %d -> #", arrob );
}

```

<br>

#### | arq.txt

```txt
@ @ 
# # @
# # 

allen@text.com
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Existem 4 -> @
Existem 4 -> #
```




















<br>

<h3 align="center"> int FLEE_COUNTstring ( const char * FILE_NAME , const char * STRING ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para contar quantas palavras específicas existem em um arquivo, retornando esse valor em int`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Contando quantas palavras allen existem em arq.txt
    int allen = FLEE_COUNTstring ( "arq.txt" , "allen" );

    // Observação: Essa função não pegará valores que estiverem assim
    // !palavra , _palavra_ , _palavra , @palavra!
    // Em outras palavras essa função só procura strings separadas

    // Printando a quantidade
    printf ("Existem: %d, allen", allen );
}

```

<br>

#### | arq.txt

```txt
meu nome é allen
allen allen 
allen_ !allen
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Existem 3, allen
```











