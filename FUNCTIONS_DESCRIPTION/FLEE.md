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























<br>

<h3 align="center"> int FLEE_GLOBALSUBSint ( const char * FILE_NAME, int VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um valor do tipo inteiro definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui tudo de qualquer jeito
    
    // Substituindo todas os números 12 por ** em arq.txt
    int subs = FLEE_GLOBALSUBSint ( "arq.txt" , 12 , "**" );

    // Observação: Essa função substitui tudo, ou seja
    // se tiver a seguinte frase "gosto de comer lá no 12cinema"
    // ela ficará assim "gosto de comer lá no **cinema"

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs);
}

```

<br>

#### | arq.txt

```txt
allen 12 tem 12 anos de idade=12
supa 12!
12_3
123

total = 
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
allen ** tem ** anos de idade=**
supa **!
**_3
**3

total = 
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 6 substituicoes
```



















<br>

<h3 align="center"> int FLEE_GLOBALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um valor do tipo float definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui tudo de qualquer jeito

    // Substituindo todas os números 12.35 por *rm* em arq.txt
    int subs = FLEE_GLOBALSUBSfloat ( "arq.txt" , 12.35 , 2 , "*rm*" );

    // Observação: Essa função considera o parâmetro de COMMA para considerar até quantas casas decimais 
    // desse valor serão alteradas, por exemplo -> 12.345 , 2 -> "hakare 12.345" -> "hakare *rm*5" 

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
arquivo de nota 12.35
arquivo de nota 12,35

12,35 12.35  12.345

12,351212 
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
arquivo de nota *rm*
arquivo de nota *rm*

*rm* *rm*  12.345

*rm*1212 
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 5 substituicoes
```












<br>

<h3 align="center"> int FLEE_GLOBALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um valor do tipo double definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui tudo de qualquer jeito

    // Substituindo todas os números 12.35 por *rm* em arq.txt
    int subs = FLEE_GLOBALSUBSdouble ( "arq.txt" , 12.35 , 2 , "*rm*" );

    // Observação: Essa função considera o parâmetro de COMMA para considerar até quantas casas decimais 
    // desse valor serão alteradas, por exemplo -> 12.345 , 2 -> "hakare 12.345" -> "hakare *rm*5" 

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
arquivo de nota 12.35
arquivo de nota 12,35

12,35 12.35  12.345

12,351212 
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
arquivo de nota *rm*
arquivo de nota *rm*

*rm* *rm*  12.345

*rm*1212 
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 5 substituicoes
```




















<br>

<h3 align="center"> int FLEE_GLOBALSUBSchar ( const char * FILE_NAME , char VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um valor do tipo char definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui tudo de qualquer jeito

    // Substituindo todos os chars '&' de arq.txt
    int subs = FLEE_GLOBALSUBSchar ( "arq.txt" , '&' , "--disabled" );
    
    // Observação: Essa função substitui todos as ocorrências do char definido
    // ou seja defini a substiuição de & para "_rem" então em um arquivo: 
    // na seguinte linha do arquivo  -> "if ( live && breath ) eat ();"
    //                                  "if ( live _rem_rem breath ) eat ();"
    
    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
ain&shaka
& & & 
_& 

if ( this && robson )
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
ain--disabledshaka
--disabled --disabled --disabled 
_--disabled 

if ( this --disabled--disabled robson )
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 7 substituicoes
```



















<br>

<h3 align="center"> int FLEE_GLOBALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de uma palavra definido por OLD_WORD`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui tudo de qualquer jeito

    // Substituindo todas as palavras "allen" por lindo em arq.txt
    int subs = FLEE_GLOBALSUBSstring ( "arq.txt" , "allen" , "lindo" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
você conhece o allen?
ele é moh allen!
não é fulana o allen tá ali!
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
você conhece o lindo?
ele é moh lindo!
não é fulana o lindo tá ali!
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 3 substituicoes
```





















<br>

<h3 align="center"> int FLEE_LOCALSUBSint ( const char * FILE_NAME , int VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um int definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSint, é que nessa função a substituição é feita somente em valores separados, por isso o locamente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui somente valores separados 

    // Substituindo localmente todos os valores igual a 12.45 em arq.txt por removed
    int subs = FLEE_LOCALSUBSint ( "arq.txt" , 12 , "removed" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
allen 12 tem 12 anos de idade=12
supa 12!
12_3
123

total = 
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
allen removed tem removed anos de idade=12
supa 12!
12_3
123

total = 
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 2 substituicoes
```

















<br>

<h3 align="center"> int FLEE_LOCALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um float definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSfloat, é que nessa função a substituição é feita somente em valores separados, por isso o locamente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui somente valores separados 

    // Substituindo localmente todos os valores igual a 12.35 em arq.txt por removed
    int subs = FLEE_LOCALSUBSfloat ( "arq.txt" , 12.35 , 2 , ":q!" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
arquivo de nota 12.35
arquivo de nota 12,35

12,35 12.35  12.345

arriz12.35

12,351212  
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
arquivo de nota :q!
arquivo de nota :q!

:q! :q!  12.345

arriz12.35

12.351212  
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 4 substituicoes
```

























<br>

<h3 align="center"> int FLEE_LOCALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um double definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSdouble, é que nessa função a substituição é feita somente em valores separados, por isso o locamente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui somente valores separados 

    // Substituindo localmente todos os valores igual a 12.35 em arq.txt por removed
    int subs = FLEE_LOCALSUBSdouble ( "arq.txt" , 12.35 , 2 , "___" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
arquivo de nota 12.35
arquivo de nota 12,35

12,35 12.35  12.345

arriz12.35

12,351212  
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
arquivo de nota ___
arquivo de nota ___

___ ___  12.345

arriz12.35

12.351212  
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 4 substituicoes
```

























<br>

<h3 align="center"> int FLEE_LOCALSUBSchar ( const char * FILE_NAME , char VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um char definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSchar, é que nessa função a substituição é feita somente em valores separados, por isso o locamente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui somente valores separados 

    // Substituindo localmente todos os '&' em arq.txt por "_"
    int subs = FLEE_LOCALSUBSchar ( "arq.txt" , '&' , "_" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
walking&learning

if ( alive && breathing ) do this ();

if ( alive & breathing ) eat ();

if & & 7& 
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
walking&learning

if ( alive && breathing ) do this ();

if ( alive _ breathing ) eat ();

if _ _ 7&
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 3 substituicoes
```





















<br>

<h3 align="center"> int FLEE_LOCALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de uma string definido por OLD_WORD, a diferença dessa função para FLEE_GLOBALSUBSstring, é que nessa função a substituição é feita somente em valores separados, por isso o locamente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui somente valores separados 

    // Substituindo localmente todos os '&' em arq.txt por "_"
    int subs = FLEE_LOCALSUBSchar ( "arq.txt" , '&' , "_" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
allen é muito allen né!

tu sabia que tu é allen?

allen você é gamer né? allen, diga lá!
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
lindo é muito lindo né!

tu sabia que tu é allen?

lindo você é gamer né? allen, diga lá!
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 3 substituicoes
```



















<br>

<h3 align="center"> int FLEE_GLOBALSUBSintl ( const char* FILE_NAME , int WHAT_LINE , int VALUE , const char* TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um int definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSint, é que nessa função a substituição é feita em uma linha específica que é definida por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // GLOBAL = substitui todas as ocorrências

    // Substituindo todos os 18 presentes em arq.txt na linha 2
    int subs = FLEE_GLOBALSUBSintl ( "arq.txt" , 2 , 18 , ":z!" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
18
18 18 18 18 allen18
korega ni saimi is samaena ki to 18
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
18
removed removed removed removed allenremoved
korega ni saimi is samaena ki to 18
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 5 substituicoes
```






















<br>

<h3 align="center"> int FLEE_LOCALSUBSintl ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um int definido por VALUE, a diferença dessa função para FLEE_LOCALSUBSint, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // LOCAL = substitui valores separados

    // Substituindo 12.35 na linha 2 por "removed" em arq.txt
    int subs = FLEE_LOCALSUBSintl ( "arq.txt" , 2 , 18 , "removed" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
18
18 18 18 18 allen18
korega ni saimi is samaena ki to 18
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
18
removed removed removed removed allen18
korega ni saimi is samaena ki to 18
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 4 substituicoes
```



























<br>

<h3 align="center"> int FLEE_GLOBALSUBSfloatl ( const char * FILE_NAME , int WHAT_LINE , float VALUE, int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um float definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSfloat, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo 12.35 na linha 2 por "removed" em arq.txt
    int subs = FLEE_GLOBALSUBSfloatl ( "arq.txt" , 2 , 12.35 , 2 , "removed" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
text = 12.35
tokado12.35 surime 12,35

aquihabara 12,35
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
text = 12.35
tokadoremoved surime removed

aquihabara 12,35
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 2 substituicoes
```























<br>

<h3 align="center"> int FLEE_LOCALSUBSfloatl ( const char * FILE_NAME , int WHAT_LINE , float VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um float definido por VALUE, a diferença dessa função para FLEE_LOCALSUBSfloat, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo 12.35 na linha 2 por "removed" em arq.txt
    int subs = FLEE_LOCALSUBSfloatl ( "arq.txt" , 2 , 12.35 , 2 , "removed" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
text = 12.35
tokado12.35 surime 12,35

aquihabara 12,35
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
text = 12.35
tokado12.35 surime removed

aquihabara 12,35
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 1 substituicoes
```

























<br>

<h3 align="center"> int FLEE_GLOBALSUBSdoublel ( const char * FILE_NAME , int WHAT_LINE , double VALUE, int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um double definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSdouble, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo 12.35 na linha 2 por "*rem" em arq.txt
    int subs = FLEE_GLOBALSUBSdouble ( "arq.txt" , 2 , 12.35 , 2 , "*rem" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
text = 12.35
tokado12.35 surime 12,35

aquihabara 12,35
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
text = 12.35
tokado*rem surime *rem

aquihabara 12,35
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 2 substituicoes
```



























<br>

<h3 align="center"> int FLEE_LOCALSUBSdouble ( const char * FILE_NAME , int WHAT_LINE , double VALUE , int COMMAS , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um double definido por VALUE, a diferença dessa função para FLEE_LOCALSUBSdouble, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo 12.35 na linha 2 por "*rem" em arq.txt
    int subs = FLEE_LOCALSUBSfloatl ( "arq.txt" , 2 , 12.35 , 2 , "removed" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
text = 12.35
tokado12.35 surime 12,35

aquihabara 12,35
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
text = 12.35
tokado12.35 surime removed

aquihabara 12,35
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 1 substituicoes
```









<br>

<h3 align="center"> int FLEE_GLOBALSUBScharl ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de um char definido por VALUE, a diferença dessa função para FLEE_GLOBALSUBSchar, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo em arq.txt na linha 3 todos os '&' por *rem*
    int subs = FLEE_GLOBALSUBScharl ( "arq.txt" , 3 , '&' , "*rem*" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```txt
*I HAVE THIS FILE*
------------------
& for& && &things list &
& for& && &things list &
& for& && &things list &
&&
```

<br>

#### SAÍDA DO ARQUIVO:

```txt
*I HAVE THIS FILE*
------------------
*rem* for*rem* *rem**rem* *rem*things list *rem*
& for& && &things list &
& for& && &things list &
&&
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 6 substituicoes
```























<br>

<h3 align="center"> int FLEE_LOCALSUBScharl ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de um char definido por VALUE, a diferença dessa função para FLEE_LOCALSUBSchar, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo em arq.txt localmente os valores igual a '#' por "allen" na linha 1
    int subs = FLEE_LOCALSUBScharl ( "arq.txt" , 2 , '#' , "allen" );

    // Printando todas as substituições
    printf ("Foram %d substituicoes", subs );
}

```

<br>

#### | arq.txt

```
[THIS IS A SETBOX] # ##AS # ASAD # #
USERNAME=##ASDAS
AGE=21SA12##
```

<br>

#### SAÍDA DO ARQUIVO:

```
[THIS IS A SETBOX] allen ##AS allen ASAD allen allen
USERNAME=##ASDAS
AGE=21SA12##
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 4 substituicoes
```
























<br>

<h3 align="center"> int FLEE_GLOBALSUBSstringl ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo globalmente, todas as ocorrências de uma palavra / string definida por STRING, a diferença dessa função para FLEE_GLOBALSUBSstring, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo globalmente todas as palavras allen por lindo no arquivo "arq.txt" na linha 5
    int subs = FLEE_GLOBALSUBSstringl ( "arq.txt" , 5 , "allen" , "lindo" );

    // Printando a quantidade de substituições feitas
    printf ("Foram %d substituicoes" , subs );
}

```

<br>

#### | arq.txt

```
this is a place for allen
allen have been here for a long time
do u remember of allen?
allen wasn't your friend?
u don't know allen? allen is a master of hacking, he used to be called allenwalker
```

<br>

#### SAÍDA DO ARQUIVO:

```
this is a place for allen
allen have been here for a long time
do u remember of allen?
allen wasn't your friend?
u don't know lindo? lindo is a master of hacking, he used to be called lindowalker
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 3 substituicoes
```























<br>

<h3 align="center"> int FLEE_LOCALSUBSstringl ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função serve para substituir em um arquivo localmente, todas as ocorrências de uma palavra / string definido por STRING, a diferença dessa função para FLEE_LOCALSUBSstring, é que nessa função a substituição é feita em uma linha específica que é definido por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Substituindo localmente todas as palavras allen por shaka no arquivo "arq.txt" na linha 5
    int subs = FLEE_LOCALSUBSstringl ( "arq.txt" , 5 , "allen" , "shaka" );

    // Printando a quantidade de substituições feitas
    printf ("Foram %d substituicoes" , subs );
}

```

<br>

#### | arq.txt

```
this is a place for allen
allen have been here for a long time
do u remember of allen?
allen wasn't your friend?
u don't know allen? allen is a master of hacking, he used to be called allenwalker
```

<br>

#### SAÍDA DO ARQUIVO:

```
this is a place for allen
allen have been here for a long time
do u remember of allen?
allen wasn't your friend?
u don't know allen? shaka is a master of hacking, he used to be called allenwalker
```

<br>

#### SAÍDA DO CONSOLE:

```txt
Foram 1 substituicoes
```
































<br>

<h3 align="center"> void FLEE_WRITEint ( const char * FILE_NAME , int VALUE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao arquivo um inteiro definido por VALUE, na última posição do arquivo, sem apagar o conteúdo existente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Adicionando o valor 202200132 no arquivo arq.txt
    FLEE_WRITEint ( "arq.txt" , 202200132 );
}

```

<br>

#### | arq.txt

```
[content]
age=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
age=202200132
```

<br>

















<br>

<h3 align="center"> void FLEE_WRITEintl ( const char * FILE_NAME , int VALUE , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao arquivo um inteiro definido por VALUE no fim de uma linha especificada por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Adicionando o valor 65 no arquivo arq.txt na linha 3
    FLEE_WRITEintl ( "arq.txt" , 65 , 3 );
}

```

<br>

#### | arq.txt

```
[content]
name=
age=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=
age=65
```

<br>


















<br>

<h3 align="center"> void FLEE_WRITESUPAint ( const char * FILE_NAME , int VALUE , int WHAT_LINE , int WHAT_COLUMN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao arquivo um inteiro definido por VALUE, em uma linha especificada por WHAT_LINE a partir de uma coluna especificada por WHAT_COLUMN`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 12 no arquivo arq.txt na linha 3 na coluna 5
    FLEE_WRITESUPAint ( "arq.txt" , 12 , 3 , 5 );
}

```

<br>

#### | arq.txt

```
[content]
name=
age= , young
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=
age= 12, young
```

<br>



























<br>

<h3 align="center"> void FLEE_WRITEfloat ( const char * FILE_NAME , float VALUE , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao final do arquivo um número real do tipo float definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 12.35 no arquivo arq.txt
    FLEE_WRITEfloat ( "arq.txt" , 12.35 , 1 );
}

```

<br>

#### | arq.txt

```
[content]
name=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=12.4 <- arredondou
```

<br>























<br>

<h3 align="center"> void FLEE_WRITEfloatl ( const char * FILE_NAME , float VALUE , int COMMAS , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um número real do tipo float definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 9.35 no arquivo arq.txt na linha 3
    FLEE_WRITEfloatl ("arq.txt" , 9.35 , 1 , 3 );
}

```

<br>

#### | arq.txt

```
[content]
name=
age=
id=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=
age=9.4 <- arredondou
id=
```

<br>














<br>

<h3 align="center"> void FLEE_WRITESUPAfloat ( const char * FILE_NAME , float VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um número real do tipo float definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE e uma coluna definida por WHAT_COLUMN`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 10.00 no arquivo arq.txt na linha 3 na coluna 30
    FLEE_WRITESUPAfloat ( "arq.txt" , 10.00 , 1 , 3 , 30 );
}

```

<br>

#### | arq.txt

```
[list]
content = name {  } , grade {  } , age {  }
content = name {  } , grade {  } , age {  }
content = name {  } , grade {  } , age {  }
```

<br>

#### SAÍDA DO ARQUIVO:

```
[list]
content = name {  } , grade {  } , age {  }
content = name {  } , grade { 10.0 } , age {  }
content = name {  } , grade {  } , age {  }
```

<br>














<br>

<h3 align="center"> void FLEE_WRITEdouble ( const char * FILE_NAME , double VALUE , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao final do arquivo um número real do tipo double definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 12.4 no arquivo arq.txt
    FLEE_WRITEdouble ( "arq.txt" , 12.4 , 1 );
}

```

<br>

#### | arq.txt

```
[content]
name=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=12.4 <- arredondou
```

<br>














<br>

<h3 align="center"> void FLEE_WRITEdoublel ( const char * FILE_NAME , double VALUE , int COMMAS , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um número real do tipo double definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 14.99 no arquivo arq.txt na linha 3
    FLEE_WRITEfloatl ("arq.txt" , 14.99 , 2 , 2 );
}

```

<br>

#### | arq.txt

```
[content]
name=
age=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=
age=14.99
```

<br>





















<br>

<h3 align="center"> void FLEE_WRITESUPAdouble ( const char * FILE_NAME , double VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um número real do tipo double definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE e uma coluna definida por WHAT_COLUMN`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o valor 10.00 no arquivo arq.txt na linha 2 na coluna 27
    FLEE_WRITESUPAdouble ( "arq.txt" , 10.00 , 1 , 2 , 27 );
}

```

<br>

#### | arq.txt

```
[list]
content = name {} , grade {} , age {}
```

<br>

#### SAÍDA DO ARQUIVO:

```
[list]
content = name {} , grade {10.0} , age {}
```

<br>

























<br>

<h3 align="center"> void FLEE_WRITEchar ( const char * FILE_NAME , char VALUE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao final do arquivo um caractere do tipo char definido por VALUE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o char # no arquivo arq.txt
    FLEE_WRITEchar ( "arq.txt" , '#' );
}

```

<br>

#### | arq.txt

```
[content]
special=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
special=#
```

<br>














<br>

<h3 align="center"> void FLEE_WRITEcharl ( const char * FILE_NAME , char VALUE , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um char definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o char '*' no arquivo arq.txt na linha 3
    FLEE_WRITEcharl ( "arq.txt" , '*' , 3  );
}

```

<br>

#### | arq.txt

```
[content]
name=
especial=
thing=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
name=
especial=*
thing=
```

<br>





















<br>

<h3 align="center"> void FLEE_WRITESUPAchar ( const char * FILE_NAME , char VALUE , int WHAT_LINE , int WHAT_COLUMN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, um char definido por VALUE no fim de uma linha específica que é definida por WHAT_LINE e uma coluna definida por WHAT_COLUMN`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando o char '!' no arquivo "arq.txt" na linha 1 e coluna 29
    FLEE_WRITESUPAchar ( "arq.txt" , '!' , 1 , 29 );
}

```

<br>

#### | arq.txt

```
professor: aluno tome cuidado
```

<br>

#### SAÍDA DO ARQUIVO:

```
professor: aluno tome cuidado!
```

<br>



























<br>

<h3 align="center"> void FLEE_WRITEstring ( const char * FILE_NAME , const char * STRING ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona ao final do arquivo uma palavra / string definida por STRING`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando a palavra allen no arquivo arq.txt
    FLEE_WRITEstring ( "arq.txt" , "allen" );
}

```

<br>

#### | arq.txt

```
[content]
namaewa=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
namaewa=allen
```

<br>














<br>

<h3 align="center"> void FLEE_WRITEstringl ( const char * FILE_NAME , const char * STRING , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, uma palavra / string definida por STRING no fim de uma linha específica que é definida por WHAT_LINE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0

    // Adicionando a palavra allen no arquivo "arq.txt" na linha 4
    FLEE_WRITEstringl ( "arq.txt" , "allen" , 4 );
}

```

<br>

#### | arq.txt

```
[content]
id=
age=
name=
```

<br>

#### SAÍDA DO ARQUIVO:

```
[content]
id=
age=
name=allen
```

<br>





















<br>

<h3 align="center"> void FLEE_WRITESUPAstring ( const char * FILE_NAME , const char * STRING , int WHAT_LINE , int WHAT_COLUMN ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente adiciona em um arquivo, uma palavra / string definida por STRING no fim de uma linha específica que é definida por WHAT_LINE e uma coluna definida por WHAT_COLUMN`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Observação: Linhas começam em 1
    // Observação: Colunas começam em 0
    
    // Aviso: A função pode ter alguns problemas no posicionamento da strings em algumas linhas
    // por isso, sempre faça o teste para saber onde o resultado irá ficar, e se possível caso vá preencher
    // uma coluna que não exista adicione um espaço em branco para evitar erros, e o valor ser printado na linha de baixo
    // basicamente isso [ faça isso: "linha = " e não isso: "linha =" ]

    // Adicionando a palavra lindo na linha 3 na coluna 27 
    FLEE_WRITESUPAstring ( "arq.txt" , "lindo" , 3 , 27 );
}

```

<br>

#### | arq.txt

```
Senpai: : )
allen: >B )
Senpai: allen você é muito !
```

<br>

#### SAÍDA DO ARQUIVO:

```
Senpai: : )
allen: >B )
Senpai: allen você é muito lindo!
```

<br>
























<br>

<h3 align="center"> int FLEE_GETSint ( const char * FILE_NAME , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um inteiro em uma linha especifíca definida por WHAT_LINE e o retorna`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando dois valores específicos do arquivo arq.txt
    int x = FLEE_GETSint ( "arq.txt" , 1 );
    int y = FLEE_GETSint ( "arq.txt" , 2 );

    // Printando esses valores
    printf ("GOTOXY ( %d , %d );" , x , y );
}

```

<br>

#### | arq.txt

```
[posx]
x=12
y=14
```

<br>

#### SAÍDA DO CONSOLE:

```
GOTOXY ( 12 , 14 );
```

<br>







<br>

<h3 align="center"> float FLEE_GETSfloat ( const char * FILE_NAME , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um float em uma linha especifíca definida por WHAT_LINE e o retorna`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando dois valores específicos do arquivo arq.txt
    float alun01 = FLEE_GETSfloat ( "arq.txt" , 1 );
    float alun02 = FLEE_GETSfloat ( "arq.txt" , 2 );

    // Printando esses valores
    printf ("NOTA DO ALUNO 01 = %.1f \nNOTA DO ALUNO 02 = %.1f" , alun01 , alun02 );
}

```

<br>

#### | arq.txt

```
[GRADES]
aluno_um -> 2.3
aluno_dois -> 9.33
...
```

<br>

#### SAÍDA DO CONSOLE:

```
NOTA DO ALUNO 01 = 2.3
NOTA DO ALUNO 02 = 9.3
```

<br>













<br>

<h3 align="center"> double FLEE_GETSdouble ( const char * FILE_NAME , int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um double em uma linha especifíca definida por WHAT_LINE e o retorna`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando dois valores específicos do arquivo arq.txt
    double n1 = FLEE_GETSdouble ( "arq.txt" , 1 );
    double n2 = FLEE_GETSdouble ( "arq.txt" , 2 );

    // Printando esses valores
    printf ("NOTA 01 = %.1lf \nNOTA 02 = %.1lf" , n1 , n2 );
}

```

<br>

#### | arq.txt

```
[GRADES]
nota_um -> 1.5
nota_dois -> 3.4
...
```

<br>

#### SAÍDA DO CONSOLE:

```
NOTA 01 = 1.5
NOTA 02 = 3.4
```

<br>













<br>

<h3 align="center"> void FLEE_GETSstring ( const char * FILE_NAME , char * STRING, int WHAT_LINE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega uma string em uma linha especifíca definida por WHAT_LINE e a salva em STRING`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    char line_01 [ 100 ];
    char line_06 [ 100 ];

    // Pegando algumas linha inteira de um arquivo
    FLEE_GETSstring ( "arq.txt" , line_01 , 1 );
    FLEE_GETSstring ( "arq.txt" , line_06 , 6 );

    // Printando as 2 linhas
    echo (line_01);
    echo (line_06);
}
```

<br>

#### | arq.txt

```
Bota na, bota na, bota na
Bota na Pipokinha
Bota na, bota na, bota na
Bota na Pipokinha
Bota na, bota na, bota na
Bota na Pipokinha
```

<br>

#### SAÍDA DO CONSOLE:

```
Bota na, bota na, bota na
Bota na Pipokinha
```

<br>

























<br>

<h3 align="center"> int FLEE_GETCHint ( const char * FILE_NAME, int WHAT_LINE, int START_COL, int END_COL ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo int em um arquivo em uma linha especifíca definida por WHAT_LINE e entre duas colunas a START_COL e a END_COL e então retorna esse valor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando o valor do id presente no arquivo "arq.txt"
    int ID = FLEE_GETCHint ( "arq.txt" , 8 , 5 , 14 );

    // Printando o valor no console
    printf ("O ID requisitado = %d", ID );
}
```

<br>

#### | arq.txt

```
+----------------+
| [SYSTEM_ALLEN] |
+----------------+
|	   NAME      |
|    [ allen ]   |		
+----------------+
|	    ID	     |
|  [ 202200132 ] |
+----------------+
```

<br>

#### SAÍDA DO CONSOLE:

```
O ID requisitado = 202200132
```

<br>



























<br>

<h3 align="center"> float FLEE_GETCHfloat ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo float em um arquivo em uma linha especifíca definida por WHAT_LINE e entre duas colunas a START_COL e a END_COL e então retorna esse valor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando o valor de GRADE presente no arquivo "arq.txt"
    float GRADE = FLEE_GETCHfloat ( "arq.txt" , 8 , 7 , 12 );

    // Printando o valor no console
    printf ("A GRADE = %.2f", GRADE );
}
```

<br>

#### | arq.txt

```
+----------------+
| [SYSTEM_ALLEN] |
+----------------+
|	   NAME      |
|    [ allen ]   |		
+----------------+
|	  GRADE	     |
|   [ 7.65 ]     |
+----------------+
```

<br>

#### SAÍDA DO CONSOLE:

```
A GRADE = 7.65
```

<br>














<br>

<h3 align="center"> double FLEE_GETCHdouble ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo double em um arquivo em uma linha especifíca definida por WHAT_LINE e entre duas colunas a START_COL e a END_COL e então retorna esse valor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando o valor de GASTO presente no arquivo "arq.txt"
    double GASTO = FLEE_GETCHdouble ( "arq.txt" , 8 , 7 , 12 );

    // Printando o valor no console
    printf ("O gasto foi de R$%.2f", GASTO );
}
```

<br>

#### | arq.txt

```
+----------------+
| [SYSTEM_ALLEN] |
+----------------+
|	   NAME      |
|    [ allen ]   |		
+----------------+
|	  GASTO	     |
|   [ 9.35 ]     |
+----------------+
```

<br>

#### SAÍDA DO CONSOLE:

```
O gasto foi de R$9.35
```

<br>













<br>

<h3 align="center"> char FLEE_GETCHchar ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo char em um arquivo em uma linha especifíca definida por WHAT_LINE e entre duas colunas a START_COL e a END_COL e então retorna esse valor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando o valor de SPC presente no arquivo "arq.txt"
    char SPC = FLEE_GETCHchar ( "arq.txt" , 8 , 9 , 11 );
    
    // Printando o valor no console
    printf ("Seu especial e %c", SPC );
}
```

<br>

#### | arq.txt

```
+----------------+
| [SYSTEM_ALLEN] |
+----------------+
|	   NAME      |
|    [ allen ]   |		
+----------------+
|	  SPECIAL	 | 
|      [ % ]     |
+----------------+
```

<br>

#### SAÍDA DO CONSOLE:

```
Seu especial e %
```

<br>















<br>

<h3 align="center"> void FLEE_GETCHstring ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL , char * STRING ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo string em um arquivo em uma linha especifíca definida por WHAT_LINE e entre duas colunas a START_COL e a END_COL e então retorna esse valor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    char USERNAME [ 50 ];

    // Pegando o nome de usuário de um protótipo
    // de um banco de dados de um jogo
    FLEE_GETCHstring ( "arq.txt" , 4 , 18 , 30 , USERNAME );

    // Printando o nome de usuário registrado
    printf ("Bem vindo, %s", USERNAME);
}
```

<br>

#### | arq.txt

```
[args:(ALLEN_GAME:{pirocki's Adventure})]
|
|
+->>> USERNAME = (allen_walker)
|
|
|
+->>> MONEY    = (R$ 1500.00)
|
|
|
+->>> STREAK   = (120)
|
|
|
+->>> ID       = (202000132)
```

<br>

#### SAÍDA DO CONSOLE:

```
Bem vindo, allen_walker
```

<br>





















<br>

<h3 align="center"> int FLEE_GETSLint ( const char * FILE_NAME , int WHAT_LINE , int COL ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função pega um valor do tipo int em um arquivo em uma linha especifíca definida por WHAT_LINE a partir de uma coluna inicial definida por COL`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{   
    // Pegando uma data a partir de um arquivo arq.txt
    int dia = FLEE_GETSLint ( "arq.txt" , 4 , 4 );
    int mes = FLEE_GETSLint ( "arq.txt" , 5 , 4 );
    int ano = FLEE_GETSLint ( "arq.txt" , 6 , 4 );

    // Printando
    printf ("DATA: %d / %d / %d ", dia , mes , ano );
}
```

<br>

#### | arq.txt

```
---
age= 12
---
dia=16
mes=11
ano=2004
---
```

<br>

#### SAÍDA DO CONSOLE:

```
DATA: 16 / 11 / 2004
```

<br>








